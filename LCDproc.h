/*
 *   Copyright (C) 2016,2017 by Tony Corbett G0WFV
 *   Copyright (C) 2018,2020,2025 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if !defined(LCDproc_H)
#define	LCDproc_H

#include "Display.h"
#include "Timer.h"

#include <string>

#if defined(_WIN32) || defined(_WIN64)
#include <ws2tcpip.h>
#include <Winsock2.h>
#endif

class CLCDproc : public CDisplay
{
public:
	CLCDproc(std::string address, unsigned int port, unsigned short localPort, const std::string& callsign, bool displayClock, bool utc, bool duplex, bool dimOnIdle);
	virtual ~CLCDproc();

	virtual bool open();

	virtual void close();

protected:
	virtual void setIdleInt();
	virtual void setErrorInt(const char* text);
	virtual void setLockoutInt();
	virtual void setQuitInt();
  
	virtual void writeP25Int(const char* source, bool group, unsigned int dest, const char* type);
	virtual void writeP25RSSIInt(unsigned char rssi); 
	virtual void clearP25Int();

	virtual void writePOCSAGInt(uint32_t ric, const std::string& message);
	virtual void clearPOCSAGInt();

	virtual void writeCWInt();
	virtual void clearCWInt();

	virtual void clockInt(unsigned int ms);

private:
	std::string  m_address;
	unsigned int m_port;
	unsigned short m_localPort;
	std::string  m_callsign;
	bool         m_displayClock;
	bool         m_utc;
	bool         m_duplex;
	bool         m_dimOnIdle;
	CTimer       m_clockDisplayTimer;
	unsigned int m_rssiCount1; 
	unsigned int m_rssiCount2; 

#if defined(_WIN32) || defined(_WIN64)
	int  socketPrintf(SOCKET fd, const char* format, ...);
#else
	int  socketPrintf(int fd, const char *format, ...);
#endif
	void defineScreens();
};

#endif
