/***************************************************************************
 *   Copyright (C) 2015 by Sean D'Epagnier                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
 **************************************************************************/

#ifndef _WEATHER_ROUTING_REPORT_DIALOG_H_
#define _WEATHER_ROUTING_REPORT_DIALOG_H_

#include <list>

#include "WeatherRoutingUI.h"

class RouteMapOverlay;
class WeatherRouting;

class ReportDialog : public ReportDialogBase {
public:
  ReportDialog(WeatherRouting& weatherrouting);

  void SetRouteMapOverlays(std::list<RouteMapOverlay*> routemapoverlays);

  bool m_bReportStale;

protected:
  void GenerateRoutesReport();
  void OnInformation(wxCommandEvent& event);
  void OnClose(wxCommandEvent& event) { Hide(); }

private:
  wxDateTime DisplayedTime(wxDateTime t);
  wxString FormatTime(wxDateTime t);
  WeatherRouting& m_WeatherRouting;
};

#endif