/*
 *   Copyright (C) 2015-2023,2025 by Jonathan Naylor G4KLX
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

#if !defined(CONF_H)
#define	CONF_H

#include <string>
#include <vector>

class CConf
{
public:
  CConf(const std::string& file);
  ~CConf();

  bool read();

  // The General section
  std::string  getCallsign() const;
  unsigned int getId() const;
  unsigned int getTimeout() const;
  bool         getDuplex() const;
  std::string  getDisplay() const;
  bool         getDaemon() const;

  // The Info section
  unsigned int getRXFrequency() const;
  unsigned int getTXFrequency() const;
  unsigned int getPower() const;
  float        getLatitude() const;
  float        getLongitude() const;
  int          getHeight() const;
  std::string  getLocation() const;
  std::string  getDescription() const;
  std::string  getURL() const;

  // The Log section
  unsigned int getLogDisplayLevel() const;
  unsigned int getLogFileLevel() const;
  std::string  getLogFilePath() const;
  std::string  getLogFileRoot() const;
  bool         getLogFileRotate() const;

  // The CW ID section
  bool         getCWIdEnabled() const;
  unsigned int getCWIdTime() const;
  std::string  getCWIdCallsign() const;

  // The DMR Id section
  std::string  getDMRIdLookupFile() const;
  unsigned int getDMRIdLookupTime() const;

  // The Modem section
  std::string  getModemProtocol() const;
  std::string  getModemUARTPort() const;
  unsigned int getModemUARTSpeed() const;
  std::string  getModemI2CPort() const;
  unsigned int getModemI2CAddress() const;
  std::string  getModemModemAddress() const;
  unsigned short getModemModemPort() const;
  std::string  getModemLocalAddress() const;
  unsigned short getModemLocalPort() const;
  bool         getModemRXInvert() const;
  bool         getModemTXInvert() const;
  bool         getModemPTTInvert() const;
  unsigned int getModemTXDelay() const;
  unsigned int getModemDMRDelay() const;
  int          getModemTXOffset() const;
  int          getModemRXOffset() const;
  int          getModemRXDCOffset() const;
  int          getModemTXDCOffset() const;
  float        getModemRFLevel() const;
  float        getModemRXLevel() const;
  float        getModemCWIdTXLevel() const;
  float        getModemDMRTXLevel() const;
  float        getModemP25TXLevel() const;
  float        getModemPOCSAGTXLevel() const;
  std::string  getModemRSSIMappingFile() const;
  bool         getModemUseCOSAsLockout() const;
  bool         getModemTrace() const;
  bool         getModemDebug() const;

  // The Transparent Data section
  bool         getTransparentEnabled() const;
  std::string  getTransparentRemoteAddress() const;
  unsigned short getTransparentRemotePort() const;
  unsigned short getTransparentLocalPort() const;
  unsigned int getTransparentSendFrameType() const;

  // The D-Star section
  bool         getDStarEnabled() const;
  std::string  getDStarModule() const;
  bool         getDStarSelfOnly() const;
  std::vector<std::string> getDStarBlackList() const;
  std::vector<std::string> getDStarWhiteList() const;
  bool         getDStarAckReply() const;
  unsigned int getDStarAckTime() const;
  DSTAR_ACK    getDStarAckMessage() const;
  bool         getDStarErrorReply() const;
  bool         getDStarRemoteGateway() const;
  unsigned int getDStarModeHang() const;

  // The DMR section
  bool         getDMREnabled() const;
  DMR_BEACONS  getDMRBeacons() const;
  unsigned int getDMRBeaconInterval() const;
  unsigned int getDMRBeaconDuration() const;
  unsigned int getDMRId() const;
  unsigned int getDMRColorCode() const;
  bool         getDMREmbeddedLCOnly() const;
  bool         getDMRDumpTAData() const;
  bool         getDMRSelfOnly() const;
  std::vector<unsigned int> getDMRPrefixes() const;
  std::vector<unsigned int> getDMRBlackList() const;
  std::vector<unsigned int> getDMRWhiteList() const;
  std::vector<unsigned int> getDMRSlot1TGWhiteList() const;
  std::vector<unsigned int> getDMRSlot2TGWhiteList() const;
  unsigned int getDMRCallHang() const;
  unsigned int getDMRTXHang() const;
  unsigned int getDMRModeHang() const;
  DMR_OVCM     getDMROVCM() const;
  bool         getDMRProtect() const;

  // The P25 section
  bool         getP25Enabled() const;
  unsigned int getP25Id() const;
  unsigned int getP25NAC() const;
  bool         getP25SelfOnly() const;
  bool         getP25OverrideUID() const;
  bool         getP25RemoteGateway() const;
  unsigned int getP25TXHang() const;
  unsigned int getP25ModeHang() const;


  // The POCSAG section
  bool         getPOCSAGEnabled() const;
  unsigned int getPOCSAGFrequency() const;

 
  // The D-Star Network section
  bool         getDStarNetworkEnabled() const;
  std::string  getDStarGatewayAddress() const;
  unsigned short getDStarGatewayPort() const;
  std::string  getDStarLocalAddress() const;
  unsigned short getDStarLocalPort() const;
  unsigned int getDStarNetworkModeHang() const;
  bool         getDStarNetworkDebug() const;

  // The DMR Network section
  bool         getDMRNetworkEnabled() const;
  std::string  getDMRNetworkType() const;
  std::string  getDMRNetworkRemoteAddress() const;
  unsigned short getDMRNetworkRemotePort() const;
  std::string  getDMRNetworkLocalAddress() const;
  unsigned short getDMRNetworkLocalPort() const;
  std::string  getDMRNetworkPassword() const;
  std::string  getDMRNetworkOptions() const;
  bool         getDMRNetworkDebug() const;
  unsigned int getDMRNetworkJitter() const;
  bool         getDMRNetworkSlot1() const;
  bool         getDMRNetworkSlot2() const;
  unsigned int getDMRNetworkModeHang() const;

  // The P25 Network section
  bool         getP25NetworkEnabled() const;
  std::string  getP25GatewayAddress() const;
  unsigned short getP25GatewayPort() const;
  std::string  getP25LocalAddress() const;
  unsigned short getP25LocalPort() const;
  unsigned int getP25NetworkModeHang() const;
  bool         getP25NetworkDebug() const;

  // The POCSAG Network section
  bool         getPOCSAGNetworkEnabled() const;
  std::string  getPOCSAGGatewayAddress() const;
  unsigned short getPOCSAGGatewayPort() const;
  std::string  getPOCSAGLocalAddress() const;
  unsigned short getPOCSAGLocalPort() const;
  unsigned int getPOCSAGNetworkModeHang() const;
  bool         getPOCSAGNetworkDebug() const;

  // The TFTSERIAL section
  std::string  getTFTSerialPort() const;
  unsigned int getTFTSerialBrightness() const;
  unsigned int getTFTSerialScreenLayout() const;

  // The HD44780 section
  unsigned int getHD44780Rows() const;
  unsigned int getHD44780Columns() const;
  std::vector<unsigned int> getHD44780Pins() const;
  unsigned int getHD44780i2cAddress() const;
  bool         getHD44780PWM() const;
  unsigned int getHD44780PWMPin() const;
  unsigned int getHD44780PWMBright() const;
  unsigned int getHD44780PWMDim() const;
  bool         getHD44780DisplayClock() const;
  bool         getHD44780UTC() const;

  // The Nextion section
  std::string    getNextionPort() const;
  unsigned int   getNextionBrightness() const;
  bool           getNextionDisplayClock() const;
  bool           getNextionUTC() const;
  unsigned int   getNextionIdleBrightness() const;
  unsigned int   getNextionScreenLayout() const;
  bool           getNextionTempInFahrenheit() const;
  bool           getNextionOutput() const;
  unsigned short getNextionUDPPort() const;

  // The OLED section
  unsigned char  getOLEDType() const;
  unsigned char  getOLEDBrightness() const;
  bool           getOLEDInvert() const;
  bool           getOLEDScroll() const;
  bool           getOLEDRotate() const;
  bool           getOLEDLogoScreensaver() const;

  // The LCDproc section
  std::string  getLCDprocAddress() const;
  unsigned short getLCDprocPort() const;
  unsigned short getLCDprocLocalPort() const;
  bool         getLCDprocDisplayClock() const;
  bool         getLCDprocUTC() const;
  bool         getLCDprocDimOnIdle() const;

  // The Lock File section
  bool         getLockFileEnabled() const;
  std::string  getLockFileName() const;

  // The Remote Control section
  bool         getRemoteControlEnabled() const;
  std::string  getRemoteControlAddress() const;
  unsigned short getRemoteControlPort() const;

private:
  std::string  m_file;
  std::string  m_callsign;
  unsigned int m_id;
  unsigned int m_timeout;
  bool         m_duplex;
  std::string  m_display;
  bool         m_daemon;

  unsigned int m_rxFrequency;
  unsigned int m_txFrequency;
  unsigned int m_power;
  float        m_latitude;
  float        m_longitude;
  int          m_height;
  std::string  m_location;
  std::string  m_description;
  std::string  m_url;

  unsigned int m_logDisplayLevel;
  unsigned int m_logFileLevel;
  std::string  m_logFilePath;
  std::string  m_logFileRoot;
  bool         m_logFileRotate;

  bool         m_cwIdEnabled;
  unsigned int m_cwIdTime;
  std::string  m_cwIdCallsign;

  std::string  m_dmrIdLookupFile;
  unsigned int m_dmrIdLookupTime;

  std::string  m_modemProtocol;
  std::string  m_modemUARTPort;
  unsigned int m_modemUARTSpeed;
  std::string  m_modemI2CPort;
  unsigned int m_modemI2CAddress;
  std::string  m_modemModemAddress;
  unsigned short m_modemModemPort;
  std::string  m_modemLocalAddress;
  unsigned short m_modemLocalPort;
  bool         m_modemRXInvert;
  bool         m_modemTXInvert;
  bool         m_modemPTTInvert;
  unsigned int m_modemTXDelay;
  unsigned int m_modemDMRDelay;
  int          m_modemTXOffset;
  int          m_modemRXOffset;
  int          m_modemRXDCOffset;
  int          m_modemTXDCOffset;
  float        m_modemRFLevel;
  float        m_modemRXLevel;
  float        m_modemCWIdTXLevel;
  float        m_modemDMRTXLevel;
  float        m_modemP25TXLevel;
  float        m_modemPOCSAGTXLevel;
  std::string  m_modemRSSIMappingFile;
  bool         m_modemUseCOSAsLockout;
  bool         m_modemTrace;
  bool         m_modemDebug;

  bool         m_transparentEnabled;
  std::string  m_transparentRemoteAddress;
  unsigned short m_transparentRemotePort;
  unsigned short m_transparentLocalPort;
  unsigned int m_transparentSendFrameType;

  bool         m_dmrEnabled;
  DMR_BEACONS  m_dmrBeacons;
  unsigned int m_dmrBeaconInterval;
  unsigned int m_dmrBeaconDuration;
  unsigned int m_dmrId;
  unsigned int m_dmrColorCode;
  bool         m_dmrSelfOnly;
  bool         m_dmrEmbeddedLCOnly;
  bool         m_dmrDumpTAData;
  std::vector<unsigned int> m_dmrPrefixes;
  std::vector<unsigned int> m_dmrBlackList;
  std::vector<unsigned int> m_dmrWhiteList;
  std::vector<unsigned int> m_dmrSlot1TGWhiteList;
  std::vector<unsigned int> m_dmrSlot2TGWhiteList;
  unsigned int m_dmrCallHang;
  unsigned int m_dmrTXHang;
  unsigned int m_dmrModeHang;
  DMR_OVCM     m_dmrOVCM;
  bool         m_dmrProtect;

  bool         m_p25Enabled;
  unsigned int m_p25Id;
  unsigned int m_p25NAC;
  bool         m_p25SelfOnly;
  bool         m_p25OverrideUID;
  bool         m_p25RemoteGateway;
  unsigned int m_p25TXHang;
  unsigned int m_p25ModeHang;

  bool         m_pocsagEnabled;
  unsigned int m_pocsagFrequency;

  bool         m_dmrNetworkEnabled;
  std::string  m_dmrNetworkType;
  std::string  m_dmrNetworkRemoteAddress;
  unsigned short m_dmrNetworkRemotePort;
  std::string  m_dmrNetworkLocalAddress;
  unsigned short m_dmrNetworkLocalPort;
  std::string  m_dmrNetworkPassword;
  std::string  m_dmrNetworkOptions;
  bool         m_dmrNetworkDebug;
  unsigned int m_dmrNetworkJitter;
  bool         m_dmrNetworkSlot1;
  bool         m_dmrNetworkSlot2;
  unsigned int m_dmrNetworkModeHang;

  bool         m_p25NetworkEnabled;
  std::string  m_p25GatewayAddress;
  unsigned short m_p25GatewayPort;
  std::string  m_p25LocalAddress;
  unsigned short m_p25LocalPort;
  unsigned int m_p25NetworkModeHang;
  bool         m_p25NetworkDebug;

  bool         m_pocsagNetworkEnabled;
  std::string  m_pocsagGatewayAddress;
  unsigned short m_pocsagGatewayPort;
  std::string  m_pocsagLocalAddress;
  unsigned short m_pocsagLocalPort;
  unsigned int m_pocsagNetworkModeHang;
  bool         m_pocsagNetworkDebug;

  std::string  m_tftSerialPort;
  unsigned int m_tftSerialBrightness;
  unsigned int m_tftSerialScreenLayout;

  unsigned int m_hd44780Rows;
  unsigned int m_hd44780Columns;
  std::vector<unsigned int> m_hd44780Pins;
  unsigned int m_hd44780i2cAddress;
  bool         m_hd44780PWM;
  unsigned int m_hd44780PWMPin;
  unsigned int m_hd44780PWMBright;
  unsigned int m_hd44780PWMDim;
  bool         m_hd44780DisplayClock;
  bool         m_hd44780UTC;

  std::string    m_nextionPort;
  unsigned int   m_nextionBrightness;
  bool           m_nextionDisplayClock;
  bool           m_nextionUTC;
  unsigned int   m_nextionIdleBrightness;
  unsigned int   m_nextionScreenLayout;
  bool           m_nextionTempInFahrenheit;
  bool           m_nextionOutput;
  unsigned short m_nextionUDPPort;
  
  unsigned char m_oledType;
  unsigned char m_oledBrightness;
  bool          m_oledInvert;
  bool          m_oledScroll;
  bool          m_oledRotate;
  bool          m_oledLogoScreensaver;

  std::string  m_lcdprocAddress;
  unsigned short m_lcdprocPort;
  unsigned short m_lcdprocLocalPort;
  bool         m_lcdprocDisplayClock;
  bool         m_lcdprocUTC;
  bool         m_lcdprocDimOnIdle;

  bool         m_lockFileEnabled;
  std::string  m_lockFileName;

  bool         m_remoteControlEnabled;
  std::string  m_remoteControlAddress;
  unsigned short m_remoteControlPort;
};

#endif
