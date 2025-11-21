/*
 *   Copyright (C) 2016,2018,2020,2025 by Jonathan Naylor G4KLX
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

#if !defined(nullptrDISPLAY_H)
#define	nullptrDISPLAY_H

#include "Display.h"

#include <string>

class CNullDisplay : public CDisplay
{
public:
	CNullDisplay();
	virtual ~CNullDisplay();

	virtual bool open();

	virtual void close();

protected:
	virtual void setIdleInt();
	virtual void setErrorInt(const char* text);
	virtual void setLockoutInt();
	virtual void setQuitInt();

	virtual void writeP25Int(const char* source, bool group, unsigned int dest, const char* type);
	virtual void clearP25Int();

	virtual void writePOCSAGInt(uint32_t ric, const std::string& message);
	virtual void clearPOCSAGInt();

	virtual void writeCWInt();
	virtual void clearCWInt();

private:
};

#endif
