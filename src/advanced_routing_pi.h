/******************************************************************************
 * $Id: advanced_routing_pi.h $
 *
 * Project:  OpenCPN
 * Purpose:  Advanced Routing Plugin
 * Author:   Sean D'Epagnier
 *
 ***************************************************************************
 *   Copyright (C) 2012 by Sean D'Epagnier                                 *
 *   sean@depagnier.com                                                    *
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
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.             *
 ***************************************************************************
 */

#ifndef _ADVANCED_ROUTINGPI_H_
#define _ADVANCED_ROUTINGPI_H_

#define     PLUGIN_VERSION_MAJOR    1
#define     PLUGIN_VERSION_MINOR    5

#define     MY_API_VERSION_MAJOR    1
#define     MY_API_VERSION_MINOR    8

#include "../../../include/ocpn_plugin.h"

#include "advancedroutingdialog.h"

//----------------------------------------------------------------------------------------------------------
//    The PlugIn Class Definition
//----------------------------------------------------------------------------------------------------------

#define ADVANCED_ROUTING_TOOL_POSITION    -1          // Request default positioning of toolbar tool

class advanced_routing_pi : public opencpn_plugin_18
{
public:
      advanced_routing_pi(void *ppimgr);
      ~advanced_routing_pi(void);

//    The required PlugIn Methods
      int Init(void);
      bool DeInit(void);

      int GetAPIVersionMajor();
      int GetAPIVersionMinor();
      int GetPlugInVersionMajor();
      int GetPlugInVersionMinor();
      wxBitmap *GetPlugInBitmap();
      wxString GetCommonName();
      wxString GetShortDescription();
      wxString GetLongDescription();

//    The override PlugIn Methods
      bool RenderOverlay(wxDC &dc, PlugIn_ViewPort *vp);
      void SetCursorLatLon(double lat, double lon);
      bool RenderGLOverlay(wxGLContext *pcontext, PlugIn_ViewPort *vp);

      void SetDefaults(void);

      int GetToolbarToolCount(void);

      void SetPositionFixEx(PlugIn_Position_Fix_Ex &pfix);
      void ShowPreferencesDialog( wxWindow* parent );

      void OnToolbarToolCallback(int id);


// Other public methods

      void SetAdvancedRoutingDialogX    (int x){ m_dialog_x = x;};
      void SetAdvancedRoutingDialogY    (int x){ m_dialog_y = x;}
      void SetAdvancedRoutingDialogSizeX(int x){ m_dialog_sx = x;}
      void SetAdvancedRoutingDialogSizeY(int x){ m_dialog_sy = x;}
      void SetColorScheme(PI_ColorScheme cs);

      void OnAdvanced_RoutingDialogClose();

private:
      bool LoadConfig(void);
      bool SaveConfig(void);

      wxFileConfig     *m_pconfig;
      wxWindow         *m_parent_window;

      AdvancedRoutingDialog     *m_pAdvanced_RoutingDialog;

      int              m_display_width, m_display_height;
      int              m_leftclick_tool_id;

      bool             m_bShowAdvanced_Routing;

      int              m_dialog_x, m_dialog_y;
      int              m_dialog_sx, m_dialog_sy;
};

#endif



