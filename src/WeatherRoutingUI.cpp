///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "WeatherRoutingUI.h"
#include <vector>

///////////////////////////////////////////////////////////////////////////

WeatherRoutingBase::WeatherRoutingBase(wxWindow* parent, wxWindowID id,
                                       const wxString& title,
                                       const wxPoint& pos, const wxSize& size,
                                       long style)
    : wxFrame(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxSize(400, 300), wxDefaultSize);

  m_menubar3 = new wxMenuBar(0);
  m_mFile = new wxMenu();
  wxMenuItem* m_mOpen;
  m_mOpen = new wxMenuItem(m_mFile, wxID_ANY,
                           wxString(_("&Open")) + wxT('\t') + wxT("Ctrl+O"),
                           wxEmptyString, wxITEM_NORMAL);
  m_mFile->Append(m_mOpen);

  wxMenuItem* m_mSave;
  m_mSave = new wxMenuItem(m_mFile, wxID_ANY,
                           wxString(_("&Save")) + wxT('\t') + wxT("Ctrl+S"),
                           wxEmptyString, wxITEM_NORMAL);
  m_mFile->Append(m_mSave);

  m_mFile->AppendSeparator();

  wxMenuItem* m_mSaveAs;
  m_mSaveAs = new wxMenuItem(
      m_mFile, wxID_ANY,
      wxString(_("&Save As...")) + wxT('\t') + wxT("Shift+Ctrl+S"),
      wxEmptyString, wxITEM_NORMAL);
  m_mFile->Append(m_mSaveAs);

  m_mFile->AppendSeparator();

  wxMenuItem* m_mClose;
  m_mClose = new wxMenuItem(m_mFile, wxID_ANY,
                            wxString(_("&Close")) + wxT('\t') + wxT("Ctrl+W"),
                            wxEmptyString, wxITEM_NORMAL);
  m_mFile->Append(m_mClose);

  m_menubar3->Append(m_mFile, _("&File"));

  m_mPosition = new wxMenu();
  wxMenuItem* m_mNewPosition;
  m_mNewPosition =
      new wxMenuItem(m_mPosition, wxID_ANY, wxString(_("&New Position")),
                     wxEmptyString, wxITEM_NORMAL);
  m_mPosition->Append(m_mNewPosition);

  wxMenuItem* m_mUpdateBoat;
  m_mUpdateBoat = new wxMenuItem(
      m_mPosition, wxID_ANY,
      wxString(_("&Update Boat Position")) + wxT('\t') + wxT("Ctrl+U"),
      wxEmptyString, wxITEM_NORMAL);
  m_mPosition->Append(m_mUpdateBoat);

  wxMenuItem* m_mDeletePosition;
  m_mDeletePosition =
      new wxMenuItem(m_mPosition, wxID_ANY, wxString(_("&Delete")),
                     wxEmptyString, wxITEM_NORMAL);
  m_mPosition->Append(m_mDeletePosition);

  wxMenuItem* m_mDeleteAllPositions;
  m_mDeleteAllPositions =
      new wxMenuItem(m_mPosition, wxID_ANY, wxString(_("Delete &All")),
                     wxEmptyString, wxITEM_NORMAL);
  m_mPosition->Append(m_mDeleteAllPositions);

  m_menubar3->Append(m_mPosition, _("&Position"));

  m_mConfiguration = new wxMenu();
  wxMenuItem* m_mNew;
  m_mNew = new wxMenuItem(m_mConfiguration, wxID_ANY,
                          wxString(_("&New")) + wxT('\t') + wxT("Ctrl+N"),
                          wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mNew);

  m_mBatch = new wxMenuItem(m_mConfiguration, wxID_ANY,
                            wxString(_("&Batch")) + wxT('\t') + wxT("Ctrl+B"),
                            wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mBatch);

  m_mEdit = new wxMenuItem(m_mConfiguration, wxID_ANY,
                           wxString(_("&Edit")) + wxT('\t') + wxT("Ctrl+E"),
                           wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mEdit);

  m_mGoTo = new wxMenuItem(m_mConfiguration, wxID_ANY,
                           wxString(_("&GoTo")) + wxT('\t') + wxT("Ctrl+G"),
                           wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mGoTo);

  m_mDelete = new wxMenuItem(m_mConfiguration, wxID_ANY,
                             wxString(_("&Delete")) + wxT('\t') + wxT("Ctrl+D"),
                             wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mDelete);

  m_mDeleteAll =
      new wxMenuItem(m_mConfiguration, wxID_ANY, wxString(_("Delete All")),
                     wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mDeleteAll);

  m_mConfiguration->AppendSeparator();

  m_mCompute =
      new wxMenuItem(m_mConfiguration, wxID_ANY,
                     wxString(_("&Compute")) + wxT('\t') + wxT("Ctrl+C"),
                     wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mCompute);

  m_mComputeAll =
      new wxMenuItem(m_mConfiguration, wxID_ANY,
                     wxString(_("Compute &All")) + wxT('\t') + wxT("Ctrl+A"),
                     wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mComputeAll);

  m_mStop = new wxMenuItem(m_mConfiguration, wxID_ANY,
                           wxString(_("&Stop")) + wxT('\t') + wxT("Ctrl+Z"),
                           wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mStop);

  wxMenuItem* m_mResetAll;
  m_mResetAll =
      new wxMenuItem(m_mConfiguration, wxID_ANY,
                     wxString(_("&Reset All")) + wxT('\t') + wxT("Ctrl+R"),
                     wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mResetAll);

  m_mConfiguration->AppendSeparator();

  m_mSaveAsTrack =
      new wxMenuItem(m_mConfiguration, wxID_ANY, wxString(_("Save as track")),
                     wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mSaveAsTrack);

  m_mSaveAllAsTracks = new wxMenuItem(m_mConfiguration, wxID_ANY,
                                      wxString(_("Save all as tracks")),
                                      wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mSaveAllAsTracks);

  m_mSaveAsRoute =
      new wxMenuItem(m_mConfiguration, wxID_ANY, wxString(_("Save as route")),
                     wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mSaveAsRoute);

  m_mExportRouteAsGPX = new wxMenuItem(
      m_mConfiguration, wxID_ANY,
      wxString(_("E&xport routing as GPX file")) + wxT('\t') + wxT("Ctrl+X"),
      wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mExportRouteAsGPX);

  m_mConfiguration->AppendSeparator();

  wxMenuItem* m_mFilter;
  m_mFilter = new wxMenuItem(m_mConfiguration, wxID_ANY,
                             wxString(_("&Filter")) + wxT('\t') + wxT("Ctrl+F"),
                             wxEmptyString, wxITEM_NORMAL);
  m_mConfiguration->Append(m_mFilter);

  m_menubar3->Append(m_mConfiguration, _("&Routings"));

  m_mView = new wxMenu();
  wxMenuItem* m_mSettings;
  m_mSettings = new wxMenuItem(m_mView, wxID_ANY, wxString(_("&Settings")),
                               wxEmptyString, wxITEM_NORMAL);
  m_mView->Append(m_mSettings);

  wxMenuItem* m_mStatistics;
  m_mStatistics = new wxMenuItem(
      m_mView, wxID_ANY, wxString(_("S&tatistics")) + wxT('\t') + wxT("Ctrl+T"),
      wxEmptyString, wxITEM_NORMAL);
  m_mView->Append(m_mStatistics);

  wxMenuItem* m_mReport;
  m_mReport = new wxMenuItem(m_mView, wxID_ANY, wxString(_("&Report")),
                             wxEmptyString, wxITEM_NORMAL);
  m_mView->Append(m_mReport);

  wxMenuItem* m_mPlot;
  m_mPlot = new wxMenuItem(m_mView, wxID_ANY,
                           wxString(_("&Plot")) + wxT('\t') + wxT("Ctrl+P"),
                           wxEmptyString, wxITEM_NORMAL);
  m_mView->Append(m_mPlot);

  wxMenuItem* m_mCursorPosition;
  m_mCursorPosition =
      new wxMenuItem(m_mView, wxID_ANY, wxString(_("&Cursor Position")),
                     wxEmptyString, wxITEM_NORMAL);
  m_mView->Append(m_mCursorPosition);

  wxMenuItem* m_mRoutePosition;
  m_mRoutePosition =
      new wxMenuItem(m_mView, wxID_ANY, wxString(_("&Route Position")),
                     wxEmptyString, wxITEM_NORMAL);
  m_mView->Append(m_mRoutePosition);

  wxMenuItem* m_mWeatherTable;
  m_mWeatherTable =
      new wxMenuItem(m_mView, wxID_ANY, wxString(_("&Weather Routing Table")),
                     wxEmptyString, wxITEM_NORMAL);
  m_mView->Append(m_mWeatherTable);

  m_menubar3->Append(m_mView, _("&View"));

  m_mHelp = new wxMenu();
  wxMenuItem* m_mInformation;
  m_mInformation = new wxMenuItem(
      m_mHelp, wxID_ANY, wxString(_("&Information")) + wxT('\t') + wxT("F1"),
      wxEmptyString, wxITEM_NORMAL);
  m_mHelp->Append(m_mInformation);

  wxMenuItem* m_mManual;
  m_mManual = new wxMenuItem(m_mHelp, wxID_ANY, wxString(_("&Manual")),
                             wxEmptyString, wxITEM_NORMAL);
  m_mHelp->Append(m_mManual);

  wxMenuItem* m_mAbout;
  m_mAbout = new wxMenuItem(m_mHelp, wxID_ANY, wxString(_("&About")),
                            wxEmptyString, wxITEM_NORMAL);
  m_mHelp->Append(m_mAbout);

  m_menubar3->Append(m_mHelp, _("&Help"));

  this->SetMenuBar(m_menubar3);

  m_mContextMenu = new wxMenu();
  wxMenuItem* m_mNew1;
  m_mNew1 = new wxMenuItem(m_mContextMenu, wxID_ANY,
                           wxString(_("&New")) + wxT('\t') + wxT("Ctrl+N"),
                           wxEmptyString, wxITEM_NORMAL);
  m_mContextMenu->Append(m_mNew1);

  m_mEdit1 = new wxMenuItem(m_mContextMenu, wxID_ANY,
                            wxString(_("&Edit")) + wxT('\t') + wxT("Ctrl+E"),
                            wxEmptyString, wxITEM_NORMAL);
  m_mContextMenu->Append(m_mEdit1);

  m_mCompute1 =
      new wxMenuItem(m_mContextMenu, wxID_ANY,
                     wxString(_("&Compute")) + wxT('\t') + wxT("Ctrl+C"),
                     wxEmptyString, wxITEM_NORMAL);
  m_mContextMenu->Append(m_mCompute1);

  m_mComputeAll1 =
      new wxMenuItem(m_mContextMenu, wxID_ANY,
                     wxString(_("Compute &All")) + wxT('\t') + wxT("Ctrl+A"),
                     wxEmptyString, wxITEM_NORMAL);
  m_mContextMenu->Append(m_mComputeAll1);

  m_mDelete1 =
      new wxMenuItem(m_mContextMenu, wxID_ANY,
                     wxString(_("&Delete")) + wxT('\t') + wxT("Ctrl+D"),
                     wxEmptyString, wxITEM_NORMAL);
  m_mContextMenu->Append(m_mDelete1);

  m_mContextMenu->AppendSeparator();

  m_mGoTo1 = new wxMenuItem(m_mContextMenu, wxID_ANY,
                            wxString(_("&GoTo")) + wxT('\t') + wxT("Ctrl+G"),
                            wxEmptyString, wxITEM_NORMAL);
  m_mContextMenu->Append(m_mGoTo1);

  m_mStop1 = new wxMenuItem(m_mContextMenu, wxID_ANY,
                            wxString(_("&Stop")) + wxT('\t') + wxT("Ctrl+Z"),
                            wxEmptyString, wxITEM_NORMAL);
  m_mContextMenu->Append(m_mStop1);

  m_mBatch1 = new wxMenuItem(m_mContextMenu, wxID_ANY,
                             wxString(_("&Batch")) + wxT('\t') + wxT("Ctrl+B"),
                             wxEmptyString, wxITEM_NORMAL);
  m_mContextMenu->Append(m_mBatch1);

  wxMenuItem* m_mResetAll1;
  m_mResetAll1 =
      new wxMenuItem(m_mContextMenu, wxID_ANY,
                     wxString(_("&Reset All")) + wxT('\t') + wxT("Ctrl+R"),
                     wxEmptyString, wxITEM_NORMAL);
  m_mContextMenu->Append(m_mResetAll1);

  m_menu1 = new wxMenu();
  wxMenuItem* m_menu1Item =
      new wxMenuItem(m_mContextMenu, wxID_ANY, _("View"), wxEmptyString,
                     wxITEM_NORMAL, m_menu1);
  wxMenuItem* m_mSettings1;
  m_mSettings1 = new wxMenuItem(m_menu1, wxID_ANY, wxString(_("&Settings")),
                                wxEmptyString, wxITEM_NORMAL);
  m_menu1->Append(m_mSettings1);

  wxMenuItem* m_mStatistics1;
  m_mStatistics1 = new wxMenuItem(
      m_menu1, wxID_ANY, wxString(_("S&tatistics")) + wxT('\t') + wxT("Ctrl+T"),
      wxEmptyString, wxITEM_NORMAL);
  m_menu1->Append(m_mStatistics1);

  wxMenuItem* m_mReport1;
  m_mReport1 = new wxMenuItem(m_menu1, wxID_ANY, wxString(_("&Report")),
                              wxEmptyString, wxITEM_NORMAL);
  m_menu1->Append(m_mReport1);

  wxMenuItem* m_mPlot1;
  m_mPlot1 = new wxMenuItem(m_menu1, wxID_ANY,
                            wxString(_("&Plot")) + wxT('\t') + wxT("Ctrl+P"),
                            wxEmptyString, wxITEM_NORMAL);
  m_menu1->Append(m_mPlot1);

  wxMenuItem* m_mCursorPosition1;
  m_mCursorPosition1 =
      new wxMenuItem(m_menu1, wxID_ANY, wxString(_("&Cursor Position")),
                     wxEmptyString, wxITEM_NORMAL);
  m_menu1->Append(m_mCursorPosition1);

  wxMenuItem* m_mRoutePosition1;
  m_mRoutePosition1 =
      new wxMenuItem(m_menu1, wxID_ANY, wxString(_("&Route Position")),
                     wxEmptyString, wxITEM_NORMAL);
  m_menu1->Append(m_mRoutePosition1);

  m_mContextMenu->Append(m_menu1Item);
  this->Connect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(WeatherRoutingBase::WeatherRoutingBaseOnContextMenu),
      NULL, this);

  this->Centre(wxBOTH);

  // Connect Events
  this->Connect(wxEVT_CLOSE_WINDOW,
                wxCloseEventHandler(WeatherRoutingBase::OnClose));
  this->Connect(wxEVT_SIZE, wxSizeEventHandler(WeatherRoutingBase::OnSize));
  m_mFile->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnOpen), this,
                m_mOpen->GetId());
  m_mFile->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnSave), this,
                m_mSave->GetId());
  m_mFile->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnSaveAs), this,
                m_mSaveAs->GetId());
  m_mFile->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnClose), this,
                m_mClose->GetId());
  m_mPosition->Bind(wxEVT_COMMAND_MENU_SELECTED,
                    wxCommandEventHandler(WeatherRoutingBase::OnNewPosition),
                    this, m_mNewPosition->GetId());
  m_mPosition->Bind(wxEVT_COMMAND_MENU_SELECTED,
                    wxCommandEventHandler(WeatherRoutingBase::OnUpdateBoat),
                    this, m_mUpdateBoat->GetId());
  m_mPosition->Bind(wxEVT_COMMAND_MENU_SELECTED,
                    wxCommandEventHandler(WeatherRoutingBase::OnDeletePosition),
                    this, m_mDeletePosition->GetId());
  m_mPosition->Bind(
      wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(WeatherRoutingBase::OnDeleteAllPositions), this,
      m_mDeleteAllPositions->GetId());
  m_mConfiguration->Bind(wxEVT_COMMAND_MENU_SELECTED,
                         wxCommandEventHandler(WeatherRoutingBase::OnNew), this,
                         m_mNew->GetId());
  m_mConfiguration->Bind(wxEVT_COMMAND_MENU_SELECTED,
                         wxCommandEventHandler(WeatherRoutingBase::OnBatch),
                         this, m_mBatch->GetId());
  m_mConfiguration->Bind(
      wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(WeatherRoutingBase::OnEditConfiguration), this,
      m_mEdit->GetId());
  m_mConfiguration->Bind(wxEVT_COMMAND_MENU_SELECTED,
                         wxCommandEventHandler(WeatherRoutingBase::OnGoTo),
                         this, m_mGoTo->GetId());
  m_mConfiguration->Bind(wxEVT_COMMAND_MENU_SELECTED,
                         wxCommandEventHandler(WeatherRoutingBase::OnDelete),
                         this, m_mDelete->GetId());
  m_mConfiguration->Bind(wxEVT_COMMAND_MENU_SELECTED,
                         wxCommandEventHandler(WeatherRoutingBase::OnDeleteAll),
                         this, m_mDeleteAll->GetId());
  m_mConfiguration->Bind(wxEVT_COMMAND_MENU_SELECTED,
                         wxCommandEventHandler(WeatherRoutingBase::OnCompute),
                         this, m_mCompute->GetId());
  m_mConfiguration->Bind(
      wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(WeatherRoutingBase::OnComputeAll), this,
      m_mComputeAll->GetId());
  m_mConfiguration->Bind(wxEVT_COMMAND_MENU_SELECTED,
                         wxCommandEventHandler(WeatherRoutingBase::OnStop),
                         this, m_mStop->GetId());
  m_mConfiguration->Bind(wxEVT_COMMAND_MENU_SELECTED,
                         wxCommandEventHandler(WeatherRoutingBase::OnResetAll),
                         this, m_mResetAll->GetId());
  m_mConfiguration->Bind(
      wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(WeatherRoutingBase::OnSaveAsTrack), this,
      m_mSaveAsTrack->GetId());
  m_mConfiguration->Bind(
      wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(WeatherRoutingBase::OnSaveAsRoute), this,
      m_mSaveAsRoute->GetId());
  m_mConfiguration->Bind(
      wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(WeatherRoutingBase::OnExportRouteAsGPX), this,
      m_mExportRouteAsGPX->GetId());
  m_mConfiguration->Bind(
      wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(WeatherRoutingBase::OnSaveAllAsTracks), this,
      m_mSaveAllAsTracks->GetId());
  m_mConfiguration->Bind(wxEVT_COMMAND_MENU_SELECTED,
                         wxCommandEventHandler(WeatherRoutingBase::OnFilter),
                         this, m_mFilter->GetId());
  m_mView->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnSettings), this,
                m_mSettings->GetId());
  m_mView->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnStatistics), this,
                m_mStatistics->GetId());
  m_mView->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnReport), this,
                m_mReport->GetId());
  m_mView->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnPlot), this,
                m_mPlot->GetId());
  m_mView->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnCursorPosition),
                this, m_mCursorPosition->GetId());
  m_mView->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnRoutePosition),
                this, m_mRoutePosition->GetId());
  m_mView->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnWeatherTable), this,
                m_mWeatherTable->GetId());
  m_mHelp->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnInformation), this,
                m_mInformation->GetId());
  m_mHelp->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnManual), this,
                m_mManual->GetId());
  m_mHelp->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnAbout), this,
                m_mAbout->GetId());
  m_mContextMenu->Bind(wxEVT_COMMAND_MENU_SELECTED,
                       wxCommandEventHandler(WeatherRoutingBase::OnNew), this,
                       m_mNew1->GetId());
  m_mContextMenu->Bind(
      wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(WeatherRoutingBase::OnEditConfiguration), this,
      m_mEdit1->GetId());
  m_mContextMenu->Bind(wxEVT_COMMAND_MENU_SELECTED,
                       wxCommandEventHandler(WeatherRoutingBase::OnCompute),
                       this, m_mCompute1->GetId());
  m_mContextMenu->Bind(wxEVT_COMMAND_MENU_SELECTED,
                       wxCommandEventHandler(WeatherRoutingBase::OnComputeAll),
                       this, m_mComputeAll1->GetId());
  m_mContextMenu->Bind(wxEVT_COMMAND_MENU_SELECTED,
                       wxCommandEventHandler(WeatherRoutingBase::OnDelete),
                       this, m_mDelete1->GetId());
  m_mContextMenu->Bind(wxEVT_COMMAND_MENU_SELECTED,
                       wxCommandEventHandler(WeatherRoutingBase::OnGoTo), this,
                       m_mGoTo1->GetId());
  m_mContextMenu->Bind(wxEVT_COMMAND_MENU_SELECTED,
                       wxCommandEventHandler(WeatherRoutingBase::OnStop), this,
                       m_mStop1->GetId());
  m_mContextMenu->Bind(wxEVT_COMMAND_MENU_SELECTED,
                       wxCommandEventHandler(WeatherRoutingBase::OnBatch), this,
                       m_mBatch1->GetId());
  m_mContextMenu->Bind(wxEVT_COMMAND_MENU_SELECTED,
                       wxCommandEventHandler(WeatherRoutingBase::OnResetAll),
                       this, m_mResetAll1->GetId());
  m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnSettings), this,
                m_mSettings1->GetId());
  m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnStatistics), this,
                m_mStatistics1->GetId());
  m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnReport), this,
                m_mReport1->GetId());
  m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnPlot), this,
                m_mPlot1->GetId());
  m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnCursorPosition),
                this, m_mCursorPosition1->GetId());
  m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(WeatherRoutingBase::OnRoutePosition),
                this, m_mRoutePosition1->GetId());
}

WeatherRoutingBase::~WeatherRoutingBase() {
  // Disconnect Events
  this->Disconnect(wxEVT_CLOSE_WINDOW,
                   wxCloseEventHandler(WeatherRoutingBase::OnClose));
  this->Disconnect(wxEVT_SIZE, wxSizeEventHandler(WeatherRoutingBase::OnSize));

  delete m_mContextMenu;
}

WeatherRoutingPanel::WeatherRoutingPanel(wxWindow* parent, wxWindowID id,
                                         const wxPoint& pos, const wxSize& size,
                                         long style, const wxString& name)
    : wxPanel(parent, id, pos, size, style, name) {
  this->SetMinSize(wxSize(100, 100));

  wxBoxSizer* bSizerMain;
  bSizerMain = new wxBoxSizer(wxVERTICAL);

  m_splitter1 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition,
                                     wxDefaultSize, wxSP_3D);
  m_splitter1->SetSashGravity(0.2);
  m_splitter1->SetMinimumPaneSize(1);

  m_panel11 = new wxPanel(m_splitter1, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxBoxSizer* bSizer6;
  bSizer6 = new wxBoxSizer(wxVERTICAL);

  wxStaticBoxSizer* sbSizer30;
  sbSizer30 = new wxStaticBoxSizer(
      new wxStaticBox(m_panel11, wxID_ANY, _("Positions")), wxVERTICAL);

  wxFlexGridSizer* fgSizer93;
  fgSizer93 = new wxFlexGridSizer(1, 1, 0, 0);
  fgSizer93->AddGrowableCol(0);
  fgSizer93->AddGrowableRow(0);
  fgSizer93->SetFlexibleDirection(wxBOTH);
  fgSizer93->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_lPositions = new wxListCtrl(
      sbSizer30->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize(-1, -1),
      wxLC_HRULES | wxLC_REPORT | wxLC_SINGLE_SEL | wxHSCROLL | wxVSCROLL);
  fgSizer93->Add(m_lPositions, 0, wxALL | wxEXPAND, 5);

  sbSizer30->Add(fgSizer93, 1, wxEXPAND | wxALL, 5);

  bSizer6->Add(sbSizer30, 1, wxEXPAND | wxALL, 5);

  m_panel11->SetSizer(bSizer6);
  m_panel11->Layout();
  bSizer6->Fit(m_panel11);
  m_panel12 = new wxPanel(m_splitter1, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxBoxSizer* bSizer5;
  bSizer5 = new wxBoxSizer(wxVERTICAL);

  wxStaticBoxSizer* sbSizer29;
  sbSizer29 = new wxStaticBoxSizer(
      new wxStaticBox(m_panel12, wxID_ANY, _("Routings")), wxVERTICAL);

  wxFlexGridSizer* fgSizer17;
  fgSizer17 = new wxFlexGridSizer(2, 1, 0, 0);
  fgSizer17->AddGrowableCol(0);
  fgSizer17->AddGrowableRow(0);
  fgSizer17->SetFlexibleDirection(wxBOTH);
  fgSizer17->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_ALL);

  m_lWeatherRoutes = new wxListCtrl(
      sbSizer29->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize(-1, -1),
      wxLC_HRULES | wxLC_NO_SORT_HEADER | wxLC_REPORT | wxHSCROLL | wxVSCROLL);
  fgSizer17->Add(m_lWeatherRoutes, 0, wxALL | wxEXPAND, 5);

  wxFlexGridSizer* fgSizer116;
  fgSizer116 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer116->AddGrowableCol(3);
  fgSizer116->SetFlexibleDirection(wxBOTH);
  fgSizer116->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_bCompute = new wxButton(sbSizer29->GetStaticBox(), wxID_ANY, _("&Compute"),
                            wxDefaultPosition, wxDefaultSize, 0);
  // Add after m_bCompute creation, around line 539:
  m_bCompute->SetToolTip(
      _("Calculate weather route based on selected start/end positions and "
        "configuration"));
  fgSizer116->Add(m_bCompute, 0, wxALL, 5);

  m_bSaveAsTrack =
      new wxButton(sbSizer29->GetStaticBox(), wxID_ANY, _("&Save as track"),
                   wxDefaultPosition, wxDefaultSize, 0);
  m_bSaveAsTrack->SetToolTip(
      _("Save the selected routing as a track in the 'Route & Mark' Manager"));
  fgSizer116->Add(m_bSaveAsTrack, 0, wxALL, 5);

  m_bSaveAsRoute =
      new wxButton(sbSizer29->GetStaticBox(), wxID_ANY, _("Save as &route"),
                   wxDefaultPosition, wxDefaultSize, 0);
  m_bSaveAsRoute->SetToolTip(
      _("Save the selected routing as a route in the 'Route & Mark' Manager"));
  fgSizer116->Add(m_bSaveAsRoute, 0, wxALL, 5);

  m_bExportRoute = new wxButton(sbSizer29->GetStaticBox(), wxID_ANY,
                                _("Export as GPX route file"),
                                wxDefaultPosition, wxDefaultSize, 0);
  fgSizer116->Add(m_bExportRoute, 0, wxALL, 5);

  m_gProgress = new wxGauge(sbSizer29->GetStaticBox(), wxID_ANY, 100,
                            wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL);
  m_gProgress->SetValue(0);
  fgSizer116->Add(m_gProgress, 0, wxALL | wxEXPAND, 5);

  fgSizer17->Add(fgSizer116, 1, wxEXPAND, 5);

  sbSizer29->Add(fgSizer17, 1, wxEXPAND | wxALL, 5);

  bSizer5->Add(sbSizer29, 1, wxEXPAND | wxALL, 5);

  m_panel12->SetSizer(bSizer5);
  m_panel12->Layout();
  bSizer5->Fit(m_panel12);
  m_splitter1->SplitVertically(m_panel11, m_panel12, -1);
  bSizerMain->Add(m_splitter1, 1, wxEXPAND | wxALL, 5);

  this->SetSizer(bSizerMain);
  this->Layout();

  // Connect Events
  m_lPositions->Connect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(WeatherRoutingPanel::OnEditPositionClick), NULL,
      this);
  m_lPositions->Connect(wxEVT_LEFT_DOWN,
                        wxMouseEventHandler(WeatherRoutingPanel::OnLeftUp),
                        NULL, this);
  m_lPositions->Connect(wxEVT_LEFT_UP,
                        wxMouseEventHandler(WeatherRoutingPanel::OnLeftDown),
                        NULL, this);
  m_lPositions->Connect(
      wxEVT_COMMAND_LIST_KEY_DOWN,
      wxListEventHandler(WeatherRoutingPanel::OnPositionKeyDown), NULL, this);
  m_lWeatherRoutes->Connect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(WeatherRoutingPanel::OnEditConfigurationClick), NULL,
      this);
  m_lWeatherRoutes->Connect(
      wxEVT_LEFT_DOWN,
      wxMouseEventHandler(WeatherRoutingPanel::OnWeatherRoutesListLeftDown),
      NULL, this);
  m_lWeatherRoutes->Connect(wxEVT_LEFT_UP,
                            wxMouseEventHandler(WeatherRoutingPanel::OnLeftUp),
                            NULL, this);
  m_lWeatherRoutes->Connect(
      wxEVT_COMMAND_LIST_COL_CLICK,
      wxListEventHandler(WeatherRoutingPanel::OnWeatherRouteSort), NULL, this);
  m_lWeatherRoutes->Connect(
      wxEVT_COMMAND_LIST_ITEM_DESELECTED,
      wxListEventHandler(WeatherRoutingPanel::OnWeatherRouteSelected), NULL,
      this);
  m_lWeatherRoutes->Connect(
      wxEVT_COMMAND_LIST_ITEM_SELECTED,
      wxListEventHandler(WeatherRoutingPanel::OnWeatherRouteSelected), NULL,
      this);
  m_lWeatherRoutes->Connect(
      wxEVT_COMMAND_LIST_KEY_DOWN,
      wxListEventHandler(WeatherRoutingPanel::OnWeatherRouteKeyDown), NULL,
      this);
  m_bCompute->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                      wxCommandEventHandler(WeatherRoutingPanel::OnCompute),
                      NULL, this);
  m_bSaveAsTrack->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(WeatherRoutingPanel::OnSaveAsTrack), NULL, this);
  m_bSaveAsRoute->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(WeatherRoutingPanel::OnSaveAsRoute), NULL, this);
}

WeatherRoutingPanel::~WeatherRoutingPanel() {
  // Disconnect Events
  m_lPositions->Disconnect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(WeatherRoutingPanel::OnEditPositionClick), NULL,
      this);
  m_lPositions->Disconnect(wxEVT_LEFT_DOWN,
                           wxMouseEventHandler(WeatherRoutingPanel::OnLeftUp),
                           NULL, this);
  m_lPositions->Disconnect(wxEVT_LEFT_UP,
                           wxMouseEventHandler(WeatherRoutingPanel::OnLeftDown),
                           NULL, this);
  m_lPositions->Disconnect(
      wxEVT_COMMAND_LIST_KEY_DOWN,
      wxListEventHandler(WeatherRoutingPanel::OnPositionKeyDown), NULL, this);
  m_lWeatherRoutes->Disconnect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(WeatherRoutingPanel::OnEditConfigurationClick), NULL,
      this);
  m_lWeatherRoutes->Disconnect(
      wxEVT_LEFT_DOWN,
      wxMouseEventHandler(WeatherRoutingPanel::OnWeatherRoutesListLeftDown),
      NULL, this);
  m_lWeatherRoutes->Disconnect(
      wxEVT_LEFT_UP, wxMouseEventHandler(WeatherRoutingPanel::OnLeftUp), NULL,
      this);
  m_lWeatherRoutes->Disconnect(
      wxEVT_COMMAND_LIST_COL_CLICK,
      wxListEventHandler(WeatherRoutingPanel::OnWeatherRouteSort), NULL, this);
  m_lWeatherRoutes->Disconnect(
      wxEVT_COMMAND_LIST_ITEM_DESELECTED,
      wxListEventHandler(WeatherRoutingPanel::OnWeatherRouteSelected), NULL,
      this);
  m_lWeatherRoutes->Disconnect(
      wxEVT_COMMAND_LIST_ITEM_SELECTED,
      wxListEventHandler(WeatherRoutingPanel::OnWeatherRouteSelected), NULL,
      this);
  m_lWeatherRoutes->Disconnect(
      wxEVT_COMMAND_LIST_KEY_DOWN,
      wxListEventHandler(WeatherRoutingPanel::OnWeatherRouteKeyDown), NULL,
      this);
  m_bCompute->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                         wxCommandEventHandler(WeatherRoutingPanel::OnCompute),
                         NULL, this);
  m_bSaveAsTrack->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(WeatherRoutingPanel::OnSaveAsTrack), NULL, this);
  m_bSaveAsRoute->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(WeatherRoutingPanel::OnSaveAsRoute), NULL, this);
}

SettingsDialogBase::SettingsDialogBase(wxWindow* parent, wxWindowID id,
                                       const wxString& title,
                                       const wxPoint& pos, const wxSize& size,
                                       long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxSize(-1, -1), wxDefaultSize);

  wxFlexGridSizer* fgSizer92;
  fgSizer92 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer92->AddGrowableCol(0);
  fgSizer92->AddGrowableRow(0);
  fgSizer92->SetFlexibleDirection(wxBOTH);
  fgSizer92->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer100;
  fgSizer100 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer100->AddGrowableCol(0);
  fgSizer100->AddGrowableCol(1);
  fgSizer100->AddGrowableRow(0);
  fgSizer100->SetFlexibleDirection(wxBOTH);
  fgSizer100->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbSizer25;
  sbSizer25 = new wxStaticBoxSizer(
      new wxStaticBox(this, wxID_ANY, _("Display")), wxVERTICAL);

  sbSizer25->SetMinSize(wxSize(375, -1));
  m_scrolledWindow4 =
      new wxScrolledWindow(sbSizer25->GetStaticBox(), wxID_ANY,
                           wxDefaultPosition, wxSize(-1, -1), wxVSCROLL);
  m_scrolledWindow4->SetScrollRate(5, 5);
  wxFlexGridSizer* fgSizer18;
  fgSizer18 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer18->SetFlexibleDirection(wxBOTH);
  fgSizer18->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_NONE);

  wxFlexGridSizer* fgSizer42;
  fgSizer42 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer42->SetFlexibleDirection(wxBOTH);
  fgSizer42->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText74 =
      new wxStaticText(m_scrolledWindow4, wxID_ANY, _("Cursor Route Color"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText74->Wrap(-1);
  fgSizer42->Add(m_staticText74, 0, wxALL, 5);

  m_cpCursorRoute = new wxColourPickerCtrl(
      m_scrolledWindow4, wxID_ANY, wxColour(255, 255, 0), wxDefaultPosition,
      wxDefaultSize, wxCLRP_DEFAULT_STYLE);
  fgSizer42->Add(m_cpCursorRoute, 0, wxALL, 5);

  m_staticText73 = new wxStaticText(m_scrolledWindow4, wxID_ANY,
                                    _("Destination Route Color"),
                                    wxDefaultPosition, wxDefaultSize, 0);
  m_staticText73->Wrap(-1);
  fgSizer42->Add(m_staticText73, 0, wxALL, 5);

  m_cpDestinationRoute = new wxColourPickerCtrl(
      m_scrolledWindow4, wxID_ANY, wxColour(255, 0, 255), wxDefaultPosition,
      wxDefaultSize, wxCLRP_DEFAULT_STYLE);
  fgSizer42->Add(m_cpDestinationRoute, 0, wxALL, 5);

  m_staticText75 =
      new wxStaticText(m_scrolledWindow4, wxID_ANY, _("Route Thickness"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText75->Wrap(-1);
  fgSizer42->Add(m_staticText75, 0, wxALL, 5);

  m_sRouteThickness = new wxSpinCtrl(m_scrolledWindow4, wxID_ANY, wxEmptyString,
                                     wxDefaultPosition, wxDefaultSize,
                                     wxSP_ARROW_KEYS, 0, 10, 4);
  m_sRouteThickness->SetMaxSize(wxSize(140, -1));

  fgSizer42->Add(m_sRouteThickness, 0, wxALL | wxEXPAND, 5);

  m_staticText70 =
      new wxStaticText(m_scrolledWindow4, wxID_ANY, _("Iso Chron Thickness"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText70->Wrap(-1);
  fgSizer42->Add(m_staticText70, 0, wxALL, 5);

  m_sIsoChronThickness = new wxSpinCtrl(
      m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 2);
  m_sIsoChronThickness->SetMaxSize(wxSize(140, -1));

  fgSizer42->Add(m_sIsoChronThickness, 0, wxALL | wxEXPAND, 5);

  m_staticText71 = new wxStaticText(m_scrolledWindow4, wxID_ANY,
                                    _("Alternate Routes Thickness"),
                                    wxDefaultPosition, wxDefaultSize, 0);
  m_staticText71->Wrap(-1);
  fgSizer42->Add(m_staticText71, 0, wxALL, 5);

  m_sAlternateRouteThickness = new wxSpinCtrl(
      m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0);
  m_sAlternateRouteThickness->SetMaxSize(wxSize(140, -1));

  fgSizer42->Add(m_sAlternateRouteThickness, 0, wxALL | wxEXPAND, 5);

  m_staticText711 = new wxStaticText(m_scrolledWindow4, wxID_ANY,
                                     _("Wind Barbs On Route Thickness"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText711->Wrap(-1);
  fgSizer42->Add(m_staticText711, 0, wxALL, 5);

  m_sWindBarbsOnRouteThickness = new wxSpinCtrl(
      m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxDefaultSize, wxSP_ARROW_KEYS, 0, 6, 2);
  m_sWindBarbsOnRouteThickness->SetMaxSize(wxSize(140, -1));

  fgSizer42->Add(m_sWindBarbsOnRouteThickness, 1, wxALL | wxEXPAND, 5);

  fgSizer18->Add(fgSizer42, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer82;
  fgSizer82 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer82->SetFlexibleDirection(wxBOTH);
  fgSizer82->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_cbDisplayCursorRoute =
      new wxCheckBox(m_scrolledWindow4, wxID_ANY, _("Display Cursor Route"),
                     wxDefaultPosition, wxDefaultSize, 0);
  m_cbDisplayCursorRoute->SetToolTip(
      _("Show the cursor route line when dragging on the chart"));
  m_cbDisplayCursorRoute->SetValue(true);
  fgSizer82->Add(m_cbDisplayCursorRoute, 0, wxALL, 5);

  m_cbAlternatesForAll = new wxCheckBox(m_scrolledWindow4, wxID_ANY,
                                        _("Alternates for all IsoChrons"),
                                        wxDefaultPosition, wxDefaultSize, 0);
  m_cbAlternatesForAll->SetToolTip(
      _("Generate alternate routes for all isochronal points rather than just "
        "endpoints"));

  fgSizer82->Add(m_cbAlternatesForAll, 0, wxALL, 5);

  m_cbMarkAtPolarChange = new wxCheckBox(m_scrolledWindow4, wxID_ANY,
                                         _("Display mark when Polar changes"),
                                         wxDefaultPosition, wxDefaultSize, 0);
  m_cbMarkAtPolarChange->SetToolTip(
      _("Display marks on the route where polar changes occur due to wind "
        "conditions"));
  m_cbMarkAtPolarChange->SetValue(true);
  fgSizer82->Add(m_cbMarkAtPolarChange, 0, wxALL, 5);

  m_cbDisplayCurrent =
      new wxCheckBox(m_scrolledWindow4, wxID_ANY, _("Display current"),
                     wxDefaultPosition, wxDefaultSize, 0);
  m_cbDisplayCurrent->SetToolTip(_("Show current arrows along the route"));
  m_cbDisplayCurrent->SetValue(true);
  fgSizer82->Add(m_cbDisplayCurrent, 0, wxALL, 5);

  m_cbDisplayWindBarbs =
      new wxCheckBox(m_scrolledWindow4, wxID_ANY, _("Display Wind Barbs"),
                     wxDefaultPosition, wxDefaultSize, 0);
  m_cbDisplayWindBarbs->SetToolTip(
      _("Show wind barbs along the route indicating wind direction and speed"));
  fgSizer82->Add(m_cbDisplayWindBarbs, 0, wxALL, 5);

  m_cbDisplayApparentWindBarbs =
      new wxCheckBox(m_scrolledWindow4, wxID_ANY,
                     _("Apparent Wind for Barbs On Route (not True Wind)"),
                     wxDefaultPosition, wxDefaultSize, 0);
  m_cbDisplayApparentWindBarbs->SetToolTip(
      _("Display apparent wind barbs instead of true wind barbs along the "
        "route"));
  fgSizer82->Add(m_cbDisplayApparentWindBarbs, 0, wxALL, 5);

  m_cbDisplayComfort = new wxCheckBox(m_scrolledWindow4, wxID_ANY,
                                      _("Display Sailing Comfort on Route"),
                                      wxDefaultPosition, wxDefaultSize, 0);
  m_cbDisplayComfort->SetToolTip(
      _("Show sailing comfort measurement along the route based on wind and "
        "wave conditions"));
  fgSizer82->Add(m_cbDisplayComfort, 0, wxALL, 5);

  fgSizer18->Add(fgSizer82, 1, wxEXPAND, 5);

  m_scrolledWindow4->SetSizer(fgSizer18);
  m_scrolledWindow4->Layout();
  fgSizer18->Fit(m_scrolledWindow4);
  sbSizer25->Add(m_scrolledWindow4, 1, wxEXPAND | wxALL, 5);

  fgSizer100->Add(sbSizer25, 1, wxEXPAND | wxALL, 5);

  wxFlexGridSizer* fgSizer101;
  fgSizer101 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer101->AddGrowableCol(0);
  fgSizer101->AddGrowableRow(1);
  fgSizer101->SetFlexibleDirection(wxBOTH);
  fgSizer101->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbSizer26;
  sbSizer26 = new wxStaticBoxSizer(
      new wxStaticBox(this, wxID_ANY, _("Computation")), wxVERTICAL);

  wxFlexGridSizer* fgSizer93;
  fgSizer93 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer93->SetFlexibleDirection(wxBOTH);
  fgSizer93->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText115 = new wxStaticText(sbSizer26->GetStaticBox(), wxID_ANY,
                                     _("Number of Concurrent threads"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText115->Wrap(-1);
  fgSizer93->Add(m_staticText115, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_sConcurrentThreads = new wxSpinCtrl(
      sbSizer26->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxDefaultSize, wxSP_ARROW_KEYS, 1, 64, 1);
  m_sConcurrentThreads->SetMaxSize(wxSize(140, -1));

  fgSizer93->Add(m_sConcurrentThreads, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  sbSizer26->Add(fgSizer93, 1, wxEXPAND | wxTOP | wxBOTTOM | wxLEFT, 5);

  fgSizer101->Add(sbSizer26, 1, wxEXPAND | wxALL, 5);

  wxArrayString m_cblFieldsChoices;
  m_cblFields = new wxCheckListBox(this, wxID_ANY, wxDefaultPosition,
                                   wxDefaultSize, m_cblFieldsChoices, 0);
  fgSizer101->Add(m_cblFields, 1, wxALL | wxEXPAND, 5);

  m_cbUseLocalTime = new wxCheckBox(this, wxID_ANY, _("Use Local Time"),
                                    wxDefaultPosition, wxDefaultSize, 0);
  m_cbUseLocalTime->SetToolTip(
      _("Display times in local time zone instead of UTC"));
  fgSizer101->Add(m_cbUseLocalTime, 1, wxALL | wxEXPAND, 5);

  fgSizer100->Add(fgSizer101, 1, wxEXPAND | wxALL, 5);

  fgSizer92->Add(fgSizer100, 1, wxEXPAND, 5);

  m_sdbSizer1 = new wxStdDialogButtonSizer();
  m_sdbSizer1OK = new wxButton(this, wxID_OK);
  m_sdbSizer1->AddButton(m_sdbSizer1OK);
  m_sdbSizer1Help = new wxButton(this, wxID_HELP);
  m_sdbSizer1->AddButton(m_sdbSizer1Help);
  m_sdbSizer1->Realize();

  fgSizer92->Add(m_sdbSizer1, 1, wxEXPAND | wxALL, 5);

  this->SetSizer(fgSizer92);
  this->Layout();
  fgSizer92->Fit(this);

  this->Centre(wxBOTH);

  // Connect Events
  m_cpCursorRoute->Connect(
      wxEVT_COMMAND_COLOURPICKER_CHANGED,
      wxColourPickerEventHandler(SettingsDialogBase::OnUpdateColor), NULL,
      this);
  m_cpDestinationRoute->Connect(
      wxEVT_COMMAND_COLOURPICKER_CHANGED,
      wxColourPickerEventHandler(SettingsDialogBase::OnUpdateColor), NULL,
      this);
  m_sRouteThickness->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(SettingsDialogBase::OnUpdateSpin), NULL, this);
  m_sIsoChronThickness->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(SettingsDialogBase::OnUpdateSpin), NULL, this);
  m_sAlternateRouteThickness->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(SettingsDialogBase::OnUpdateSpin), NULL, this);
  m_sWindBarbsOnRouteThickness->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(SettingsDialogBase::OnUpdateSpin), NULL, this);
  m_cbDisplayCursorRoute->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbAlternatesForAll->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbMarkAtPolarChange->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbDisplayCurrent->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbDisplayWindBarbs->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbDisplayApparentWindBarbs->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbDisplayComfort->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cblFields->Connect(
      wxEVT_COMMAND_CHECKLISTBOX_TOGGLED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdateColumns), NULL, this);
  m_cbUseLocalTime->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdateColumns), NULL, this);
  m_sdbSizer1Help->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                           wxCommandEventHandler(SettingsDialogBase::OnHelp),
                           NULL, this);
}

SettingsDialogBase::~SettingsDialogBase() {
  // Disconnect Events
  m_cpCursorRoute->Disconnect(
      wxEVT_COMMAND_COLOURPICKER_CHANGED,
      wxColourPickerEventHandler(SettingsDialogBase::OnUpdateColor), NULL,
      this);
  m_cpDestinationRoute->Disconnect(
      wxEVT_COMMAND_COLOURPICKER_CHANGED,
      wxColourPickerEventHandler(SettingsDialogBase::OnUpdateColor), NULL,
      this);
  m_sRouteThickness->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(SettingsDialogBase::OnUpdateSpin), NULL, this);
  m_sIsoChronThickness->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(SettingsDialogBase::OnUpdateSpin), NULL, this);
  m_sAlternateRouteThickness->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(SettingsDialogBase::OnUpdateSpin), NULL, this);
  m_sWindBarbsOnRouteThickness->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(SettingsDialogBase::OnUpdateSpin), NULL, this);
  m_cbDisplayCursorRoute->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbAlternatesForAll->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbMarkAtPolarChange->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbDisplayCurrent->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbDisplayWindBarbs->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbDisplayApparentWindBarbs->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cbDisplayComfort->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdate), NULL, this);
  m_cblFields->Disconnect(
      wxEVT_COMMAND_CHECKLISTBOX_TOGGLED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdateColumns), NULL, this);
  m_cbUseLocalTime->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(SettingsDialogBase::OnUpdateColumns), NULL, this);
  m_sdbSizer1Help->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                              wxCommandEventHandler(SettingsDialogBase::OnHelp),
                              NULL, this);
}

ConfigurationDialogBase::ConfigurationDialogBase(wxWindow* parent,
                                                 wxWindowID id,
                                                 const wxString& title,
                                                 const wxPoint& pos,
                                                 const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxDefaultSize, wxDefaultSize);

  wxFlexGridSizer* fgSizer95;
  fgSizer95 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer95->AddGrowableCol(0);
  fgSizer95->AddGrowableCol(1);
  fgSizer95->AddGrowableRow(0);
  fgSizer95->SetFlexibleDirection(wxBOTH);
  fgSizer95->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_notebook7 =
      new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
  m_pBasic = new wxPanel(m_notebook7, wxID_ANY, wxDefaultPosition,
                         wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer106;
  fgSizer106 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer106->AddGrowableCol(0);
  fgSizer106->AddGrowableCol(1);
  fgSizer106->SetFlexibleDirection(wxBOTH);
  fgSizer106->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer83;
  fgSizer83 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer83->AddGrowableCol(0);
  fgSizer83->SetFlexibleDirection(wxBOTH);
  fgSizer83->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbStart;
  sbStart = new wxStaticBoxSizer(
      new wxStaticBox(m_pBasic, wxID_ANY, _("Start")), wxVERTICAL);

  wxFlexGridSizer* fgSizer60;
  fgSizer60 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer60->AddGrowableCol(0);
  fgSizer60->SetFlexibleDirection(wxBOTH);
  fgSizer60->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  // Add radio button group for start selection
  wxBoxSizer* startSelectionSizer = new wxBoxSizer(wxHORIZONTAL);

  m_rbStartFromBoat =
      new wxRadioButton(sbStart->GetStaticBox(), wxID_ANY, _("Start from boat"),
                        wxDefaultPosition, wxDefaultSize, wxRB_GROUP);
  m_rbStartFromBoat->SetToolTip(
      _("Use current boat position as the starting point"));
  startSelectionSizer->Add(m_rbStartFromBoat, 0,
                           wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_rbStartPositionSelection =
      new wxRadioButton(sbStart->GetStaticBox(), wxID_ANY, _("Start position"),
                        wxDefaultPosition, wxDefaultSize);
  m_rbStartPositionSelection->SetToolTip(
      _("Select a predefined position as the starting point"));
  m_rbStartPositionSelection->SetValue(true);  // Default to position selection
  startSelectionSizer->Add(m_rbStartPositionSelection, 0,
                           wxALL | wxALIGN_CENTER_VERTICAL, 5);

  fgSizer60->Add(startSelectionSizer, 0, wxEXPAND, 5);

  m_cStart =
      new wxComboBox(sbStart->GetStaticBox(), wxID_ANY, wxEmptyString,
                     wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY);
  m_cStart->SetToolTip(
      _("Choose the starting position from the list of available positions"));
  fgSizer60->Add(m_cStart, 1, wxALL | wxEXPAND, 5);

  m_cbUseCurrentTime =
      new wxCheckBox(sbStart->GetStaticBox(), wxID_ANY, _("Use current time"),
                     wxDefaultPosition, wxDefaultSize, 0);
  m_cbUseCurrentTime->SetToolTip(
      _("When enabled, uses the actual time at the moment the routing "
        "computation starts"));
  fgSizer60->Add(m_cbUseCurrentTime, 0, wxALL, 5);

  wxFlexGridSizer* fgSizer111;
  fgSizer111 = new wxFlexGridSizer(0, 3, 0, 0);
  fgSizer111->SetFlexibleDirection(wxBOTH);
  fgSizer111->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText28 =
      new wxStaticText(sbStart->GetStaticBox(), wxID_ANY, _("Date"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText28->Wrap(-1);
  fgSizer111->Add(m_staticText28, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_dpStartDate = new wxDatePickerCtrl(
      sbStart->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition,
      wxDefaultSize, wxDP_ALLOWNONE | wxDP_DEFAULT);
  m_dpStartDate->SetToolTip(_("Select the starting date for weather routing"));
  fgSizer111->Add(m_dpStartDate, 1, wxALIGN_CENTER_VERTICAL | wxALL | wxEXPAND,
                  5);

  m_bGribTime = new wxButton(sbStart->GetStaticBox(), wxID_ANY, _("Grib Time"),
                             wxDefaultPosition, wxDefaultSize, 0);
  m_bGribTime->SetToolTip(
      _("Set date/time to match currently selected time in the GRIB weather "
        "forecast plugin"));
  fgSizer111->Add(m_bGribTime, 1, wxALIGN_CENTER_VERTICAL | wxEXPAND | wxALL,
                  5);

  m_staticText30 =
      new wxStaticText(sbStart->GetStaticBox(), wxID_ANY, _("Time"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText30->Wrap(-1);
  fgSizer111->Add(m_staticText30, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tpTime =
      new wxTimePickerCtrl(sbStart->GetStaticBox(), wxID_ANY, wxDefaultDateTime,
                           wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT);
  m_tpTime->SetToolTip(_("Select the starting time for weather routing"));
  fgSizer111->Add(m_tpTime, 1, wxALIGN_CENTER_VERTICAL | wxEXPAND | wxALL, 5);

  m_bCurrentTime =
      new wxButton(sbStart->GetStaticBox(), wxID_ANY, _("Current Time"),
                   wxDefaultPosition, wxDefaultSize, 0);
  m_bCurrentTime->SetToolTip(_("Set to current date and time"));
  fgSizer111->Add(m_bCurrentTime, 1, wxALIGN_CENTER_VERTICAL | wxEXPAND | wxALL,
                  5);

  fgSizer60->Add(fgSizer111, 1, wxEXPAND, 5);

  sbStart->Add(fgSizer60, 1, wxEXPAND | wxALL, 5);

  fgSizer83->Add(sbStart, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbBoat;
  sbBoat = new wxStaticBoxSizer(new wxStaticBox(m_pBasic, wxID_ANY, _("Boat")),
                                wxVERTICAL);

  wxFlexGridSizer* fgSizer98;
  fgSizer98 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer98->AddGrowableCol(0);
  fgSizer98->SetFlexibleDirection(wxBOTH);
  fgSizer98->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_tBoat = new wxTextCtrl(sbBoat->GetStaticBox(), wxID_ANY, wxEmptyString,
                           wxDefaultPosition, wxDefaultSize, 0);
  fgSizer98->Add(m_tBoat, 1, wxALL | wxEXPAND, 5);

  m_bBoatFilename = new wxButton(sbBoat->GetStaticBox(), wxID_ANY, _("..."),
                                 wxDefaultPosition, wxSize(30, -1), 0);
  fgSizer98->Add(m_bBoatFilename, 1, wxALL | wxEXPAND, 5);

  m_bEditBoat = new wxButton(sbBoat->GetStaticBox(), wxID_ANY, _("Edit"),
                             wxDefaultPosition, wxSize(-1, -1), 0);
  fgSizer98->Add(m_bEditBoat, 1, wxALL | wxEXPAND, 5);

  sbBoat->Add(fgSizer98, 1, wxEXPAND | wxALL, 5);

  fgSizer83->Add(sbBoat, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbConstraints;
  sbConstraints = new wxStaticBoxSizer(
      new wxStaticBox(m_pBasic, wxID_ANY, _("Constraints")), wxVERTICAL);

  wxFlexGridSizer* fgSizer110;
  fgSizer110 = new wxFlexGridSizer(0, 3, 0, 0);
  fgSizer110->SetFlexibleDirection(wxBOTH);
  fgSizer110->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText20 =
      new wxStaticText(sbConstraints->GetStaticBox(), wxID_ANY,
                       _("Max Diverted Course") /* MaxDivertedCourse */,
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText20->Wrap(-1);
  fgSizer110->Add(m_staticText20, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sMaxDivertedCourse = new wxSpinCtrl(
      sbConstraints->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(-1, -1), wxSP_ARROW_KEYS, 0, 180, 180);
  m_sMaxDivertedCourse->SetToolTip(
      _("Maximum course variation from great circle (shortest) route in "
        "degrees.\nLarger values allow finding alternate routes but increase "
        "computation time.\nNote: Alternate routes may be necessary to avoid "
        "land or find better weather."));
  m_sMaxDivertedCourse->SetMaxSize(wxSize(140, -1));

  fgSizer110->Add(m_sMaxDivertedCourse, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 3);

  m_staticText1181 =
      new wxStaticText(sbConstraints->GetStaticBox(), wxID_ANY, _("degrees"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1181->Wrap(-1);
  fgSizer110->Add(m_staticText1181, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_staticText23 = new wxStaticText(sbConstraints->GetStaticBox(), wxID_ANY,
                                    _("Max True Wind") /* MaxTrueWindKnots */,
                                    wxDefaultPosition, wxDefaultSize, 0);
  m_staticText23->Wrap(-1);
  fgSizer110->Add(m_staticText23, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sMaxTrueWindKnots = new wxSpinCtrl(
      sbConstraints->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(-1, -1), wxSP_ARROW_KEYS, 0, 200, 60);
  m_sMaxTrueWindKnots->SetToolTip(
      _("Maximum true wind speed to allow during routing.\nRoutes with wind "
        "speeds above this value will be avoided."));
  m_sMaxTrueWindKnots->SetMaxSize(wxSize(140, -1));

  fgSizer110->Add(m_sMaxTrueWindKnots, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 3);

  m_staticText128 =
      new wxStaticText(sbConstraints->GetStaticBox(), wxID_ANY, _("knots"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText128->Wrap(-1);
  fgSizer110->Add(m_staticText128, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_staticText136 =
      new wxStaticText(sbConstraints->GetStaticBox(), wxID_ANY,
                       _("Max Apparent Wind") /* MaxApparentWindKnots */,
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText136->Wrap(-1);
  fgSizer110->Add(m_staticText136, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sMaxApparentWindKnots = new wxSpinCtrl(
      sbConstraints->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(-1, -1), wxSP_ARROW_KEYS, 0, 200, 60);
  m_sMaxApparentWindKnots->SetToolTip(
      _("Maximum apparent wind speed to allow during routing.\nRoutes with "
        "apparent wind speeds above this value will be avoided."));
  m_sMaxApparentWindKnots->SetMaxSize(wxSize(140, -1));

  fgSizer110->Add(m_sMaxApparentWindKnots, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 3);

  m_staticText1282 =
      new wxStaticText(sbConstraints->GetStaticBox(), wxID_ANY, _("knots"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1282->Wrap(-1);
  fgSizer110->Add(m_staticText1282, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_staticText27 = new wxStaticText(sbConstraints->GetStaticBox(), wxID_ANY,
                                    _("Max Swell") /* MaxSwellMeters */,
                                    wxDefaultPosition, wxDefaultSize, 0);
  m_staticText27->Wrap(-1);
  fgSizer110->Add(m_staticText27, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sMaxSwellMeters = new wxSpinCtrlDouble(
      sbConstraints->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(140, -1), wxSP_ARROW_KEYS, 0. /* min */, 100. /* max */,
      0. /* initial */, 0.1 /* inc */);
  m_sMaxSwellMeters->SetToolTip(
      _("Maximum swell height to allow during routing.\nRoutes with swell "
        "heights above this value will be avoided."));
  m_sMaxSwellMeters->SetMaxSize(wxSize(140, -1));

  fgSizer110->Add(m_sMaxSwellMeters, 1,
                  wxALIGN_CENTER_VERTICAL | wxALL | wxEXPAND, 5);

  m_staticText129 =
      new wxStaticText(sbConstraints->GetStaticBox(), wxID_ANY, _("meters"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText129->Wrap(-1);
  fgSizer110->Add(m_staticText129, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  sbConstraints->Add(fgSizer110, 1, wxEXPAND, 5);

  fgSizer83->Add(sbConstraints, 1, wxEXPAND | wxALL, 5);

  fgSizer106->Add(fgSizer83, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer112;
  fgSizer112 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer112->AddGrowableCol(0);
  fgSizer112->SetFlexibleDirection(wxBOTH);
  fgSizer112->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbEnd;
  sbEnd = new wxStaticBoxSizer(new wxStaticBox(m_pBasic, wxID_ANY, _("End")),
                               wxVERTICAL);

  m_cEnd =
      new wxComboBox(sbEnd->GetStaticBox(), wxID_ANY, wxEmptyString,
                     wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY);
  m_cEnd->SetToolTip(_(
      "Choose the destination position from the list of available positions"));
  sbEnd->Add(m_cEnd, 0, wxALL | wxEXPAND, 5);

  fgSizer112->Add(sbEnd, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbTime_Step;
  sbTime_Step = new wxStaticBoxSizer(
      new wxStaticBox(m_pBasic, wxID_ANY, _("Time Step")), wxVERTICAL);

  wxFlexGridSizer* fgSizer921;
  fgSizer921 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer921->SetFlexibleDirection(wxBOTH);
  fgSizer921->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_sTimeStepHours = new wxSpinCtrl(
      sbTime_Step->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(-1, -1), wxALIGN_RIGHT | wxSP_ARROW_KEYS, 0, 1000, 1);
  m_sTimeStepHours->SetToolTip(_("Hours between each calculation step"));
  m_sTimeStepHours->SetMaxSize(wxSize(140, -1));

  fgSizer921->Add(m_sTimeStepHours, 0, wxALL, 5);

  m_staticText110 =
      new wxStaticText(sbTime_Step->GetStaticBox(), wxID_ANY, _("h"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText110->Wrap(-1);
  fgSizer921->Add(m_staticText110, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sTimeStepMinutes = new wxSpinCtrl(
      sbTime_Step->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(-1, -1), wxALIGN_RIGHT | wxSP_ARROW_KEYS, 0, 60, 1);
  m_sTimeStepMinutes->SetToolTip(_("Minutes between each calculation step"));
  m_sTimeStepMinutes->SetMaxSize(wxSize(140, -1));

  fgSizer921->Add(m_sTimeStepMinutes, 0, wxALL, 5);

  m_staticText111 =
      new wxStaticText(sbTime_Step->GetStaticBox(), wxID_ANY, _("m"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText111->Wrap(-1);
  fgSizer921->Add(m_staticText111, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  sbTime_Step->Add(fgSizer921, 1, wxEXPAND, 5);

  fgSizer112->Add(sbTime_Step, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbOptions;
  sbOptions = new wxStaticBoxSizer(
      new wxStaticBox(m_pBasic, wxID_ANY, _("Options")), wxVERTICAL);

  wxFlexGridSizer* fgSizer23;
  fgSizer23 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer23->SetFlexibleDirection(wxBOTH);
  fgSizer23->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_cbDetectLand =
      new wxCheckBox(sbOptions->GetStaticBox(), wxID_ANY, _("Detect Land"),
                     wxDefaultPosition, wxDefaultSize, wxCHK_3STATE);
  m_cbDetectLand->SetToolTip(_("Detect land crossings and avoid them"));
  m_cbDetectLand->SetValue(true);
  fgSizer23->Add(m_cbDetectLand, 1, wxALL | wxEXPAND, 5);

  m_cbDetectBoundary =
      new wxCheckBox(sbOptions->GetStaticBox(), wxID_ANY, _("Detect Boundary"),
                     wxDefaultPosition, wxDefaultSize, wxCHK_3STATE);
  m_cbDetectBoundary->SetToolTip(
      _("Detect configured boundaries and avoid crossing them"));
  fgSizer23->Add(m_cbDetectBoundary, 1, wxALL | wxEXPAND, 5);

  m_cbCurrents =
      new wxCheckBox(sbOptions->GetStaticBox(), wxID_ANY, _("Currents"),
                     wxDefaultPosition, wxDefaultSize, wxCHK_3STATE);
  m_cbCurrents->SetToolTip(_("Include currents in routing calculation"));
  m_cbCurrents->SetValue(true);
  fgSizer23->Add(m_cbCurrents, 1, wxALL | wxEXPAND, 5);

  m_cbOptimizeTacking =
      new wxCheckBox(sbOptions->GetStaticBox(), wxID_ANY, _("Optimize Tacking"),
                     wxDefaultPosition, wxDefaultSize, wxCHK_3STATE);
  fgSizer23->Add(m_cbOptimizeTacking, 1, wxALL | wxEXPAND, 5);

  sbOptions->Add(fgSizer23, 1, wxEXPAND | wxALL, 5);

  fgSizer112->Add(sbOptions, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbData_Source;
  sbData_Source = new wxStaticBoxSizer(
      new wxStaticBox(m_pBasic, wxID_ANY, _("Data Source")), wxVERTICAL);

  wxFlexGridSizer* fgSizer58;
  fgSizer58 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer58->SetFlexibleDirection(wxBOTH);
  fgSizer58->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer59;
  fgSizer59 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer59->SetFlexibleDirection(wxBOTH);
  fgSizer59->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_cbUseGrib = new wxCheckBox(sbData_Source->GetStaticBox(), wxID_ANY,
                               _("Grib"), wxDefaultPosition, wxDefaultSize, 0);
  m_cbUseGrib->SetToolTip(_("Use GRIB weather data for routing"));
  m_cbUseGrib->SetValue(true);
  fgSizer59->Add(m_cbUseGrib, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  wxStaticBoxSizer* sbSizer34;
  sbSizer34 =
      new wxStaticBoxSizer(new wxStaticBox(sbData_Source->GetStaticBox(),
                                           wxID_ANY, _("Climatology")),
                           wxVERTICAL);

  wxFlexGridSizer* fgSizer961;
  fgSizer961 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer961->AddGrowableCol(1);
  fgSizer961->SetFlexibleDirection(wxBOTH);
  fgSizer961->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxString m_cClimatologyTypeChoices[] = {
      _("Disable"),        _("Currents Only"),
      _("Cumulative Map"), _("Cumulative - Calms"),
      _("Most Likely"),    _("Average")};
  int m_cClimatologyTypeNChoices =
      sizeof(m_cClimatologyTypeChoices) / sizeof(wxString);
  m_cClimatologyType = new wxChoice(
      sbSizer34->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
      m_cClimatologyTypeNChoices, m_cClimatologyTypeChoices, 0);
  m_cClimatologyType->SetSelection(1);
  m_cClimatologyType->Enable(false);

  fgSizer961->Add(m_cClimatologyType, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  sbSizer34->Add(fgSizer961, 1, wxEXPAND | wxALL, 5);

  fgSizer59->Add(sbSizer34, 1, wxEXPAND | wxALL | wxALIGN_CENTER_VERTICAL, 5);

  fgSizer58->Add(fgSizer59, 1, wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_cbAllowDataDeficient =
      new wxCheckBox(sbData_Source->GetStaticBox(), wxID_ANY,
                     _("Last Valid if Data Deficient"), wxDefaultPosition,
                     wxDefaultSize, wxCHK_3STATE);
  fgSizer58->Add(m_cbAllowDataDeficient, 1, wxALL | wxEXPAND, 5);

  sbData_Source->Add(fgSizer58, 1, wxEXPAND, 5);

  fgSizer112->Add(sbData_Source, 1, wxEXPAND | wxALL, 5);

  m_bOK = new wxButton(m_pBasic, wxID_ANY, _("OK"), wxDefaultPosition,
                       wxDefaultSize, 0);
  fgSizer112->Add(m_bOK, 0, wxALIGN_RIGHT | wxALL, 5);

  fgSizer106->Add(fgSizer112, 1, wxEXPAND | wxALL, 5);

  m_pBasic->SetSizer(fgSizer106);
  m_pBasic->Layout();
  fgSizer106->Fit(m_pBasic);
  m_notebook7->AddPage(m_pBasic, _("Basic"), true);
  m_pAdvanced = new wxPanel(m_notebook7, wxID_ANY, wxDefaultPosition,
                            wxDefaultSize, wxTAB_TRAVERSAL);
  wxBoxSizer* bSizer8;
  bSizer8 = new wxBoxSizer(wxVERTICAL);

  wxFlexGridSizer* fgSizer1072;
  fgSizer1072 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer1072->AddGrowableCol(0);
  fgSizer1072->AddGrowableCol(1);
  fgSizer1072->AddGrowableRow(0);
  fgSizer1072->SetFlexibleDirection(wxBOTH);
  fgSizer1072->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbConstraints1;
  sbConstraints1 = new wxStaticBoxSizer(
      new wxStaticBox(m_pAdvanced, wxID_ANY, _("Constraints")), wxVERTICAL);

  wxFlexGridSizer* fgSizer951;
  fgSizer951 = new wxFlexGridSizer(0, 3, 0, 0);
  fgSizer951->SetFlexibleDirection(wxBOTH);
  fgSizer951->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText26 = new wxStaticText(sbConstraints1->GetStaticBox(), wxID_ANY,
                                    _("Max Latitude +-"), wxDefaultPosition,
                                    wxDefaultSize, 0);
  m_staticText26->Wrap(-1);
  fgSizer951->Add(m_staticText26, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_sMaxLatitude = new wxSpinCtrl(sbConstraints1->GetStaticBox(), wxID_ANY,
                                  wxEmptyString, wxDefaultPosition,
                                  wxSize(140, -1), wxSP_ARROW_KEYS, 0, 90, 90);
  m_sMaxLatitude->SetToolTip(
      _("Maximum latitude to allow during routing.\nRoutes with latitudes "
        "above this value will be avoided."));
  fgSizer951->Add(m_sMaxLatitude, 1, wxALL | wxEXPAND, 5);

  m_staticText131 =
      new wxStaticText(sbConstraints1->GetStaticBox(), wxID_ANY, _("degrees"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText131->Wrap(-1);
  fgSizer951->Add(m_staticText131, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_staticText120 = new wxStaticText(sbConstraints1->GetStaticBox(), wxID_ANY,
                                     _("Wind vs Current"), wxDefaultPosition,
                                     wxDefaultSize, 0);
  m_staticText120->Wrap(-1);
  fgSizer951->Add(m_staticText120, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sWindVSCurrent = new wxSpinCtrl(
      sbConstraints1->GetStaticBox(), wxID_ANY, wxT("0"), wxDefaultPosition,
      wxSize(140, -1), wxSP_ARROW_KEYS, 0, 100, 0);
  m_sWindVSCurrent->SetToolTip(
      _("Maximum difference between wind and current speed to allow during "
        "routing.\nRoutes with differences above this value will be avoided."));
  fgSizer951->Add(m_sWindVSCurrent, 1, wxALL | wxEXPAND, 5);

  fgSizer951->Add(0, 0, 1, wxEXPAND, 5);

  m_staticText119 = new wxStaticText(sbConstraints1->GetStaticBox(), wxID_ANY,
                                     _("Max Course Angle"), wxDefaultPosition,
                                     wxDefaultSize, 0);
  m_staticText119->Wrap(-1);
  fgSizer951->Add(m_staticText119, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sMaxCourseAngle = new wxSpinCtrl(
      sbConstraints1->GetStaticBox(), wxID_ANY, wxEmptyString,
      wxDefaultPosition, wxSize(140, -1), wxSP_ARROW_KEYS, 0, 180, 180);
  m_sMaxCourseAngle->SetToolTip(
      _("Maximum course angle to allow during routing.\nRoutes with course "
        "angles above this value will be avoided."));
  fgSizer951->Add(m_sMaxCourseAngle, 1, wxALL | wxEXPAND, 3);

  m_staticText1251 =
      new wxStaticText(sbConstraints1->GetStaticBox(), wxID_ANY, _("degrees"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1251->Wrap(-1);
  fgSizer951->Add(m_staticText1251, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_staticText124 = new wxStaticText(sbConstraints1->GetStaticBox(), wxID_ANY,
                                     _("Max Search Angle"), wxDefaultPosition,
                                     wxDefaultSize, 0);
  m_staticText124->Wrap(-1);
  fgSizer951->Add(m_staticText124, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sMaxSearchAngle = new wxSpinCtrl(
      sbConstraints1->GetStaticBox(), wxID_ANY, wxEmptyString,
      wxDefaultPosition, wxSize(140, -1), wxSP_ARROW_KEYS, 0, 180, 120);
  m_sMaxSearchAngle->SetToolTip(
      _("Maximum search angle to allow during routing.\nRoutes with search "
        "angles above this value will be avoided."));
  fgSizer951->Add(m_sMaxSearchAngle, 1, wxALL | wxEXPAND, 3);

  m_staticText125 =
      new wxStaticText(sbConstraints1->GetStaticBox(), wxID_ANY, _("degrees"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText125->Wrap(-1);
  fgSizer951->Add(m_staticText125, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  sbConstraints1->Add(fgSizer951, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer941;
  fgSizer941 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer941->SetFlexibleDirection(wxBOTH);
  fgSizer941->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_cbAvoidCycloneTracks =
      new wxCheckBox(sbConstraints1->GetStaticBox(), wxID_ANY,
                     _("Avoid cyclone tracks (climatology)"), wxDefaultPosition,
                     wxDefaultSize, wxCHK_3STATE);
  m_cbAvoidCycloneTracks->SetValue(true);
  fgSizer941->Add(m_cbAvoidCycloneTracks, 0, wxALL, 5);

  wxFlexGridSizer* fgSizer952;
  fgSizer952 = new wxFlexGridSizer(0, 5, 0, 0);
  fgSizer952->SetFlexibleDirection(wxBOTH);
  fgSizer952->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText1281 =
      new wxStaticText(sbConstraints1->GetStaticBox(), wxID_ANY, _("within"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1281->Wrap(-1);
  fgSizer952->Add(m_staticText1281, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_sCycloneMonths = new wxSpinCtrl(sbConstraints1->GetStaticBox(), wxID_ANY,
                                    wxEmptyString, wxDefaultPosition,
                                    wxSize(140, -1), wxSP_ARROW_KEYS, 0, 6, 3);
  fgSizer952->Add(m_sCycloneMonths, 0, wxALL, 5);

  m_staticText1291 =
      new wxStaticText(sbConstraints1->GetStaticBox(), wxID_ANY, _("Months"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1291->Wrap(-1);
  fgSizer952->Add(m_staticText1291, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sCycloneDays = new wxSpinCtrl(sbConstraints1->GetStaticBox(), wxID_ANY,
                                  wxEmptyString, wxDefaultPosition,
                                  wxSize(140, -1), wxSP_ARROW_KEYS, 0, 183, 0);
  fgSizer952->Add(m_sCycloneDays, 0, wxALL, 5);

  m_staticText130 =
      new wxStaticText(sbConstraints1->GetStaticBox(), wxID_ANY, _("Days"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText130->Wrap(-1);
  fgSizer952->Add(m_staticText130, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer941->Add(fgSizer952, 1, wxEXPAND, 5);

  sbConstraints1->Add(fgSizer941, 1, wxEXPAND, 5);

  fgSizer1072->Add(sbConstraints1, 1, wxALL | wxEXPAND, 5);

  wxFlexGridSizer* fgSizer109;
  fgSizer109 = new wxFlexGridSizer(3, 0, 0, 0);
  fgSizer109->AddGrowableCol(0);
  fgSizer109->AddGrowableRow(0);
  fgSizer109->AddGrowableRow(1);
  fgSizer109->AddGrowableRow(2);
  fgSizer109->SetFlexibleDirection(wxBOTH);
  fgSizer109->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbOptions1;
  sbOptions1 = new wxStaticBoxSizer(
      new wxStaticBox(m_pAdvanced, wxID_ANY, _("Options")), wxVERTICAL);

  wxFlexGridSizer* fgSizer113;
  fgSizer113 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer113->SetFlexibleDirection(wxBOTH);
  fgSizer113->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer1121;
  fgSizer1121 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer1121->SetFlexibleDirection(wxBOTH);
  fgSizer1121->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_cbInvertedRegions = new wxCheckBox(sbOptions1->GetStaticBox(), wxID_ANY,
                                       _("Inverted Regions"), wxDefaultPosition,
                                       wxDefaultSize, wxCHK_3STATE);
  m_cbInvertedRegions->SetToolTip(_(
      "When enabled, inverts the handling of regions in the routing algorithm, "
      "which can help find alternative routes in complex scenarios."));
  m_cbInvertedRegions->SetToolTip(_(
      "When enabled, inverts the handling of regions in the routing algorithm, "
      "which can help find alternative routes in complex scenarios."));
  fgSizer1121->Add(m_cbInvertedRegions, 0, wxALL, 5);

  m_cbAnchoring =
      new wxCheckBox(sbOptions1->GetStaticBox(), wxID_ANY, _("Anchoring"),
                     wxDefaultPosition, wxDefaultSize, wxCHK_3STATE);
  m_cbAnchoring->SetToolTip(
      _("When enabled, allows the boat to remain stationary (anchor) during "
        "routing calculations. This can create routes with strategic waiting "
        "periods for better weather conditions."));
  m_cbAnchoring->SetToolTip(
      _("When enabled, allows the boat to remain stationary (anchor) during "
        "routing calculations. This can create routes with strategic waiting "
        "periods when facing strong currents."));
  fgSizer1121->Add(m_cbAnchoring, 0, wxALL, 5);

  fgSizer113->Add(fgSizer1121, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer115;
  fgSizer115 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer115->SetFlexibleDirection(wxBOTH);
  fgSizer115->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText139 =
      new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY, _("Integrator"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText139->Wrap(-1);
  fgSizer115->Add(m_staticText139, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_cIntegrator =
      new wxComboBox(sbOptions1->GetStaticBox(), wxID_ANY, wxEmptyString,
                     wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY);
  m_cIntegrator->SetToolTip(
      _("Select the integration method used for route calculations. Newton is "
        "faster while Runge Kutta offers more precision in complex weather "
        "situations."));
  m_cIntegrator->Append(_("Newton"));
  m_cIntegrator->Append(_("Runge Kutta"));
  fgSizer115->Add(m_cIntegrator, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  fgSizer113->Add(fgSizer115, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer1071;
  fgSizer1071 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer1071->SetFlexibleDirection(wxBOTH);
  fgSizer1071->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText1292 = new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY,
                                      _("Wind strength is"), wxDefaultPosition,
                                      wxDefaultSize, 0);
  m_staticText1292->Wrap(-1);
  fgSizer1071->Add(m_staticText1292, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sWindStrength = new wxSpinCtrl(
      sbOptions1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(140, -1), wxSP_ARROW_KEYS, 0, 999, 100);
  m_sWindStrength->SetToolTip(
      _("Adjust the wind strength used in calculations as a percentage of the "
        "forecast value. Values below 100% are more conservative, while values "
        "above 100% assume stronger winds than predicted."));
  fgSizer1071->Add(m_sWindStrength, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText1301 =
      new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY, _("percent"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1301->Wrap(-1);
  fgSizer1071->Add(m_staticText1301, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer113->Add(fgSizer1071, 1, wxEXPAND, 5);

  // Begin Tacking time.

  wxFlexGridSizer* fgSizer1151;
  fgSizer1151 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer1151->SetFlexibleDirection(wxBOTH);
  fgSizer1151->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText24 =
      new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY, _("Tacking Time"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText24->Wrap(-1);
  fgSizer1151->Add(m_staticText24, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sTackingTime = new wxSpinCtrl(sbOptions1->GetStaticBox(), wxID_ANY,
                                  wxEmptyString, wxDefaultPosition,
                                  wxSize(140, -1), wxSP_ARROW_KEYS, 0, 1000, 1);
  m_sTackingTime->SetToolTip(
      _("Set the time in seconds needed to complete a tack maneuver. Higher "
        "values create more realistic routing that accounts for the speed loss "
        "during tacking."));
  fgSizer1151->Add(m_sTackingTime, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText121 =
      new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY, _("Seconds"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText121->Wrap(-1);
  fgSizer1151->Add(m_staticText121, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer113->Add(fgSizer1151, 1, wxEXPAND, 5);

  // End Tacking time.

  // Begin Jibing time.

  wxFlexGridSizer* fgSizer1152;
  fgSizer1152 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer1152->SetFlexibleDirection(wxBOTH);
  fgSizer1152->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText25 =
      new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY, _("Jibing Time"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText25->Wrap(-1);
  fgSizer1152->Add(m_staticText25, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sJibingTime = new wxSpinCtrl(sbOptions1->GetStaticBox(), wxID_ANY,
                                 wxEmptyString, wxDefaultPosition,
                                 wxSize(140, -1), wxSP_ARROW_KEYS, 0, 1000, 1);
  m_sJibingTime->SetToolTip(
      _("Set the time in seconds needed to complete a jibe maneuver. Higher "
        "values create more realistic routing that accounts for the speed loss "
        "during jibing."));
  fgSizer1152->Add(m_sJibingTime, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText122 =
      new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY, _("Seconds"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText122->Wrap(-1);
  fgSizer1152->Add(m_staticText122, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer113->Add(fgSizer1152, 1, wxEXPAND, 5);

  // End Jibing time.

  // Begin Sail Plan Change time.

  wxFlexGridSizer* fgSizer1153;
  fgSizer1153 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer1153->SetFlexibleDirection(wxBOTH);
  fgSizer1153->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText29 = new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY,
                                    _("Sail Plan Change Time"),
                                    wxDefaultPosition, wxDefaultSize, 0);
  m_staticText29->Wrap(-1);
  fgSizer1153->Add(m_staticText29, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sSailPlanChangeTime = new wxSpinCtrl(
      sbOptions1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(140, -1), wxSP_ARROW_KEYS, 0, 1000, 1);
  m_sSailPlanChangeTime->SetToolTip(
      _("Set the time in seconds needed to complete a sail plan change. Higher "
        "values create more realistic routing that accounts for the speed loss "
        "during change of sail plan. This affects planning by making frequent "
        "sail changes less advantageous."));
  fgSizer1153->Add(m_sSailPlanChangeTime, 0, wxALL | wxALIGN_CENTER_VERTICAL,
                   5);
  m_staticText141 =
      new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY, _("Seconds"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText141->Wrap(-1);
  fgSizer1153->Add(m_staticText141, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer113->Add(fgSizer1153, 1, wxEXPAND, 5);

  // End Sail Plan Change time.

  wxFlexGridSizer* fgSizer11511;
  fgSizer11511 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer11511->SetFlexibleDirection(wxBOTH);
  fgSizer11511->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText241 = new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY,
                                     _("Safety Margin From Land"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText241->Wrap(-1);
  fgSizer11511->Add(m_staticText241, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sSafetyMarginLand =
      new wxSpinCtrlDouble(sbOptions1->GetStaticBox(), wxID_ANY, wxEmptyString,
                           wxDefaultPosition, wxSize(140, -1), wxSP_ARROW_KEYS,
                           0., 100., 0. /* initial value */, 0.1 /* inc */);
  m_sSafetyMarginLand->SetToolTip(
      _("Specify a minimum distance in nautical miles to maintain from land "
        "during routing calculations. Higher values create routes that stay "
        "further offshore for increased safety."));
  fgSizer11511->Add(m_sSafetyMarginLand, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText1211 =
      new wxStaticText(sbOptions1->GetStaticBox(), wxID_ANY, _("NM"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1211->Wrap(-1);
  fgSizer11511->Add(m_staticText1211, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer113->Add(fgSizer11511, 1, wxEXPAND, 5);

  sbOptions1->Add(fgSizer113, 1, wxEXPAND, 5);

  fgSizer109->Add(sbOptions1, 1, wxEXPAND | wxALL, 5);

  // Efficiency section
  wxStaticBoxSizer* sbEfficiency;
  sbEfficiency = new wxStaticBoxSizer(
      new wxStaticBox(m_pAdvanced, wxID_ANY, _("Polar Efficiency")),
      wxVERTICAL);

  wxFlexGridSizer* fgSizerEfficiency;
  fgSizerEfficiency = new wxFlexGridSizer(0, 3, 0, 0);
  fgSizerEfficiency->SetFlexibleDirection(wxBOTH);
  fgSizerEfficiency->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticText* m_staticTextUpwind =
      new wxStaticText(sbEfficiency->GetStaticBox(), wxID_ANY, _("Upwind"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticTextUpwind->Wrap(-1);
  fgSizerEfficiency->Add(m_staticTextUpwind, 0, wxALIGN_CENTER_VERTICAL | wxALL,
                         5);

  m_sUpwindEfficiency = new wxSpinCtrl(
      sbEfficiency->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(140, -1), wxSP_ARROW_KEYS, 0, 200, 100);
  m_sUpwindEfficiency->SetToolTip(_("Efficiency factor for upwind sailing"));
  fgSizerEfficiency->Add(m_sUpwindEfficiency, 0,
                         wxALL | wxALIGN_CENTER_VERTICAL, 5);

  wxStaticText* m_staticTextUpwindPC =
      new wxStaticText(sbEfficiency->GetStaticBox(), wxID_ANY, _("%"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticTextUpwindPC->Wrap(-1);
  fgSizerEfficiency->Add(m_staticTextUpwindPC, 0,
                         wxALIGN_CENTER_VERTICAL | wxALL, 5);

  wxStaticText* m_staticTextDownwind =
      new wxStaticText(sbEfficiency->GetStaticBox(), wxID_ANY, _("Downwind"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticTextDownwind->Wrap(-1);
  fgSizerEfficiency->Add(m_staticTextDownwind, 0,
                         wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sDownwindEfficiency = new wxSpinCtrl(
      sbEfficiency->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(140, -1), wxSP_ARROW_KEYS, 0, 200, 100);
  m_sDownwindEfficiency->SetToolTip(
      _("Efficiency factor for downwind sailing"));
  fgSizerEfficiency->Add(m_sDownwindEfficiency, 0,
                         wxALL | wxALIGN_CENTER_VERTICAL, 5);

  wxStaticText* m_staticTextDownwindPC =
      new wxStaticText(sbEfficiency->GetStaticBox(), wxID_ANY, _("%"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticTextDownwindPC->Wrap(-1);
  fgSizerEfficiency->Add(m_staticTextDownwindPC, 0,
                         wxALIGN_CENTER_VERTICAL | wxALL, 5);

  wxStaticText* m_staticTextNight =
      new wxStaticText(sbEfficiency->GetStaticBox(), wxID_ANY, _("Night"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticTextNight->Wrap(-1);
  fgSizerEfficiency->Add(m_staticTextNight, 0, wxALIGN_CENTER_VERTICAL | wxALL,
                         5);

  m_sNightCumulativeEfficiency = new wxSpinCtrl(
      sbEfficiency->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(140, -1), wxSP_ARROW_KEYS, 0, 200, 100);
  m_sNightCumulativeEfficiency->SetToolTip(
      _("Cumulative efficiency factor for night sailing"));
  fgSizerEfficiency->Add(m_sNightCumulativeEfficiency, 0,
                         wxALL | wxALIGN_CENTER_VERTICAL, 5);

  wxStaticText* m_staticTextNightPC =
      new wxStaticText(sbEfficiency->GetStaticBox(), wxID_ANY, _("%"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticTextNightPC->Wrap(-1);
  fgSizerEfficiency->Add(m_staticTextNightPC, 0,
                         wxALIGN_CENTER_VERTICAL | wxALL, 5);

  sbEfficiency->Add(fgSizerEfficiency, 1, wxEXPAND, 5);
  fgSizer109->Add(sbEfficiency, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbCourses;
  sbCourses = new wxStaticBoxSizer(
      new wxStaticBox(m_pAdvanced, wxID_ANY,
                      _("Courses (relative to true wind)")),
      wxVERTICAL);

  wxBoxSizer* bSizer4;
  bSizer4 = new wxBoxSizer(wxHORIZONTAL);

  m_staticText113 =
      new wxStaticText(sbCourses->GetStaticBox(), wxID_ANY, _("From"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText113->Wrap(-1);
  bSizer4->Add(m_staticText113, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sFromDegree = new wxSpinCtrl(sbCourses->GetStaticBox(), wxID_ANY,
                                 wxEmptyString, wxDefaultPosition,
                                 wxSize(140, -1), wxSP_ARROW_KEYS, 0, 180, 0);
  bSizer4->Add(m_sFromDegree, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText115 =
      new wxStaticText(sbCourses->GetStaticBox(), wxID_ANY, _("To"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText115->Wrap(-1);
  bSizer4->Add(m_staticText115, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sToDegree = new wxSpinCtrl(sbCourses->GetStaticBox(), wxID_ANY,
                               wxEmptyString, wxDefaultPosition,
                               wxSize(140, -1), wxSP_ARROW_KEYS, 0, 180, 180);
  bSizer4->Add(m_sToDegree, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  sbCourses->Add(bSizer4, 1, wxEXPAND, 5);

  wxBoxSizer* bSizer3;
  bSizer3 = new wxBoxSizer(wxHORIZONTAL);

  m_staticText117 =
      new wxStaticText(sbCourses->GetStaticBox(), wxID_ANY, _("By"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText117->Wrap(-1);
  bSizer3->Add(m_staticText117, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sByDegrees = new wxSpinCtrlDouble(
      sbCourses->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition,
      wxSize(140, -1), wxSP_ARROW_KEYS, 0.1, 60., 5., 0.1 /*inc*/);
  bSizer3->Add(m_sByDegrees, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText118 =
      new wxStaticText(sbCourses->GetStaticBox(), wxID_ANY, _("Degrees"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText118->Wrap(-1);
  bSizer3->Add(m_staticText118, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  sbCourses->Add(bSizer3, 1, wxEXPAND, 5);

  fgSizer109->Add(sbCourses, 1, wxEXPAND | wxALL, 5);

  fgSizer1072->Add(fgSizer109, 1, wxEXPAND | wxALL, 5);

  bSizer8->Add(fgSizer1072, 1, wxEXPAND, 5);

  m_bResetAdvanced =
      new wxButton(m_pAdvanced, wxID_ANY, _("Reset all Advanced Parameters"),
                   wxDefaultPosition, wxDefaultSize, 0);
  bSizer8->Add(m_bResetAdvanced, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

  m_pAdvanced->SetSizer(bSizer8);
  m_pAdvanced->Layout();
  bSizer8->Fit(m_pAdvanced);
  m_notebook7->AddPage(m_pAdvanced, _("Advanced"), false);

  fgSizer95->Add(m_notebook7, 1, wxEXPAND | wxALL, 5);

  this->SetSizer(fgSizer95);
  this->Layout();
  fgSizer95->Fit(this);

  this->Centre(wxBOTH);

  // Connect Events
  m_rbStartFromBoat->Connect(
      wxEVT_COMMAND_RADIOBUTTON_SELECTED,
      wxCommandEventHandler(ConfigurationDialogBase::OnStartFromBoat), NULL,
      this);
  m_rbStartPositionSelection->Connect(
      wxEVT_COMMAND_RADIOBUTTON_SELECTED,
      wxCommandEventHandler(ConfigurationDialogBase::OnStartFromPosition), NULL,
      this);
  m_cStart->Connect(wxEVT_COMMAND_COMBOBOX_SELECTED,
                    wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                    NULL, this);
  m_cStart->Connect(wxEVT_COMMAND_TEXT_UPDATED,
                    wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                    NULL, this);
  m_dpStartDate->Connect(
      wxEVT_DATE_CHANGED,
      wxDateEventHandler(ConfigurationDialogBase::OnUpdateDate), NULL, this);
  m_cbUseCurrentTime->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUseCurrentTime), NULL,
      this);
  m_bGribTime->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnGribTime), NULL, this);
  m_tpTime->Connect(wxEVT_TIME_CHANGED,
                    wxDateEventHandler(ConfigurationDialogBase::OnUpdateTime),
                    NULL, this);
  m_bCurrentTime->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnCurrentTime), NULL,
      this);
  m_tBoat->Connect(wxEVT_COMMAND_TEXT_UPDATED,
                   wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                   NULL, this);
  m_bBoatFilename->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnBoatFilename), NULL,
      this);
  m_bEditBoat->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnEditBoat), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sMaxTrueWindKnots->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxTrueWindKnots->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sMaxApparentWindKnots->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxApparentWindKnots->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sMaxSwellMeters->Connect(
      wxEVT_LEFT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_LEFT_UP,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_MIDDLE_UP,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSwellMeters->Connect(
      wxEVT_AUX1_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_AUX1_UP,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_AUX2_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_AUX1_UP,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_MOTION,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Connect(
      wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_cEnd->Connect(wxEVT_COMMAND_COMBOBOX_SELECTED,
                  wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                  NULL, this);
  m_cEnd->Connect(wxEVT_COMMAND_TEXT_UPDATED,
                  wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                  NULL, this);
  m_sTimeStepHours->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTimeStepHours->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sTimeStepMinutes->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTimeStepMinutes->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_cbDetectLand->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbDetectBoundary->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbCurrents->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbOptimizeTacking->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbUseGrib->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                       wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                       NULL, this);
  m_cClimatologyType->Connect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbAllowDataDeficient->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_bOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                 wxCommandEventHandler(ConfigurationDialogBase::OnClose), NULL,
                 this);
  m_sMaxLatitude->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxLatitude->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sWindVSCurrent->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sWindVSCurrent->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_cbAvoidCycloneTracks->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnAvoidCyclones), NULL,
      this);
  m_sCycloneMonths->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sCycloneMonths->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sCycloneDays->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sCycloneDays->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_cbInvertedRegions->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbAnchoring->Connect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cIntegrator->Connect(
      wxEVT_COMMAND_TEXT_UPDATED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_sWindStrength->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Connect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Connect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Connect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Connect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Connect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Connect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Connect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Connect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  //
  m_sJibingTime->Connect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Connect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Connect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Connect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Connect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Connect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Connect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Connect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Connect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Connect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Connect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Connect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Connect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Connect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Connect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Connect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Connect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);

  //
  m_sSailPlanChangeTime->Connect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);

  m_sSafetyMarginLand->Connect(
      wxEVT_MOTION,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sSafetyMarginLand->Connect(
      wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sUpwindEfficiency->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sDownwindEfficiency->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sNightCumulativeEfficiency->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sFromDegree->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sToDegree->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sByDegrees->Connect(
      wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_bResetAdvanced->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnResetAdvanced), NULL,
      this);
}

ConfigurationDialogBase::~ConfigurationDialogBase() {
  // Disconnect Events
  m_rbStartFromBoat->Disconnect(
      wxEVT_COMMAND_RADIOBUTTON_SELECTED,
      wxCommandEventHandler(ConfigurationDialogBase::OnStartFromBoat), NULL,
      this);
  m_rbStartPositionSelection->Disconnect(
      wxEVT_COMMAND_RADIOBUTTON_SELECTED,
      wxCommandEventHandler(ConfigurationDialogBase::OnStartFromPosition), NULL,
      this);
  m_cStart->Disconnect(wxEVT_COMMAND_COMBOBOX_SELECTED,
                       wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                       NULL, this);
  m_cStart->Disconnect(wxEVT_COMMAND_TEXT_UPDATED,
                       wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                       NULL, this);
  m_dpStartDate->Disconnect(
      wxEVT_DATE_CHANGED,
      wxDateEventHandler(ConfigurationDialogBase::OnUpdateDate), NULL, this);
  m_cbUseCurrentTime->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUseCurrentTime), NULL,
      this);
  m_bGribTime->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnGribTime), NULL, this);
  m_tpTime->Disconnect(
      wxEVT_TIME_CHANGED,
      wxDateEventHandler(ConfigurationDialogBase::OnUpdateTime), NULL, this);
  m_bCurrentTime->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnCurrentTime), NULL,
      this);
  m_tBoat->Disconnect(wxEVT_COMMAND_TEXT_UPDATED,
                      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                      NULL, this);
  m_bBoatFilename->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnBoatFilename), NULL,
      this);
  m_bEditBoat->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnEditBoat), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxDivertedCourse->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sMaxTrueWindKnots->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxTrueWindKnots->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sMaxApparentWindKnots->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxApparentWindKnots->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_LEFT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_LEFT_UP,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_MIDDLE_UP,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_RIGHT_UP,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_AUX1_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_AUX1_UP,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_AUX2_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_AUX1_UP,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_MOTION,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpinDouble), NULL,
      this);
  m_sMaxSwellMeters->Disconnect(
      wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_cEnd->Disconnect(wxEVT_COMMAND_COMBOBOX_SELECTED,
                     wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                     NULL, this);
  m_cEnd->Disconnect(wxEVT_COMMAND_TEXT_UPDATED,
                     wxCommandEventHandler(ConfigurationDialogBase::OnUpdate),
                     NULL, this);
  m_sTimeStepHours->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTimeStepHours->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sTimeStepMinutes->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTimeStepMinutes->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_cbDetectLand->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbDetectBoundary->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbCurrents->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbOptimizeTacking->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbUseGrib->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cClimatologyType->Disconnect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbAllowDataDeficient->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_bOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                    wxCommandEventHandler(ConfigurationDialogBase::OnClose),
                    NULL, this);
  m_sMaxLatitude->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxLatitude->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sWindVSCurrent->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sWindVSCurrent->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxCourseAngle->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sMaxSearchAngle->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_cbAvoidCycloneTracks->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnAvoidCyclones), NULL,
      this);
  m_sCycloneMonths->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sCycloneMonths->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sCycloneDays->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sCycloneDays->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_cbInvertedRegions->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cbAnchoring->Disconnect(
      wxEVT_COMMAND_CHECKBOX_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_cIntegrator->Disconnect(
      wxEVT_COMMAND_TEXT_UPDATED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_sWindStrength->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sTackingTime->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);

  //
  m_sJibingTime->Disconnect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sJibingTime->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  //
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_LEFT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(ConfigurationDialogBase::EnableSpin), NULL, this);
  m_sSailPlanChangeTime->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  //
  m_sSafetyMarginLand->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(ConfigurationDialogBase::EnableSpin),
      NULL, this);
  m_sSafetyMarginLand->Disconnect(
      wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sUpwindEfficiency->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sDownwindEfficiency->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sNightCumulativeEfficiency->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sFromDegree->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sToDegree->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(ConfigurationDialogBase::OnUpdateSpin), NULL, this);
  m_sByDegrees->Disconnect(
      wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED,
      wxCommandEventHandler(ConfigurationDialogBase::OnUpdate), NULL, this);
  m_bResetAdvanced->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationDialogBase::OnResetAdvanced), NULL,
      this);
}

PlotDialogBase::PlotDialogBase(wxWindow* parent, wxWindowID id,
                               const wxString& title, const wxPoint& pos,
                               const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxSize(600, 400), wxDefaultSize);

  wxFlexGridSizer* fgSizer3;
  fgSizer3 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer3->AddGrowableCol(0);
  fgSizer3->AddGrowableRow(0);
  fgSizer3->SetFlexibleDirection(wxBOTH);
  fgSizer3->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_PlotWindow =
      new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                           wxFULL_REPAINT_ON_RESIZE | wxHSCROLL | wxVSCROLL);
  m_PlotWindow->SetScrollRate(5, 5);
  m_PlotWindow->SetMinSize(wxSize(-1, 210));

  fgSizer3->Add(m_PlotWindow, 1, wxEXPAND | wxALL, 5);

  wxFlexGridSizer* fgSizer12;
  fgSizer12 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer12->AddGrowableCol(0);
  fgSizer12->SetFlexibleDirection(wxBOTH);
  fgSizer12->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText138 = new wxStaticText(this, wxID_ANY, _("Position"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText138->Wrap(-1);
  fgSizer12->Add(m_staticText138, 1, wxALL | wxALIGN_RIGHT | wxEXPAND, 5);

  m_sPosition = new wxSlider(this, wxID_ANY, 0, 0, 100, wxDefaultPosition,
                             wxDefaultSize, wxSL_HORIZONTAL);
  fgSizer12->Add(m_sPosition, 1, wxALL | wxEXPAND, 5);

  m_staticText139 = new wxStaticText(this, wxID_ANY, _("Scale"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText139->Wrap(-1);
  fgSizer12->Add(m_staticText139, 1, wxALL | wxALIGN_RIGHT | wxEXPAND, 5);

  m_sScale = new wxSlider(this, wxID_ANY, 100, 0, 100, wxDefaultPosition,
                          wxDefaultSize, wxSL_HORIZONTAL);
  fgSizer12->Add(m_sScale, 1, wxALL | wxEXPAND, 5);

  fgSizer12->Add(0, 0, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer97;
  fgSizer97 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer97->SetFlexibleDirection(wxBOTH);
  fgSizer97->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer78;
  fgSizer78 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer78->SetFlexibleDirection(wxBOTH);
  fgSizer78->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  int variableInfoCount;
  const VariableInfo* variableInfos = GetVariables(variableInfoCount);

  // Create the display strings array for wxChoice
  std::vector<wxString> variableChoices(variableInfoCount);
  for (int i = 0; i < variableInfoCount; i++) {
    variableChoices[i] = variableInfos[i].displayName;
  }

  m_cVariable1 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                              variableInfoCount, variableChoices.data(), 0);
  m_cVariable1->SetSelection(
      GetVariableIndexFromEnum(APPARENT_WIND_SPEED_OVER_WATER));
  fgSizer78->Add(m_cVariable1, 1, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL,
                 5);

  m_stMousePosition1 =
      new wxStaticText(this, wxID_ANY, _("        N/A         "),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_stMousePosition1->Wrap(-1);
  m_stMousePosition1->SetForegroundColour(wxColour(251, 2, 7));
  m_stMousePosition1->SetMinSize(wxSize(130, -1));

  fgSizer78->Add(m_stMousePosition1, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_cVariable2 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                              variableInfoCount, variableChoices.data(), 0);
  m_cVariable2->SetSelection(
      GetVariableIndexFromEnum(TRUE_WIND_SPEED_OVER_WATER));
  fgSizer78->Add(m_cVariable2, 1, wxALL | wxALIGN_CENTER_VERTICAL | wxEXPAND,
                 5);

  m_stMousePosition2 =
      new wxStaticText(this, wxID_ANY, _("        N/A         "),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_stMousePosition2->Wrap(-1);
  m_stMousePosition2->SetForegroundColour(wxColour(33, 255, 6));

  fgSizer78->Add(m_stMousePosition2, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_cVariable3 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                              variableInfoCount, variableChoices.data(), 0);
  m_cVariable3->SetSelection(GetVariableIndexFromEnum(SPEED_THROUGH_WATER));
  fgSizer78->Add(m_cVariable3, 1, wxALL | wxALIGN_CENTER_VERTICAL | wxEXPAND,
                 5);

  m_stMousePosition3 =
      new wxStaticText(this, wxID_ANY, _("        N/A         "),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_stMousePosition3->Wrap(-1);
  m_stMousePosition3->SetForegroundColour(wxColour(0, 0, 255));

  fgSizer78->Add(m_stMousePosition3, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer97->Add(fgSizer78, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer16;
  fgSizer16 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer16->SetFlexibleDirection(wxBOTH);
  fgSizer16->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_rbCurrentRoute = new wxRadioButton(this, wxID_ANY, _("Current Route"),
                                       wxDefaultPosition, wxDefaultSize, 0);
  fgSizer16->Add(m_rbCurrentRoute, 1, wxALL | wxEXPAND, 5);

  m_rbCursorRoute = new wxRadioButton(this, wxID_ANY, _("Cursor Route"),
                                      wxDefaultPosition, wxDefaultSize, 0);
  fgSizer16->Add(m_rbCursorRoute, 1, wxALL | wxEXPAND, 5);

  m_sdbSizer4 = new wxStdDialogButtonSizer();
  m_sdbSizer4OK = new wxButton(this, wxID_OK);
  m_sdbSizer4->AddButton(m_sdbSizer4OK);
  m_sdbSizer4->Realize();

  fgSizer16->Add(m_sdbSizer4, 1, wxEXPAND | wxALL | wxALIGN_CENTER_VERTICAL, 5);

  fgSizer97->Add(fgSizer16, 1, wxEXPAND, 5);

  fgSizer12->Add(fgSizer97, 1, wxEXPAND, 5);

  fgSizer3->Add(fgSizer12, 1, wxEXPAND | wxALL, 5);

  this->SetSizer(fgSizer3);
  this->Layout();
  fgSizer3->Fit(this);

  this->Centre(wxBOTH);

  // Connect Events
  m_PlotWindow->Connect(wxEVT_LEFT_DOWN,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_LEFT_UP,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_MIDDLE_DOWN,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_MIDDLE_UP,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_RIGHT_DOWN,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_RIGHT_UP,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_AUX1_DOWN,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_AUX1_UP,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_AUX2_DOWN,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_AUX1_UP,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_MOTION,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_LEFT_DCLICK,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_MIDDLE_DCLICK,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_RIGHT_DCLICK,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_AUX1_DCLICK,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_AUX2_DCLICK,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_LEAVE_WINDOW,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_ENTER_WINDOW,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_MOUSEWHEEL,
                        wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
                        NULL, this);
  m_PlotWindow->Connect(wxEVT_PAINT,
                        wxPaintEventHandler(PlotDialogBase::OnPaintPlot), NULL,
                        this);
  m_PlotWindow->Connect(
      wxEVT_SIZE, wxSizeEventHandler(PlotDialogBase::OnSizePlot), NULL, this);
  m_PlotWindow->Connect(wxEVT_UPDATE_UI,
                        wxUpdateUIEventHandler(PlotDialogBase::OnUpdateUI),
                        NULL, this);
  m_sPosition->Connect(wxEVT_SCROLL_TOP,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sPosition->Connect(wxEVT_SCROLL_BOTTOM,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sPosition->Connect(wxEVT_SCROLL_LINEUP,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sPosition->Connect(wxEVT_SCROLL_LINEDOWN,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sPosition->Connect(wxEVT_SCROLL_PAGEUP,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sPosition->Connect(wxEVT_SCROLL_PAGEDOWN,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sPosition->Connect(wxEVT_SCROLL_THUMBTRACK,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sPosition->Connect(wxEVT_SCROLL_THUMBRELEASE,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sPosition->Connect(wxEVT_SCROLL_CHANGED,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sScale->Connect(wxEVT_SCROLL_TOP,
                    wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                    this);
  m_sScale->Connect(wxEVT_SCROLL_BOTTOM,
                    wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                    this);
  m_sScale->Connect(wxEVT_SCROLL_LINEUP,
                    wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                    this);
  m_sScale->Connect(wxEVT_SCROLL_LINEDOWN,
                    wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                    this);
  m_sScale->Connect(wxEVT_SCROLL_PAGEUP,
                    wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                    this);
  m_sScale->Connect(wxEVT_SCROLL_PAGEDOWN,
                    wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                    this);
  m_sScale->Connect(wxEVT_SCROLL_THUMBTRACK,
                    wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                    this);
  m_sScale->Connect(wxEVT_SCROLL_THUMBRELEASE,
                    wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                    this);
  m_sScale->Connect(wxEVT_SCROLL_CHANGED,
                    wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                    this);
  m_cVariable1->Connect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(PlotDialogBase::OnUpdatePlotVariable), NULL, this);
  m_cVariable2->Connect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(PlotDialogBase::OnUpdatePlotVariable), NULL, this);
  m_cVariable3->Connect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(PlotDialogBase::OnUpdatePlotVariable), NULL, this);
  m_rbCurrentRoute->Connect(
      wxEVT_COMMAND_RADIOBUTTON_SELECTED,
      wxCommandEventHandler(PlotDialogBase::OnUpdateRoute), NULL, this);
}

PlotDialogBase::~PlotDialogBase() {
  // Disconnect Events
  m_PlotWindow->Disconnect(
      wxEVT_LEFT_DOWN, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_LEFT_UP, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_MIDDLE_DOWN, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_MIDDLE_UP, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_RIGHT_DOWN, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_RIGHT_UP, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX1_DOWN, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX2_DOWN, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX1_UP, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_LEFT_DCLICK, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX1_DCLICK, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX2_DCLICK, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_MOUSEWHEEL, wxMouseEventHandler(PlotDialogBase::OnMouseEventsPlot),
      NULL, this);
  m_PlotWindow->Disconnect(wxEVT_PAINT,
                           wxPaintEventHandler(PlotDialogBase::OnPaintPlot),
                           NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_SIZE, wxSizeEventHandler(PlotDialogBase::OnSizePlot), NULL, this);
  m_PlotWindow->Disconnect(wxEVT_UPDATE_UI,
                           wxUpdateUIEventHandler(PlotDialogBase::OnUpdateUI),
                           NULL, this);
  m_sPosition->Disconnect(wxEVT_SCROLL_TOP,
                          wxScrollEventHandler(PlotDialogBase::OnUpdatePlot),
                          NULL, this);
  m_sPosition->Disconnect(wxEVT_SCROLL_BOTTOM,
                          wxScrollEventHandler(PlotDialogBase::OnUpdatePlot),
                          NULL, this);
  m_sPosition->Disconnect(wxEVT_SCROLL_LINEUP,
                          wxScrollEventHandler(PlotDialogBase::OnUpdatePlot),
                          NULL, this);
  m_sPosition->Disconnect(wxEVT_SCROLL_LINEDOWN,
                          wxScrollEventHandler(PlotDialogBase::OnUpdatePlot),
                          NULL, this);
  m_sPosition->Disconnect(wxEVT_SCROLL_PAGEUP,
                          wxScrollEventHandler(PlotDialogBase::OnUpdatePlot),
                          NULL, this);
  m_sPosition->Disconnect(wxEVT_SCROLL_PAGEDOWN,
                          wxScrollEventHandler(PlotDialogBase::OnUpdatePlot),
                          NULL, this);
  m_sPosition->Disconnect(wxEVT_SCROLL_THUMBTRACK,
                          wxScrollEventHandler(PlotDialogBase::OnUpdatePlot),
                          NULL, this);
  m_sPosition->Disconnect(wxEVT_SCROLL_THUMBRELEASE,
                          wxScrollEventHandler(PlotDialogBase::OnUpdatePlot),
                          NULL, this);
  m_sPosition->Disconnect(wxEVT_SCROLL_CHANGED,
                          wxScrollEventHandler(PlotDialogBase::OnUpdatePlot),
                          NULL, this);
  m_sScale->Disconnect(wxEVT_SCROLL_TOP,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sScale->Disconnect(wxEVT_SCROLL_BOTTOM,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sScale->Disconnect(wxEVT_SCROLL_LINEUP,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sScale->Disconnect(wxEVT_SCROLL_LINEDOWN,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sScale->Disconnect(wxEVT_SCROLL_PAGEUP,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sScale->Disconnect(wxEVT_SCROLL_PAGEDOWN,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sScale->Disconnect(wxEVT_SCROLL_THUMBTRACK,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sScale->Disconnect(wxEVT_SCROLL_THUMBRELEASE,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_sScale->Disconnect(wxEVT_SCROLL_CHANGED,
                       wxScrollEventHandler(PlotDialogBase::OnUpdatePlot), NULL,
                       this);
  m_cVariable1->Disconnect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(PlotDialogBase::OnUpdatePlotVariable), NULL, this);
  m_cVariable2->Disconnect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(PlotDialogBase::OnUpdatePlotVariable), NULL, this);
  m_cVariable3->Disconnect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(PlotDialogBase::OnUpdatePlotVariable), NULL, this);
  m_rbCurrentRoute->Disconnect(
      wxEVT_COMMAND_RADIOBUTTON_SELECTED,
      wxCommandEventHandler(PlotDialogBase::OnUpdateRoute), NULL, this);
}

AboutDialogBase::AboutDialogBase(wxWindow* parent, wxWindowID id,
                                 const wxString& title, const wxPoint& pos,
                                 const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxDefaultSize, wxDefaultSize);

  wxFlexGridSizer* fgSizer90;
  fgSizer90 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer90->SetFlexibleDirection(wxBOTH);
  fgSizer90->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer109;
  fgSizer109 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer109->SetFlexibleDirection(wxBOTH);
  fgSizer109->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText135 =
      new wxStaticText(this, wxID_ANY, _("Weather Routing Plugin Version"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText135->Wrap(-1);
  fgSizer109->Add(m_staticText135, 0, wxALL, 5);

  m_stVersion = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                 wxDefaultPosition, wxDefaultSize, 0);
  m_stVersion->Wrap(-1);
  fgSizer109->Add(m_stVersion, 0, wxALL, 5);

  fgSizer90->Add(fgSizer109, 1, wxEXPAND, 5);

  m_staticText110 = new wxStaticText(
      this, wxID_ANY,
      _("The weather routing plugin for opencpn is intended to calculate "
        "sailing routes based on computerized weather data and boat sailing "
        "ability.\n\nLicense: GPLv3+\n\nSource "
        "Code:\nhttps://github.com/seandepagnier/"
        "weather_routing_pi\n\nAuthor:\nSean D'Epagnier\n\nMany thanks to all "
        "of the translators and testers."),
      wxDefaultPosition, wxDefaultSize, 0);
  m_staticText110->Wrap(400);
  fgSizer90->Add(m_staticText110, 0, wxALL, 5);

  wxFlexGridSizer* fgSizer91;
  fgSizer91 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer91->SetFlexibleDirection(wxBOTH);
  fgSizer91->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_bAboutAuthor = new wxButton(this, wxID_ANY, _("About Author"),
                                wxDefaultPosition, wxDefaultSize, 0);
  fgSizer91->Add(m_bAboutAuthor, 0, wxALL, 5);

  m_bClose = new wxButton(this, wxID_ANY, _("Close"), wxDefaultPosition,
                          wxDefaultSize, 0);
  fgSizer91->Add(m_bClose, 0, wxALL, 5);

  fgSizer90->Add(fgSizer91, 1, wxEXPAND, 5);

  this->SetSizer(fgSizer90);
  this->Layout();
  fgSizer90->Fit(this);

  this->Centre(wxBOTH);

  // Connect Events
  m_bAboutAuthor->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                          wxCommandEventHandler(AboutDialogBase::OnAboutAuthor),
                          NULL, this);
  m_bClose->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                    wxCommandEventHandler(AboutDialogBase::OnClose), NULL,
                    this);
}

PlotDialogBase::Variable PlotDialogBase::GetVariableEnumFromIndex(
    int index) const {
  int count;
  const VariableInfo* infos = GetVariables(count);

  if (index >= 0 && index < count) {
    return infos[index].enumValue;
  }
  return SPEED_OVER_GROUND;  // Default value
}

int PlotDialogBase::GetVariableIndexFromEnum(Variable variable) const {
  int count;
  const VariableInfo* infos = GetVariables(count);

  for (int i = 0; i < count; i++) {
    if (infos[i].enumValue == variable) {
      return i;
    }
  }
  return -1;  // Not found
}

AboutDialogBase::~AboutDialogBase() {
  // Disconnect Events
  m_bAboutAuthor->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(AboutDialogBase::OnAboutAuthor), NULL, this);
  m_bClose->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                       wxCommandEventHandler(AboutDialogBase::OnClose), NULL,
                       this);
}

BoatDialogBase::BoatDialogBase(wxWindow* parent, wxWindowID id,
                               const wxString& title, const wxPoint& pos,
                               const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxDefaultSize, wxDefaultSize);

  m_fgSizer = new wxFlexGridSizer(1, 0, 0, 0);
  m_fgSizer->AddGrowableCol(0);
  m_fgSizer->AddGrowableRow(0);
  m_fgSizer->SetFlexibleDirection(wxBOTH);
  m_fgSizer->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_splitter2 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition,
                                     wxDefaultSize, wxSP_3D);
  m_splitter2->SetSashGravity(1);
  m_splitter2->Connect(wxEVT_IDLE,
                       wxIdleEventHandler(BoatDialogBase::m_splitter2OnIdle),
                       NULL, this);
  m_splitter2->SetMinimumPaneSize(100);

  m_panel20 = new wxPanel(m_splitter2, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer106;
  fgSizer106 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer106->AddGrowableCol(0);
  fgSizer106->AddGrowableRow(0);
  fgSizer106->SetFlexibleDirection(wxBOTH);
  fgSizer106->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_nNotebook =
      new wxNotebook(m_panel20, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
  m_plot = new wxPanel(m_nNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                       wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer18;
  fgSizer18 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer18->AddGrowableCol(0);
  fgSizer18->AddGrowableRow(0);
  fgSizer18->SetFlexibleDirection(wxBOTH);
  fgSizer18->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_PlotWindow =
      new wxScrolledWindow(m_plot, wxID_ANY, wxDefaultPosition, wxSize(-1, -1),
                           wxBORDER_THEME | wxHSCROLL | wxVSCROLL);
  m_PlotWindow->SetScrollRate(5, 5);
  m_PlotWindow->SetMinSize(wxSize(200, 200));

  fgSizer18->Add(m_PlotWindow, 1, wxEXPAND | wxALL, 5);

  m_plot->SetSizer(fgSizer18);
  m_plot->Layout();
  fgSizer18->Fit(m_plot);
  m_nNotebook->AddPage(m_plot, _("Plot"), false);
  m_panel10 = new wxPanel(m_nNotebook, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer45;
  fgSizer45 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer45->AddGrowableCol(0);
  fgSizer45->AddGrowableRow(0);
  fgSizer45->SetFlexibleDirection(wxBOTH);
  fgSizer45->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_CrossOverChart =
      new wxScrolledWindow(m_panel10, wxID_ANY, wxDefaultPosition,
                           wxDefaultSize, wxHSCROLL | wxVSCROLL);
  m_CrossOverChart->SetScrollRate(5, 5);
  fgSizer45->Add(m_CrossOverChart, 1, wxEXPAND | wxALL, 5);

  wxFlexGridSizer* fgSizer107;
  fgSizer107 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer107->AddGrowableCol(3);
  fgSizer107->SetFlexibleDirection(wxBOTH);
  fgSizer107->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText137 = new wxStaticText(m_panel10, wxID_ANY, _("Overlap"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText137->Wrap(-1);
  fgSizer107->Add(m_staticText137, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_sOverlapPercentage =
      new wxSpinCtrl(m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition,
                     wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0);
  m_sOverlapPercentage->SetMaxSize(wxSize(140, -1));

  fgSizer107->Add(m_sOverlapPercentage, 0, wxALL, 5);

  m_staticText138 = new wxStaticText(m_panel10, wxID_ANY, _("%"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText138->Wrap(-1);
  fgSizer107->Add(m_staticText138, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_gCrossOverChart = new wxGauge(m_panel10, wxID_ANY, 100, wxDefaultPosition,
                                  wxDefaultSize, wxGA_HORIZONTAL | wxGA_SMOOTH);
  m_gCrossOverChart->SetValue(0);
  m_gCrossOverChart->Enable(false);

  fgSizer107->Add(m_gCrossOverChart, 0,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  fgSizer45->Add(fgSizer107, 1, wxEXPAND, 5);

  m_panel10->SetSizer(fgSizer45);
  m_panel10->Layout();
  fgSizer45->Fit(m_panel10);
  m_nNotebook->AddPage(m_panel10, _("Cross Over Chart"), false);
  m_panel24 = new wxPanel(m_nNotebook, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer117;
  fgSizer117 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer117->SetFlexibleDirection(wxBOTH);
  fgSizer117->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText125 = new wxStaticText(m_panel24, wxID_ANY, _("Upwind Port Tack"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText125->Wrap(-1);
  fgSizer117->Add(m_staticText125, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_stBestCourseUpWindPortTack = new wxStaticText(
      m_panel24, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
  m_stBestCourseUpWindPortTack->Wrap(-1);
  fgSizer117->Add(m_stBestCourseUpWindPortTack, 0,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText1251 =
      new wxStaticText(m_panel24, wxID_ANY, _("Upwind Starboard Tack"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1251->Wrap(-1);
  fgSizer117->Add(m_staticText1251, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_stBestCourseUpWindStarboardTack = new wxStaticText(
      m_panel24, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
  m_stBestCourseUpWindStarboardTack->Wrap(-1);
  fgSizer117->Add(m_stBestCourseUpWindStarboardTack, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText1252 =
      new wxStaticText(m_panel24, wxID_ANY, _("Downwind Port Tack"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1252->Wrap(-1);
  fgSizer117->Add(m_staticText1252, 1,
                  wxALL | wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);

  m_stBestCourseDownWindPortTack = new wxStaticText(
      m_panel24, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
  m_stBestCourseDownWindPortTack->Wrap(-1);
  fgSizer117->Add(m_stBestCourseDownWindPortTack, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText12511 =
      new wxStaticText(m_panel24, wxID_ANY, _("Downwind Starboard Tack"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText12511->Wrap(-1);
  fgSizer117->Add(m_staticText12511, 1,
                  wxALL | wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);

  m_stBestCourseDownWindStarboardTack = new wxStaticText(
      m_panel24, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
  m_stBestCourseDownWindStarboardTack->Wrap(-1);
  fgSizer117->Add(m_stBestCourseDownWindStarboardTack, 1,
                  wxALL | wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);

  m_staticText133 = new wxStaticText(m_panel24, wxID_ANY, _("Wind Speed"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText133->Wrap(-1);
  fgSizer117->Add(m_staticText133, 1,
                  wxALL | wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);

  m_sVMGWindSpeed =
      new wxSpinCtrl(m_panel24, wxID_ANY, wxEmptyString, wxDefaultPosition,
                     wxDefaultSize, wxSP_ARROW_KEYS, 1, 60, 15);
  m_sVMGWindSpeed->SetMaxSize(wxSize(140, -1));

  fgSizer117->Add(m_sVMGWindSpeed, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_panel24->SetSizer(fgSizer117);
  m_panel24->Layout();
  fgSizer117->Fit(m_panel24);
  m_nNotebook->AddPage(m_panel24, _("Stats"), true);

  fgSizer106->Add(m_nNotebook, 1, wxEXPAND | wxALL, 5);

  wxFlexGridSizer* fgSizer1021;
  fgSizer1021 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer1021->SetFlexibleDirection(wxBOTH);
  fgSizer1021->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxString m_cPlotTypeChoices[] = {_("Polar"), _("Speed")};
  int m_cPlotTypeNChoices = sizeof(m_cPlotTypeChoices) / sizeof(wxString);
  m_cPlotType =
      new wxChoice(m_panel20, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                   m_cPlotTypeNChoices, m_cPlotTypeChoices, 0);
  m_cPlotType->SetSelection(0);
  fgSizer1021->Add(m_cPlotType, 1, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL,
                   5);

  wxString m_cPlotVariableChoices[] = {
      _("True Wind Dir / True Wind Speed"),
      _("Apparent Wind Dir / True Wind Speed"),
      _("True Wind Dir / Apparent Wind Speed"),
      _("Apparent Wind Dir / Apparent Wind Speed")};
  int m_cPlotVariableNChoices =
      sizeof(m_cPlotVariableChoices) / sizeof(wxString);
  m_cPlotVariable =
      new wxChoice(m_panel20, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                   m_cPlotVariableNChoices, m_cPlotVariableChoices, 0);
  m_cPlotVariable->SetSelection(0);
  fgSizer1021->Add(m_cPlotVariable, 1,
                   wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_cbFullPlot = new wxCheckBox(m_panel20, wxID_ANY, _("Full Plot"),
                                wxDefaultPosition, wxDefaultSize, 0);
  fgSizer1021->Add(m_cbFullPlot, 1, wxALIGN_CENTER_VERTICAL | wxALL | wxEXPAND,
                   5);

  fgSizer106->Add(fgSizer1021, 1, wxEXPAND, 5);

  m_panel20->SetSizer(fgSizer106);
  m_panel20->Layout();
  fgSizer106->Fit(m_panel20);
  m_panel21 = new wxPanel(m_splitter2, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxStaticBoxSizer* sbSizer31;
  sbSizer31 = new wxStaticBoxSizer(
      new wxStaticBox(m_panel21, wxID_ANY, _("Polars")), wxVERTICAL);

  wxFlexGridSizer* fgSizer92;
  fgSizer92 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer92->AddGrowableCol(0);
  fgSizer92->AddGrowableRow(0);
  fgSizer92->SetFlexibleDirection(wxBOTH);
  fgSizer92->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_lPolars = new wxListCtrl(sbSizer31->GetStaticBox(), wxID_ANY,
                             wxDefaultPosition, wxDefaultSize, wxLC_REPORT);
  m_lPolars->SetMinSize(wxSize(250, -1));
  m_lPolars->SetMaxSize(wxSize(300, -1));

  fgSizer92->Add(m_lPolars, 0, wxALL | wxEXPAND, 5);

  wxFlexGridSizer* fgSizer114;
  fgSizer114 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer114->SetFlexibleDirection(wxBOTH);
  fgSizer114->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_bUp = new wxButton(sbSizer31->GetStaticBox(), wxID_ANY, _("Up"),
                       wxDefaultPosition, wxDefaultSize, 0);
  fgSizer114->Add(m_bUp, 1, wxALL | wxEXPAND, 5);

  m_bDown = new wxButton(sbSizer31->GetStaticBox(), wxID_ANY, _("Down"),
                         wxDefaultPosition, wxDefaultSize, 0);
  fgSizer114->Add(m_bDown, 0, wxALL | wxEXPAND, 5);

  m_bEditPolar = new wxButton(sbSizer31->GetStaticBox(), wxID_ANY, _("&Edit"),
                              wxDefaultPosition, wxDefaultSize, 0);
  fgSizer114->Add(m_bEditPolar, 0, wxALL | wxEXPAND, 5);

  m_bAddPolar = new wxButton(sbSizer31->GetStaticBox(), wxID_ANY, _("Add"),
                             wxDefaultPosition, wxDefaultSize, 0);
  fgSizer114->Add(m_bAddPolar, 0, wxALL | wxEXPAND, 5);

  m_bRemovePolar =
      new wxButton(sbSizer31->GetStaticBox(), wxID_ANY, _("Remove"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer114->Add(m_bRemovePolar, 0, wxALL | wxEXPAND, 5);

  m_staticline1 =
      new wxStaticLine(sbSizer31->GetStaticBox(), wxID_ANY, wxDefaultPosition,
                       wxDefaultSize, wxLI_HORIZONTAL);
  fgSizer114->Add(m_staticline1, 0, wxEXPAND | wxALL, 5);

  m_bOpenBoat =
      new wxButton(sbSizer31->GetStaticBox(), wxID_ANY, _("Open Boat"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer114->Add(m_bOpenBoat, 0, wxALL | wxEXPAND, 5);

  m_bSaveBoat =
      new wxButton(sbSizer31->GetStaticBox(), wxID_ANY, _("Save Boat"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer114->Add(m_bSaveBoat, 0, wxALL | wxEXPAND, 5);

  m_bSaveAsBoat =
      new wxButton(sbSizer31->GetStaticBox(), wxID_ANY, _("Save As Boat"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer114->Add(m_bSaveAsBoat, 0, wxALL | wxEXPAND, 5);

  fgSizer92->Add(fgSizer114, 1, 0, 5);

  sbSizer31->Add(fgSizer92, 1, wxEXPAND, 5);

  m_panel21->SetSizer(sbSizer31);
  m_panel21->Layout();
  sbSizer31->Fit(m_panel21);
  m_splitter2->SplitVertically(m_panel20, m_panel21, 0);
  m_fgSizer->Add(m_splitter2, 1, wxEXPAND, 5);

  this->SetSizer(m_fgSizer);
  this->Layout();
  m_fgSizer->Fit(this);

  this->Centre(wxBOTH);

  // Connect Events
  m_PlotWindow->Connect(
      wxEVT_LEFT_DOWN,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_LEFT_UP,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_MIDDLE_UP,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_RIGHT_UP,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_AUX1_DOWN,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_AUX1_UP,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_AUX2_DOWN,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_AUX1_UP,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_MOTION, wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot),
      NULL, this);
  m_PlotWindow->Connect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Connect(wxEVT_PAINT,
                        wxPaintEventHandler(BoatDialogBase::OnPaintPlot), NULL,
                        this);
  m_PlotWindow->Connect(
      wxEVT_SIZE, wxSizeEventHandler(BoatDialogBase::OnUpdatePlot), NULL, this);
  m_CrossOverChart->Connect(
      wxEVT_PAINT, wxPaintEventHandler(BoatDialogBase::OnPaintCrossOverChart),
      NULL, this);
  m_sOverlapPercentage->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(BoatDialogBase::OnOverlapPercentage), NULL, this);
  m_sVMGWindSpeed->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED,
                           wxSpinEventHandler(BoatDialogBase::OnVMGWindSpeed),
                           NULL, this);
  m_cPlotType->Connect(wxEVT_COMMAND_CHOICE_SELECTED,
                       wxCommandEventHandler(BoatDialogBase::OnUpdatePlot),
                       NULL, this);
  m_cPlotVariable->Connect(wxEVT_COMMAND_CHOICE_SELECTED,
                           wxCommandEventHandler(BoatDialogBase::OnUpdatePlot),
                           NULL, this);
  m_cbFullPlot->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                        wxCommandEventHandler(BoatDialogBase::OnUpdatePlot),
                        NULL, this);
  m_lPolars->Connect(wxEVT_COMMAND_LIST_ITEM_DESELECTED,
                     wxListEventHandler(BoatDialogBase::OnPolarSelected), NULL,
                     this);
  m_lPolars->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED,
                     wxListEventHandler(BoatDialogBase::OnPolarSelected), NULL,
                     this);
  m_bUp->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                 wxCommandEventHandler(BoatDialogBase::OnUpPolar), NULL, this);
  m_bDown->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                   wxCommandEventHandler(BoatDialogBase::OnDownPolar), NULL,
                   this);
  m_bEditPolar->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                        wxCommandEventHandler(BoatDialogBase::OnEditPolar),
                        NULL, this);
  m_bAddPolar->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                       wxCommandEventHandler(BoatDialogBase::OnAddPolar), NULL,
                       this);
  m_bRemovePolar->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                          wxCommandEventHandler(BoatDialogBase::OnRemovePolar),
                          NULL, this);
  m_bOpenBoat->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                       wxCommandEventHandler(BoatDialogBase::OnOpenBoat), NULL,
                       this);
  m_bSaveBoat->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                       wxCommandEventHandler(BoatDialogBase::OnSaveBoat), NULL,
                       this);
  m_bSaveAsBoat->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                         wxCommandEventHandler(BoatDialogBase::OnSaveAsBoat),
                         NULL, this);
}

BoatDialogBase::~BoatDialogBase() {
  // Disconnect Events
  m_PlotWindow->Disconnect(
      wxEVT_LEFT_DOWN,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_LEFT_UP,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_MIDDLE_DOWN,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_MIDDLE_UP,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_RIGHT_DOWN,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_RIGHT_UP,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX1_DOWN,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX1_UP,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX2_DOWN,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX1_UP,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_MOTION, wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot),
      NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_LEFT_DCLICK,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_MIDDLE_DCLICK,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_RIGHT_DCLICK,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX1_DCLICK,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_AUX2_DCLICK,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_LEAVE_WINDOW,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_ENTER_WINDOW,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_MOUSEWHEEL,
      wxMouseEventHandler(BoatDialogBase::OnMouseEventsPolarPlot), NULL, this);
  m_PlotWindow->Disconnect(wxEVT_PAINT,
                           wxPaintEventHandler(BoatDialogBase::OnPaintPlot),
                           NULL, this);
  m_PlotWindow->Disconnect(
      wxEVT_SIZE, wxSizeEventHandler(BoatDialogBase::OnUpdatePlot), NULL, this);
  m_CrossOverChart->Disconnect(
      wxEVT_PAINT, wxPaintEventHandler(BoatDialogBase::OnPaintCrossOverChart),
      NULL, this);
  m_sOverlapPercentage->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(BoatDialogBase::OnOverlapPercentage), NULL, this);
  m_sVMGWindSpeed->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(BoatDialogBase::OnVMGWindSpeed), NULL, this);
  m_cPlotType->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED,
                          wxCommandEventHandler(BoatDialogBase::OnUpdatePlot),
                          NULL, this);
  m_cPlotVariable->Disconnect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(BoatDialogBase::OnUpdatePlot), NULL, this);
  m_cbFullPlot->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                           wxCommandEventHandler(BoatDialogBase::OnUpdatePlot),
                           NULL, this);
  m_lPolars->Disconnect(wxEVT_COMMAND_LIST_ITEM_DESELECTED,
                        wxListEventHandler(BoatDialogBase::OnPolarSelected),
                        NULL, this);
  m_lPolars->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED,
                        wxListEventHandler(BoatDialogBase::OnPolarSelected),
                        NULL, this);
  m_bUp->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                    wxCommandEventHandler(BoatDialogBase::OnUpPolar), NULL,
                    this);
  m_bDown->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                      wxCommandEventHandler(BoatDialogBase::OnDownPolar), NULL,
                      this);
  m_bEditPolar->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                           wxCommandEventHandler(BoatDialogBase::OnEditPolar),
                           NULL, this);
  m_bAddPolar->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                          wxCommandEventHandler(BoatDialogBase::OnAddPolar),
                          NULL, this);
  m_bRemovePolar->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(BoatDialogBase::OnRemovePolar), NULL, this);
  m_bOpenBoat->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                          wxCommandEventHandler(BoatDialogBase::OnOpenBoat),
                          NULL, this);
  m_bSaveBoat->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                          wxCommandEventHandler(BoatDialogBase::OnSaveBoat),
                          NULL, this);
  m_bSaveAsBoat->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                            wxCommandEventHandler(BoatDialogBase::OnSaveAsBoat),
                            NULL, this);
}

StatisticsDialogBase::StatisticsDialogBase(wxWindow* parent, wxWindowID id,
                                           const wxString& title,
                                           const wxPoint& pos,
                                           const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxDefaultSize, wxDefaultSize);

  wxFlexGridSizer* fgSizer55;
  fgSizer55 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer55->SetFlexibleDirection(wxBOTH);
  fgSizer55->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbSizer27;
  sbSizer27 = new wxStaticBoxSizer(
      new wxStaticBox(this, wxID_ANY, _("Overall")), wxVERTICAL);

  wxFlexGridSizer* fgSizer94;
  fgSizer94 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer94->SetFlexibleDirection(wxBOTH);
  fgSizer94->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText511 =
      new wxStaticText(sbSizer27->GetStaticBox(), wxID_ANY, _("Run Time"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText511->Wrap(-1);
  fgSizer94->Add(m_staticText511, 0, wxALL, 5);

  m_stRunTime = new wxStaticText(sbSizer27->GetStaticBox(), wxID_ANY, _("0"),
                                 wxDefaultPosition, wxDefaultSize, 0);
  m_stRunTime->Wrap(-1);
  fgSizer94->Add(m_stRunTime, 0, wxALL, 5);

  sbSizer27->Add(fgSizer94, 1, wxEXPAND, 5);

  fgSizer55->Add(sbSizer27, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbSizer10;
  sbSizer10 = new wxStaticBoxSizer(
      new wxStaticBox(this, wxID_ANY, _("Current Route")), wxVERTICAL);

  wxFlexGridSizer* fgSizer29;
  fgSizer29 = new wxFlexGridSizer(0, 4, 0, 0);
  fgSizer29->SetFlexibleDirection(wxBOTH);
  fgSizer29->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText47 =
      new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("State"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText47->Wrap(-1);
  fgSizer29->Add(m_staticText47, 0, wxALL, 5);

  m_stState =
      new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("Stopped"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_stState->Wrap(-1);
  fgSizer29->Add(m_stState, 0, wxALL, 5);

  m_staticText53 =
      new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("Iso Chrons"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText53->Wrap(-1);
  fgSizer29->Add(m_staticText53, 0, wxALL, 5);

  m_stIsoChrons = new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("0"),
                                   wxDefaultPosition, wxDefaultSize, 0);
  m_stIsoChrons->Wrap(-1);
  fgSizer29->Add(m_stIsoChrons, 0, wxALL, 5);

  m_staticText55 =
      new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("Routes"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText55->Wrap(-1);
  fgSizer29->Add(m_staticText55, 0, wxALL, 5);

  m_stRoutes = new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("0"),
                                wxDefaultPosition, wxDefaultSize, 0);
  m_stRoutes->Wrap(-1);
  fgSizer29->Add(m_stRoutes, 0, wxALL, 5);

  m_staticText57 =
      new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("InvRoutes"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText57->Wrap(-1);
  fgSizer29->Add(m_staticText57, 0, wxALL, 5);

  m_stInvRoutes = new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("0"),
                                   wxDefaultPosition, wxDefaultSize, 0);
  m_stInvRoutes->Wrap(-1);
  fgSizer29->Add(m_stInvRoutes, 0, wxALL, 5);

  m_staticText90 =
      new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("Skip Positions"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText90->Wrap(-1);
  fgSizer29->Add(m_staticText90, 0, wxALL, 5);

  m_stSkipPositions =
      new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("0"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_stSkipPositions->Wrap(-1);
  fgSizer29->Add(m_stSkipPositions, 0, wxALL, 5);

  m_staticText49 =
      new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("Positions"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText49->Wrap(-1);
  fgSizer29->Add(m_staticText49, 0, wxALL, 5);

  m_stPositions = new wxStaticText(sbSizer10->GetStaticBox(), wxID_ANY, _("0"),
                                   wxDefaultPosition, wxDefaultSize, 0);
  m_stPositions->Wrap(-1);
  fgSizer29->Add(m_stPositions, 0, wxALL, 5);

  sbSizer10->Add(fgSizer29, 1, wxEXPAND, 5);

  fgSizer55->Add(sbSizer10, 1, wxEXPAND | wxALL, 5);

  m_sdbSizer5 = new wxStdDialogButtonSizer();
  m_sdbSizer5OK = new wxButton(this, wxID_OK);
  m_sdbSizer5->AddButton(m_sdbSizer5OK);
  m_sdbSizer5->Realize();

  fgSizer55->Add(m_sdbSizer5, 1, wxEXPAND | wxALL, 5);

  this->SetSizer(fgSizer55);
  this->Layout();
  fgSizer55->Fit(this);

  this->Centre(wxBOTH);
}

StatisticsDialogBase::~StatisticsDialogBase() {}

ReportDialogBase::ReportDialogBase(wxWindow* parent, wxWindowID id,
                                   const wxString& title, const wxPoint& pos,
                                   const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxSize(600, 400), wxDefaultSize);

  wxFlexGridSizer* fgSizer90;
  fgSizer90 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer90->AddGrowableCol(0);
  fgSizer90->AddGrowableRow(0);
  fgSizer90->AddGrowableRow(1);
  fgSizer90->SetFlexibleDirection(wxBOTH);
  fgSizer90->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbSizer31;
  sbSizer31 = new wxStaticBoxSizer(
      new wxStaticBox(this, wxID_ANY, _("Current Configuration")), wxVERTICAL);

  wxFlexGridSizer* fgSizer98;
  fgSizer98 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer98->AddGrowableCol(0);
  fgSizer98->AddGrowableRow(0);
  fgSizer98->SetFlexibleDirection(wxBOTH);
  fgSizer98->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_htmlConfigurationReport =
      new wxHtmlWindow(sbSizer31->GetStaticBox(), wxID_ANY, wxDefaultPosition,
                       wxDefaultSize, wxHW_SCROLLBAR_AUTO);
  fgSizer98->Add(m_htmlConfigurationReport, 0, wxALL | wxEXPAND, 5);

  sbSizer31->Add(fgSizer98, 1, wxEXPAND, 5);

  fgSizer90->Add(sbSizer31, 1, wxEXPAND, 5);

  wxStaticBoxSizer* sbSizer32;
  sbSizer32 = new wxStaticBoxSizer(new wxStaticBox(this, wxID_ANY, _("Routes")),
                                   wxVERTICAL);

  wxFlexGridSizer* fgSizer99;
  fgSizer99 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer99->AddGrowableCol(0);
  fgSizer99->AddGrowableRow(0);
  fgSizer99->SetFlexibleDirection(wxBOTH);
  fgSizer99->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_htmlRoutesReport =
      new wxHtmlWindow(sbSizer32->GetStaticBox(), wxID_ANY, wxDefaultPosition,
                       wxDefaultSize, wxHW_SCROLLBAR_AUTO);
  fgSizer99->Add(m_htmlRoutesReport, 0, wxALL | wxEXPAND, 5);

  sbSizer32->Add(fgSizer99, 1, wxEXPAND, 5);

  fgSizer90->Add(sbSizer32, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer93;
  fgSizer93 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer93->AddGrowableCol(1);
  fgSizer93->SetFlexibleDirection(wxBOTH);
  fgSizer93->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_bInformation = new wxButton(this, wxID_ANY, _("Information"),
                                wxDefaultPosition, wxDefaultSize, 0);
  fgSizer93->Add(m_bInformation, 0, wxALL, 5);

  m_bClose = new wxButton(this, wxID_ANY, _("&Close"), wxDefaultPosition,
                          wxDefaultSize, 0);
  fgSizer93->Add(m_bClose, 0, wxALIGN_RIGHT | wxALL, 5);

  fgSizer90->Add(fgSizer93, 1, wxEXPAND, 5);

  this->SetSizer(fgSizer90);
  this->Layout();
  fgSizer90->Fit(this);

  this->Centre(wxBOTH);

  // Connect Events
  m_bInformation->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ReportDialogBase::OnInformation), NULL, this);
  m_bClose->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                    wxCommandEventHandler(ReportDialogBase::OnClose), NULL,
                    this);
}

ReportDialogBase::~ReportDialogBase() {
  // Disconnect Events
  m_bInformation->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ReportDialogBase::OnInformation), NULL, this);
  m_bClose->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                       wxCommandEventHandler(ReportDialogBase::OnClose), NULL,
                       this);
}

ConfigurationBatchDialogBase::ConfigurationBatchDialogBase(
    wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos,
    const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxSize(-1, -1), wxDefaultSize);

  wxFlexGridSizer* fgSizer76;
  fgSizer76 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer76->AddGrowableCol(0);
  fgSizer76->AddGrowableRow(0);
  fgSizer76->SetFlexibleDirection(wxBOTH);
  fgSizer76->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_notebookConfigurations =
      new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
  m_panel8 = new wxPanel(m_notebookConfigurations, wxID_ANY, wxDefaultPosition,
                         wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer98;
  fgSizer98 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer98->SetFlexibleDirection(wxBOTH);
  fgSizer98->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer77;
  fgSizer77 = new wxFlexGridSizer(0, 3, 0, 0);
  fgSizer77->SetFlexibleDirection(wxBOTH);
  fgSizer77->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText108 = new wxStaticText(m_panel8, wxID_ANY, _("Starting"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText108->Wrap(-1);
  fgSizer77->Add(m_staticText108, 0, wxALL, 5);

  m_stStartDateTime = new wxStaticText(m_panel8, wxID_ANY, _("N/A"),
                                       wxDefaultPosition, wxDefaultSize, 0);
  m_stStartDateTime->Wrap(-1);
  fgSizer77->Add(m_stStartDateTime, 0, wxALL, 5);

  fgSizer77->Add(0, 0, 1, wxEXPAND, 5);

  m_staticText121 = new wxStaticText(m_panel8, wxID_ANY, _("For"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText121->Wrap(-1);
  fgSizer77->Add(m_staticText121, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tStartDays = new wxTextCtrl(m_panel8, wxID_ANY, wxEmptyString,
                                wxDefaultPosition, wxSize(40, -1), 0);
  fgSizer77->Add(m_tStartDays, 0, wxALL, 5);

  m_staticText122 = new wxStaticText(m_panel8, wxID_ANY, _("day(s)"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText122->Wrap(-1);
  fgSizer77->Add(m_staticText122, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer77->Add(0, 0, 1, wxEXPAND, 5);

  m_tStartHours = new wxTextCtrl(m_panel8, wxID_ANY, wxEmptyString,
                                 wxDefaultPosition, wxSize(40, -1), 0);
  fgSizer77->Add(m_tStartHours, 0, wxALL, 5);

  m_staticText123 = new wxStaticText(m_panel8, wxID_ANY, _("hour(s)"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText123->Wrap(-1);
  fgSizer77->Add(m_staticText123, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_staticText124 = new wxStaticText(m_panel8, wxID_ANY, _("Spaced"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText124->Wrap(-1);
  fgSizer77->Add(m_staticText124, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tStartSpacingDays = new wxTextCtrl(m_panel8, wxID_ANY, wxEmptyString,
                                       wxDefaultPosition, wxSize(40, -1), 0);
  fgSizer77->Add(m_tStartSpacingDays, 0, wxALL, 5);

  m_staticText125 = new wxStaticText(m_panel8, wxID_ANY, _("day(s)"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText125->Wrap(-1);
  fgSizer77->Add(m_staticText125, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer77->Add(0, 0, 1, wxEXPAND, 5);

  m_tStartSpacingHours = new wxTextCtrl(m_panel8, wxID_ANY, wxEmptyString,
                                        wxDefaultPosition, wxSize(40, -1), 0);
  fgSizer77->Add(m_tStartSpacingHours, 0, wxALL, 5);

  m_staticText126 = new wxStaticText(m_panel8, wxID_ANY, _("Hour(s)"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText126->Wrap(-1);
  fgSizer77->Add(m_staticText126, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer98->Add(fgSizer77, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer101;
  fgSizer101 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer101->SetFlexibleDirection(wxBOTH);
  fgSizer101->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_button41 = new wxButton(m_panel8, wxID_ANY, _("Once"), wxDefaultPosition,
                            wxDefaultSize, 0);
  fgSizer101->Add(m_button41, 0, wxALL, 5);

  m_button38 = new wxButton(m_panel8, wxID_ANY, _("Daily"), wxDefaultPosition,
                            wxDefaultSize, 0);
  fgSizer101->Add(m_button38, 0, wxALL, 5);

  m_button39 = new wxButton(m_panel8, wxID_ANY, _("Weekly"), wxDefaultPosition,
                            wxDefaultSize, 0);
  fgSizer101->Add(m_button39, 0, wxALL, 5);

  m_button40 = new wxButton(m_panel8, wxID_ANY, _("Monthly"), wxDefaultPosition,
                            wxDefaultSize, 0);
  fgSizer101->Add(m_button40, 0, wxALL, 5);

  fgSizer98->Add(fgSizer101, 1, wxEXPAND, 5);

  m_panel8->SetSizer(fgSizer98);
  m_panel8->Layout();
  fgSizer98->Fit(m_panel8);
  m_notebookConfigurations->AddPage(m_panel8, _("Start Time"), true);
  m_pRoutes = new wxPanel(m_notebookConfigurations, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxBoxSizer* bSizer7;
  bSizer7 = new wxBoxSizer(wxVERTICAL);

  wxGridSizer* gSizer1;
  gSizer1 = new wxGridSizer(0, 2, 0, 0);

  wxStaticBoxSizer* sbSizer11;
  sbSizer11 = new wxStaticBoxSizer(
      new wxStaticBox(m_pRoutes, wxID_ANY, _("Sources")), wxVERTICAL);

  m_lSources = new wxListBox(sbSizer11->GetStaticBox(), wxID_ANY,
                             wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
  sbSizer11->Add(m_lSources, 1, wxALL | wxEXPAND, 5);

  gSizer1->Add(sbSizer11, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbSizer19;
  sbSizer19 = new wxStaticBoxSizer(
      new wxStaticBox(m_pRoutes, wxID_ANY, _("Destinations")), wxVERTICAL);

  m_lDestinations =
      new wxListBox(sbSizer19->GetStaticBox(), wxID_ANY, wxDefaultPosition,
                    wxDefaultSize, 0, NULL, wxLB_MULTIPLE);
  m_lDestinations->SetMinSize(wxSize(100, -1));

  sbSizer19->Add(m_lDestinations, 1, wxALL | wxEXPAND, 5);

  gSizer1->Add(sbSizer19, 1, wxEXPAND | wxALL, 5);

  bSizer7->Add(gSizer1, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer62;
  fgSizer62 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer62->AddGrowableCol(0);
  fgSizer62->AddGrowableRow(0);
  fgSizer62->SetFlexibleDirection(wxBOTH);
  fgSizer62->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbSizer28;
  sbSizer28 = new wxStaticBoxSizer(
      new wxStaticBox(m_pRoutes, wxID_ANY, _("Auto Connect")), wxVERTICAL);

  wxFlexGridSizer* fgSizer97;
  fgSizer97 = new wxFlexGridSizer(0, 3, 0, 0);
  fgSizer97->SetFlexibleDirection(wxBOTH);
  fgSizer97->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText1241 =
      new wxStaticText(sbSizer28->GetStaticBox(), wxID_ANY, _("Within"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1241->Wrap(-1);
  fgSizer97->Add(m_staticText1241, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tMiles = new wxTextCtrl(sbSizer28->GetStaticBox(), wxID_ANY, wxEmptyString,
                            wxDefaultPosition, wxDefaultSize, 0);
  fgSizer97->Add(m_tMiles, 0, wxALL, 5);

  m_staticText1251 =
      new wxStaticText(sbSizer28->GetStaticBox(), wxID_ANY, _("NM"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1251->Wrap(-1);
  fgSizer97->Add(m_staticText1251, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer97->Add(0, 0, 1, wxEXPAND, 5);

  m_bConnect = new wxButton(sbSizer28->GetStaticBox(), wxID_ANY, _("Connect"),
                            wxDefaultPosition, wxDefaultSize, 0);
  fgSizer97->Add(m_bConnect, 0, wxALL, 5);

  sbSizer28->Add(fgSizer97, 1, wxEXPAND | wxALL, 5);

  fgSizer62->Add(sbSizer28, 0, wxALL, 5);

  m_bDisconnectAll = new wxButton(m_pRoutes, wxID_ANY, _("Disconnect All"),
                                  wxDefaultPosition, wxDefaultSize, 0);
  fgSizer62->Add(m_bDisconnectAll, 0, wxALL | wxALIGN_BOTTOM, 5);

  bSizer7->Add(fgSizer62, 1, wxEXPAND, 5);

  m_pRoutes->SetSizer(bSizer7);
  m_pRoutes->Layout();
  bSizer7->Fit(m_pRoutes);
  m_notebookConfigurations->AddPage(m_pRoutes, _("Routes"), false);
  m_panel9 = new wxPanel(m_notebookConfigurations, wxID_ANY, wxDefaultPosition,
                         wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer81;
  fgSizer81 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer81->AddGrowableCol(0);
  fgSizer81->AddGrowableRow(0);
  fgSizer81->SetFlexibleDirection(wxBOTH);
  fgSizer81->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_lBoats = new wxListBox(m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                           0, NULL, 0);
  fgSizer81->Add(m_lBoats, 0, wxALL | wxEXPAND, 5);

  wxFlexGridSizer* fgSizer82;
  fgSizer82 = new wxFlexGridSizer(0, 4, 0, 0);
  fgSizer82->SetFlexibleDirection(wxBOTH);
  fgSizer82->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_bAddBoat = new wxButton(m_panel9, wxID_ANY, _("Add"), wxDefaultPosition,
                            wxDefaultSize, 0);
  fgSizer82->Add(m_bAddBoat, 0, wxALL, 5);

  m_bRemoveBoat = new wxButton(m_panel9, wxID_ANY, _("Remove"),
                               wxDefaultPosition, wxDefaultSize, 0);
  fgSizer82->Add(m_bRemoveBoat, 0, wxALL, 5);

  fgSizer81->Add(fgSizer82, 1, wxEXPAND, 5);

  m_panel9->SetSizer(fgSizer81);
  m_panel9->Layout();
  fgSizer81->Fit(m_panel9);
  m_notebookConfigurations->AddPage(m_panel9, _("Boats"), false);
  m_panel17 = new wxPanel(m_notebookConfigurations, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer109;
  fgSizer109 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer109->SetFlexibleDirection(wxBOTH);
  fgSizer109->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer108;
  fgSizer108 = new wxFlexGridSizer(0, 3, 0, 0);
  fgSizer108->SetFlexibleDirection(wxBOTH);
  fgSizer108->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText131 = new wxStaticText(m_panel17, wxID_ANY, _("From"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText131->Wrap(-1);
  fgSizer108->Add(m_staticText131, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sWindStrengthMin =
      new wxSpinCtrl(m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition,
                     wxDefaultSize, wxSP_ARROW_KEYS, 0, 999, 100);
  fgSizer108->Add(m_sWindStrengthMin, 0, wxALL, 5);

  m_staticText134 = new wxStaticText(m_panel17, wxID_ANY, _("percent"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText134->Wrap(-1);
  fgSizer108->Add(m_staticText134, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_staticText132 = new wxStaticText(m_panel17, wxID_ANY, _("To"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText132->Wrap(-1);
  fgSizer108->Add(m_staticText132, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sWindStrengthMax =
      new wxSpinCtrl(m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition,
                     wxDefaultSize, wxSP_ARROW_KEYS, 0, 999, 100);
  fgSizer108->Add(m_sWindStrengthMax, 0, wxALL, 5);

  m_staticText1341 = new wxStaticText(m_panel17, wxID_ANY, _("percent"),
                                      wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1341->Wrap(-1);
  fgSizer108->Add(m_staticText1341, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_staticText133 = new wxStaticText(m_panel17, wxID_ANY, _("By"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText133->Wrap(-1);
  fgSizer108->Add(m_staticText133, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_sWindStrengthStep =
      new wxSpinCtrl(m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition,
                     wxDefaultSize, wxSP_ARROW_KEYS, 1, 999, 10);
  fgSizer108->Add(m_sWindStrengthStep, 0, wxALL, 5);

  m_staticText1342 = new wxStaticText(m_panel17, wxID_ANY, _("percent"),
                                      wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1342->Wrap(-1);
  fgSizer108->Add(m_staticText1342, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer109->Add(fgSizer108, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer111;
  fgSizer111 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer111->SetFlexibleDirection(wxBOTH);
  fgSizer111->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_button46 = new wxButton(m_panel17, wxID_ANY, _("100"), wxDefaultPosition,
                            wxDefaultSize, 0);
  fgSizer111->Add(m_button46, 0, wxALL, 5);

  m_button47 = new wxButton(m_panel17, wxID_ANY, _("80 to 120"),
                            wxDefaultPosition, wxDefaultSize, 0);
  fgSizer111->Add(m_button47, 0, wxALL, 5);

  fgSizer109->Add(fgSizer111, 1, wxEXPAND, 5);

  m_panel17->SetSizer(fgSizer109);
  m_panel17->Layout();
  fgSizer109->Fit(m_panel17);
  m_notebookConfigurations->AddPage(m_panel17, _("Wind Strength"), false);

  fgSizer76->Add(m_notebookConfigurations, 1, wxEXPAND | wxALL, 5);

  wxFlexGridSizer* fgSizer78;
  fgSizer78 = new wxFlexGridSizer(1, 0, 0, 0);
  fgSizer78->SetFlexibleDirection(wxBOTH);
  fgSizer78->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_bInformation = new wxButton(this, wxID_ANY, _("Information"),
                                wxDefaultPosition, wxDefaultSize, 0);
  fgSizer78->Add(m_bInformation, 0, wxALL, 5);

  m_bReset = new wxButton(this, wxID_ANY, _("Reset"), wxDefaultPosition,
                          wxDefaultSize, 0);
  fgSizer78->Add(m_bReset, 0, wxALL, 5);

  m_bGenerate = new wxButton(this, wxID_ANY, _("Generate"), wxDefaultPosition,
                             wxDefaultSize, 0);
  fgSizer78->Add(m_bGenerate, 0, wxALL, 5);

  m_bOK = new wxButton(this, wxID_ANY, _("OK"), wxDefaultPosition,
                       wxDefaultSize, 0);
  fgSizer78->Add(m_bOK, 0, wxALL, 5);

  fgSizer76->Add(fgSizer78, 1, wxEXPAND | wxALL, 5);

  this->SetSizer(fgSizer76);
  this->Layout();
  fgSizer76->Fit(this);

  this->Centre(wxBOTH);

  // Connect Events
  m_button41->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnOnce), NULL, this);
  m_button38->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnDaily), NULL, this);
  m_button39->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnWeekly), NULL,
      this);
  m_button40->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnMonthly), NULL,
      this);
  m_lSources->Connect(
      wxEVT_COMMAND_LISTBOX_SELECTED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnSources), NULL,
      this);
  m_lDestinations->Connect(
      wxEVT_COMMAND_LISTBOX_SELECTED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnDestinations), NULL,
      this);
  m_bConnect->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnConnect), NULL,
      this);
  m_bDisconnectAll->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnDisconnectAll),
      NULL, this);
  m_bAddBoat->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnAddBoat), NULL,
      this);
  m_bRemoveBoat->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnRemoveBoat), NULL,
      this);
  m_button46->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::On100), NULL, this);
  m_button47->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::On80to120), NULL,
      this);
  m_bInformation->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnInformation), NULL,
      this);
  m_bReset->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnReset), NULL, this);
  m_bGenerate->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnGenerate), NULL,
      this);
  m_bOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                 wxCommandEventHandler(ConfigurationBatchDialogBase::OnClose),
                 NULL, this);
}

ConfigurationBatchDialogBase::~ConfigurationBatchDialogBase() {
  // Disconnect Events
  m_button41->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnOnce), NULL, this);
  m_button38->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnDaily), NULL, this);
  m_button39->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnWeekly), NULL,
      this);
  m_button40->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnMonthly), NULL,
      this);
  m_lSources->Disconnect(
      wxEVT_COMMAND_LISTBOX_SELECTED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnSources), NULL,
      this);
  m_lDestinations->Disconnect(
      wxEVT_COMMAND_LISTBOX_SELECTED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnDestinations), NULL,
      this);
  m_bConnect->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnConnect), NULL,
      this);
  m_bDisconnectAll->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnDisconnectAll),
      NULL, this);
  m_bAddBoat->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnAddBoat), NULL,
      this);
  m_bRemoveBoat->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnRemoveBoat), NULL,
      this);
  m_button46->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::On100), NULL, this);
  m_button47->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::On80to120), NULL,
      this);
  m_bInformation->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnInformation), NULL,
      this);
  m_bReset->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnReset), NULL, this);
  m_bGenerate->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnGenerate), NULL,
      this);
  m_bOK->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(ConfigurationBatchDialogBase::OnClose), NULL, this);
}

FilterRoutesDialogBase::FilterRoutesDialogBase(wxWindow* parent, wxWindowID id,
                                               const wxString& title,
                                               const wxPoint& pos,
                                               const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxDefaultSize, wxDefaultSize);

  wxFlexGridSizer* fgSizer95;
  fgSizer95 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer95->SetFlexibleDirection(wxBOTH);
  fgSizer95->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbSizer29;
  sbSizer29 = new wxStaticBoxSizer(
      new wxStaticBox(this, wxID_ANY, _("Category")), wxVERTICAL);

  wxArrayString m_cCategoryChoices;
  m_cCategory =
      new wxChoice(sbSizer29->GetStaticBox(), wxID_ANY, wxDefaultPosition,
                   wxDefaultSize, m_cCategoryChoices, 0);
  m_cCategory->SetSelection(0);
  sbSizer29->Add(m_cCategory, 1, wxALL | wxEXPAND, 5);

  fgSizer95->Add(sbSizer29, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbSizer28;
  sbSizer28 = new wxStaticBoxSizer(new wxStaticBox(this, wxID_ANY, _("Filter")),
                                   wxVERTICAL);

  m_tFilter = new wxTextCtrl(sbSizer28->GetStaticBox(), wxID_ANY, wxEmptyString,
                             wxDefaultPosition, wxDefaultSize, 0);
  sbSizer28->Add(m_tFilter, 1, wxALL | wxEXPAND, 5);

  fgSizer95->Add(sbSizer28, 1, wxEXPAND | wxALL, 5);

  wxFlexGridSizer* fgSizer99;
  fgSizer99 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer99->SetFlexibleDirection(wxBOTH);
  fgSizer99->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_button48 = new wxButton(this, wxID_ANY, _("Reset All"), wxDefaultPosition,
                            wxDefaultSize, 0);
  fgSizer99->Add(m_button48, 0, wxALL, 5);

  m_bDone = new wxButton(this, wxID_ANY, _("Done"), wxDefaultPosition,
                         wxDefaultSize, 0);
  fgSizer99->Add(m_bDone, 0, wxALL, 5);

  fgSizer95->Add(fgSizer99, 1, wxEXPAND | wxALL, 5);

  this->SetSizer(fgSizer95);
  this->Layout();
  fgSizer95->Fit(this);

  this->Centre(wxBOTH);

  // Connect Events
  m_cCategory->Connect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(FilterRoutesDialogBase::OnCategory), NULL, this);
  m_tFilter->Connect(
      wxEVT_COMMAND_TEXT_UPDATED,
      wxCommandEventHandler(FilterRoutesDialogBase::OnFilterText), NULL, this);
  m_button48->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                      wxCommandEventHandler(FilterRoutesDialogBase::OnResetAll),
                      NULL, this);
  m_bDone->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                   wxCommandEventHandler(FilterRoutesDialogBase::OnDone), NULL,
                   this);
}

FilterRoutesDialogBase::~FilterRoutesDialogBase() {
  // Disconnect Events
  m_cCategory->Disconnect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(FilterRoutesDialogBase::OnCategory), NULL, this);
  m_tFilter->Disconnect(
      wxEVT_COMMAND_TEXT_UPDATED,
      wxCommandEventHandler(FilterRoutesDialogBase::OnFilterText), NULL, this);
  m_button48->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(FilterRoutesDialogBase::OnResetAll), NULL, this);
  m_bDone->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                      wxCommandEventHandler(FilterRoutesDialogBase::OnDone),
                      NULL, this);
}

CursorPositionDialog::CursorPositionDialog(wxWindow* parent, wxWindowID id,
                                           const wxString& title,
                                           const wxPoint& pos,
                                           const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxSize(400, -1), wxDefaultSize);

  wxFlexGridSizer* fgSizer90;
  fgSizer90 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer90->SetFlexibleDirection(wxBOTH);
  fgSizer90->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer91;
  fgSizer91 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer91->AddGrowableCol(1);
  fgSizer91->SetFlexibleDirection(wxBOTH);
  fgSizer91->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText134 = new wxStaticText(this, wxID_ANY, _("Time"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText134->Wrap(-1);
  fgSizer91->Add(m_staticText134, 1, wxALL | wxEXPAND, 5);

  m_stTime = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                              wxDefaultSize, 0);
  m_stTime->Wrap(-1);
  fgSizer91->Add(m_stTime, 0, wxALL | wxEXPAND, 5);

  m_staticText128 = new wxStaticText(this, wxID_ANY, _("Position"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText128->Wrap(-1);
  fgSizer91->Add(m_staticText128, 0, wxALL, 5);

  m_stPosition = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                  wxDefaultPosition, wxSize(120, -1), 0);
  m_stPosition->Wrap(120);
  fgSizer91->Add(m_stPosition, 0, wxALL | wxEXPAND, 5);

  m_staticText124 = new wxStaticText(this, wxID_ANY, _("Polar"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText124->Wrap(-1);
  fgSizer91->Add(m_staticText124, 0, wxALL, 5);

  m_stPolar = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                               wxDefaultSize, 0);
  m_stPolar->Wrap(-1);
  fgSizer91->Add(m_stPolar, 0, wxALL | wxEXPAND, 5);

  m_staticText130 = new wxStaticText(this, wxID_ANY, _("Sail Changes"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText130->Wrap(-1);
  fgSizer91->Add(m_staticText130, 0, wxALL, 5);

  m_stSailChanges = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_stSailChanges->Wrap(-1);
  fgSizer91->Add(m_stSailChanges, 0, wxALL | wxEXPAND, 5);

  m_staticText126 = new wxStaticText(this, wxID_ANY, _("Tacks"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText126->Wrap(-1);
  fgSizer91->Add(m_staticText126, 0, wxALL, 5);

  m_stTacks = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                               wxDefaultSize, 0);
  m_stTacks->Wrap(-1);
  fgSizer91->Add(m_stTacks, 0, wxALL | wxEXPAND, 5);

  // Jibes
  m_staticText127 = new wxStaticText(this, wxID_ANY, _("Jibes"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText127->Wrap(-1);
  fgSizer91->Add(m_staticText127, 0, wxALL, 5);

  m_stJibes = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                               wxDefaultSize, 0);
  m_stJibes->Wrap(-1);
  fgSizer91->Add(m_stJibes, 0, wxALL | wxEXPAND, 5);

  // Sail Plan Changes
  m_staticText129 = new wxStaticText(this, wxID_ANY, _("Sail Plan Changes"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText129->Wrap(-1);
  fgSizer91->Add(m_staticText129, 0, wxALL, 5);

  m_stSailPlanChanges = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                         wxDefaultPosition, wxDefaultSize, 0);
  m_stSailPlanChanges->Wrap(-1);
  fgSizer91->Add(m_stSailPlanChanges, 0, wxALL | wxEXPAND, 5);
  //

  m_staticText122 = new wxStaticText(this, wxID_ANY, _("Weather Data"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText122->Wrap(-1);
  fgSizer91->Add(m_staticText122, 0, wxALL, 5);

  m_stWeatherData = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_stWeatherData->Wrap(-1);
  fgSizer91->Add(m_stWeatherData, 0, wxALL | wxEXPAND, 5);

  fgSizer90->Add(fgSizer91, 1, wxALL | wxEXPAND, 5);

  m_sdbSizer5 = new wxStdDialogButtonSizer();
  m_sdbSizer5OK = new wxButton(this, wxID_OK);
  m_sdbSizer5->AddButton(m_sdbSizer5OK);
  m_sdbSizer5->Realize();

  fgSizer90->Add(m_sdbSizer5, 1, wxEXPAND | wxALL, 5);

  this->SetSizer(fgSizer90);
  this->Layout();
  fgSizer90->Fit(this);

  this->Centre(wxBOTH);
}

CursorPositionDialog::~CursorPositionDialog() {}

RoutePositionDialog::RoutePositionDialog(wxWindow* parent, wxWindowID id,
                                         const wxString& title,
                                         const wxPoint& pos, const wxSize& size,
                                         long style)
    : wxDialog(parent, id, title, pos, size, style) {
  wxFlexGridSizer* fgSizer90;
  fgSizer90 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer90->SetFlexibleDirection(wxBOTH);
  fgSizer90->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer91;
  fgSizer91 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer91->AddGrowableCol(1);
  fgSizer91->SetFlexibleDirection(wxBOTH);
  fgSizer91->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText134 = new wxStaticText(this, wxID_ANY, _("Time"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText134->Wrap(-1);
  fgSizer91->Add(m_staticText134, 0, wxALL, 5);

  m_stTime = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                              wxDefaultSize, 0);
  m_stTime->Wrap(-1);
  fgSizer91->Add(m_stTime, 0, wxALL | wxEXPAND, 5);

  m_staticDuration = new wxStaticText(this, wxID_ANY, _("Duration"),
                                      wxDefaultPosition, wxDefaultSize, 0);
  m_staticDuration->Wrap(-1);
  fgSizer91->Add(m_staticDuration, 0, wxALL, 5);

  m_stDuration = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                  wxDefaultPosition, wxDefaultSize, 0);
  m_stDuration->Wrap(-1);
  fgSizer91->Add(m_stDuration, 0, wxALL | wxEXPAND, 5);

  m_staticText128 = new wxStaticText(this, wxID_ANY, _("Position"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText128->Wrap(-1);
  fgSizer91->Add(m_staticText128, 0, wxALL, 5);

  m_stPosition = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                  wxDefaultPosition, wxDefaultSize, 0);
  fgSizer91->Add(m_stPosition, 0, wxALL | wxEXPAND, 5);

  m_staticText128161 = new wxStaticText(this, wxID_ANY, _("Course"),
                                        wxDefaultPosition, wxDefaultSize, 0);
  m_staticText128161->Wrap(-1);
  fgSizer91->Add(m_staticText128161, 0, wxALL, 5);

  m_stBoatCourse = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                    wxDefaultPosition, wxSize(150, -1), 0);
  m_stBoatCourse->Wrap(150);
  fgSizer91->Add(m_stBoatCourse, 0, wxALL, 5);

  m_staticText12816 = new wxStaticText(this, wxID_ANY, _("Boat Speed"),
                                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText12816->Wrap(-1);
  fgSizer91->Add(m_staticText12816, 0, wxALL, 5);

  m_stBoatSpeed = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                   wxDefaultPosition, wxSize(150, -1), 0);
  m_stBoatSpeed->Wrap(150);
  fgSizer91->Add(m_stBoatSpeed, 0, wxALL, 5);

  m_staticText1281 =
      new wxStaticText(this, wxID_ANY, _("True Wind Speed (TWS)"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1281->Wrap(-1);
  fgSizer91->Add(m_staticText1281, 0, wxALL, 5);

  m_stTWS = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                             wxSize(120, -1), 0);
  m_stTWS->Wrap(120);
  fgSizer91->Add(m_stTWS, 0, wxALL, 5);

  m_staticText12812 =
      new wxStaticText(this, wxID_ANY, _("Apparent Wind Speed (AWS)"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText12812->Wrap(-1);
  fgSizer91->Add(m_staticText12812, 0, wxALL, 5);

  m_stAWS = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                             wxSize(120, -1), 0);
  m_stAWS->Wrap(120);
  fgSizer91->Add(m_stAWS, 0, wxALL, 5);

  m_staticText12811 =
      new wxStaticText(this, wxID_ANY, _("True Wind Angle (TWA)"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText12811->Wrap(-1);
  fgSizer91->Add(m_staticText12811, 0, wxALL, 5);

  m_stTWA = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                             wxSize(120, -1), 0);
  m_stTWA->Wrap(120);
  fgSizer91->Add(m_stTWA, 0, wxALL, 5);

  m_staticText12813 =
      new wxStaticText(this, wxID_ANY, _("Apparent Wind Angle (AWA)"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText12813->Wrap(-1);
  fgSizer91->Add(m_staticText12813, 0, wxALL, 5);

  m_stAWA = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                             wxSize(120, -1), 0);
  m_stAWA->Wrap(120);
  fgSizer91->Add(m_stAWA, 0, wxALL, 5);

  m_staticText12814 = new wxStaticText(this, wxID_ANY, _("Waves Height"),
                                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText12814->Wrap(-1);
  fgSizer91->Add(m_staticText12814, 0, wxALL, 5);

  m_stWaves = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                               wxSize(120, -1), 0);
  m_stWaves->Wrap(120);
  fgSizer91->Add(m_stWaves, 0, wxALL, 5);

  m_staticText12815 = new wxStaticText(this, wxID_ANY, _("Wind Gust"),
                                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText12815->Wrap(-1);
  fgSizer91->Add(m_staticText12815, 0, wxALL, 5);

  m_stWindGust = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                  wxDefaultPosition, wxSize(120, -1), 0);
  m_stWindGust->Wrap(120);
  fgSizer91->Add(m_stWindGust, 0, wxALL, 5);

  m_staticText124 = new wxStaticText(this, wxID_ANY, _("Polar"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText124->Wrap(-1);
  fgSizer91->Add(m_staticText124, 0, wxALL, 5);

  m_stPolar = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                               wxDefaultSize, 0);
  m_stPolar->Wrap(-1);
  fgSizer91->Add(m_stPolar, 0, wxALL | wxEXPAND, 5);

  m_staticText130 = new wxStaticText(this, wxID_ANY, _("Sail Changes"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText130->Wrap(-1);
  fgSizer91->Add(m_staticText130, 0, wxALL, 5);

  m_stSailChanges = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_stSailChanges->Wrap(-1);
  fgSizer91->Add(m_stSailChanges, 0, wxALL | wxEXPAND, 5);

  m_staticText126 = new wxStaticText(this, wxID_ANY, _("Tacks"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText126->Wrap(-1);
  fgSizer91->Add(m_staticText126, 0, wxALL, 5);

  m_stTacks = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                               wxDefaultSize, 0);
  m_stTacks->Wrap(-1);
  fgSizer91->Add(m_stTacks, 0, wxALL | wxEXPAND, 5);

  m_staticText127 = new wxStaticText(this, wxID_ANY, _("Jibes"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText127->Wrap(-1);
  fgSizer91->Add(m_staticText127, 0, wxALL, 5);

  m_stJibes = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                               wxDefaultSize, 0);
  m_stJibes->Wrap(-1);
  fgSizer91->Add(m_stJibes, 0, wxALL | wxEXPAND, 5);

  // Sail Plan Changes
  m_staticText129 = new wxStaticText(this, wxID_ANY, _("Sail Plan Changes"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText129->Wrap(-1);
  fgSizer91->Add(m_staticText129, 0, wxALL, 5);

  m_stSailPlanChanges = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                         wxDefaultPosition, wxDefaultSize, 0);
  m_stSailPlanChanges->Wrap(-1);
  fgSizer91->Add(m_stSailPlanChanges, 0, wxALL | wxEXPAND, 5);

  // Weather Data
  m_staticText122 = new wxStaticText(this, wxID_ANY, _("Weather Data"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText122->Wrap(-1);
  fgSizer91->Add(m_staticText122, 0, wxALL, 5);

  m_stWeatherData = new wxStaticText(this, wxID_ANY, wxEmptyString,
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_stWeatherData->Wrap(-1);
  fgSizer91->Add(m_stWeatherData, 0, wxALL | wxEXPAND, 5);

  fgSizer90->Add(fgSizer91, 1, wxEXPAND, 5);

  m_sdbSizer5 = new wxStdDialogButtonSizer();
  m_sdbSizer5OK = new wxButton(this, wxID_OK);
  m_sdbSizer5->AddButton(m_sdbSizer5OK);
  m_sdbSizer5->Realize();

  fgSizer90->Add(m_sdbSizer5, 1, wxEXPAND | wxALL | wxALIGN_CENTER_VERTICAL, 5);

  this->SetSizer(fgSizer90);
  this->Layout();
  fgSizer90->Fit(this);

  this->Centre(wxBOTH);
}

RoutePositionDialog::~RoutePositionDialog() {}

NewPositionDialog::NewPositionDialog(wxWindow* parent, wxWindowID id,
                                     const wxString& title, const wxPoint& pos,
                                     const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxDefaultSize, wxDefaultSize);

  wxFlexGridSizer* fgSizer120;
  fgSizer120 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer120->SetFlexibleDirection(wxBOTH);
  fgSizer120->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer119;
  fgSizer119 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer119->AddGrowableCol(1);
  fgSizer119->SetFlexibleDirection(wxBOTH);
  fgSizer119->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText140 = new wxStaticText(this, wxID_ANY, _("name"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText140->Wrap(-1);
  fgSizer119->Add(m_staticText140, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_tName = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
                           wxDefaultSize, 0);
  fgSizer119->Add(m_tName, 0, wxALL | wxEXPAND, 5);

  fgSizer120->Add(fgSizer119, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer122;
  fgSizer122 = new wxFlexGridSizer(0, 5, 0, 0);
  fgSizer122->SetFlexibleDirection(wxBOTH);
  fgSizer122->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText142 = new wxStaticText(this, wxID_ANY, _("latitude"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText142->Wrap(-1);
  fgSizer122->Add(m_staticText142, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tLatitudeDegrees = new wxTextCtrl(this, wxID_ANY, wxEmptyString,
                                      wxDefaultPosition, wxDefaultSize, 0);
  fgSizer122->Add(m_tLatitudeDegrees, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText143 = new wxStaticText(this, wxID_ANY, _("degrees"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText143->Wrap(-1);
  fgSizer122->Add(m_staticText143, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tLatitudeMinutes = new wxTextCtrl(this, wxID_ANY, wxEmptyString,
                                      wxDefaultPosition, wxDefaultSize, 0);
  fgSizer122->Add(m_tLatitudeMinutes, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText144 = new wxStaticText(this, wxID_ANY, _("minutes"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText144->Wrap(-1);
  fgSizer122->Add(m_staticText144, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_staticText145 = new wxStaticText(this, wxID_ANY, _("longitude"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText145->Wrap(-1);
  fgSizer122->Add(m_staticText145, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tLongitudeDegrees = new wxTextCtrl(this, wxID_ANY, wxEmptyString,
                                       wxDefaultPosition, wxDefaultSize, 0);
  fgSizer122->Add(m_tLongitudeDegrees, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText146 = new wxStaticText(this, wxID_ANY, _("degrees"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText146->Wrap(-1);
  fgSizer122->Add(m_staticText146, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tLongitudeMinutes = new wxTextCtrl(this, wxID_ANY, wxEmptyString,
                                       wxDefaultPosition, wxDefaultSize, 0);
  fgSizer122->Add(m_tLongitudeMinutes, 1,
                  wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText147 = new wxStaticText(this, wxID_ANY, _("minutes"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText147->Wrap(-1);
  fgSizer122->Add(m_staticText147, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  fgSizer120->Add(fgSizer122, 1, wxEXPAND, 5);

  m_sdbSizer4 = new wxStdDialogButtonSizer();
  m_sdbSizer4OK = new wxButton(this, wxID_OK);
  m_sdbSizer4->AddButton(m_sdbSizer4OK);
  m_sdbSizer4Cancel = new wxButton(this, wxID_CANCEL);
  m_sdbSizer4->AddButton(m_sdbSizer4Cancel);
  m_sdbSizer4->Realize();

  fgSizer120->Add(m_sdbSizer4, 1, wxEXPAND | wxALL, 5);

  this->SetSizer(fgSizer120);
  this->Layout();
  fgSizer120->Fit(this);

  this->Centre(wxBOTH);
}

NewPositionDialog::~NewPositionDialog() {}

EditPolarDialogBase::EditPolarDialogBase(wxWindow* parent, wxWindowID id,
                                         const wxString& title,
                                         const wxPoint& pos, const wxSize& size,
                                         long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxDefaultSize, wxDefaultSize);

  wxFlexGridSizer* fgSizer96;
  fgSizer96 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer96->AddGrowableRow(0);
  fgSizer96->AddGrowableRow(1);
  fgSizer96->SetFlexibleDirection(wxBOTH);
  fgSizer96->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_notebook6 =
      new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
  m_panel19 = new wxPanel(m_notebook6, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer93;
  fgSizer93 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer93->AddGrowableCol(0);
  fgSizer93->AddGrowableRow(0);
  fgSizer93->SetFlexibleDirection(wxBOTH);
  fgSizer93->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_gPolar = new wxGrid(m_panel19, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                        wxHSCROLL | wxVSCROLL);

  // Grid
  m_gPolar->CreateGrid(5, 5);
  m_gPolar->EnableEditing(true);
  m_gPolar->EnableGridLines(true);
  m_gPolar->EnableDragGridSize(false);
  m_gPolar->SetMargins(0, 0);

  // Columns
  m_gPolar->EnableDragColMove(false);
  m_gPolar->EnableDragColSize(true);
  m_gPolar->SetColLabelSize(30);
  m_gPolar->SetColLabelAlignment(wxALIGN_CENTER, wxALIGN_CENTER);

  // Rows
  m_gPolar->EnableDragRowSize(true);
  m_gPolar->SetRowLabelSize(80);
  m_gPolar->SetRowLabelAlignment(wxALIGN_CENTER, wxALIGN_CENTER);

  // Label Appearance

  // Cell Defaults
  m_gPolar->SetDefaultCellAlignment(wxALIGN_LEFT, wxALIGN_TOP);
  m_gPolar->SetMaxSize(wxSize(-1, 400));

  fgSizer93->Add(m_gPolar, 0, wxALL | wxEXPAND, 5);

  m_staticText1351 = new wxStaticText(
      m_panel19, wxID_ANY,
      _("Leave any cell blank to automatically interpolate from nearby values. "
        " Use a value of 0.0 to specify invalid (cannot be used)\n View the "
        "polar plot in the boat dialog while editing the polar."),
      wxDefaultPosition, wxDefaultSize, 0);
  m_staticText1351->Wrap(-1);
  fgSizer93->Add(m_staticText1351, 0, wxALL, 5);

  m_panel19->SetSizer(fgSizer93);
  m_panel19->Layout();
  fgSizer93->Fit(m_panel19);
  m_notebook6->AddPage(m_panel19, _("Grid"), true);
  m_panel20 = new wxPanel(m_notebook6, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer98;
  fgSizer98 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer98->AddGrowableCol(0);
  fgSizer98->AddGrowableCol(1);
  fgSizer98->AddGrowableRow(0);
  fgSizer98->SetFlexibleDirection(wxBOTH);
  fgSizer98->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbSizer25;
  sbSizer25 = new wxStaticBoxSizer(
      new wxStaticBox(m_panel20, wxID_ANY, _("True Wind Angles")), wxVERTICAL);

  wxFlexGridSizer* fgSizer99;
  fgSizer99 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer99->AddGrowableCol(0);
  fgSizer99->AddGrowableRow(0);
  fgSizer99->SetFlexibleDirection(wxBOTH);
  fgSizer99->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer100;
  fgSizer100 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer100->AddGrowableCol(0);
  fgSizer100->AddGrowableRow(1);
  fgSizer100->SetFlexibleDirection(wxBOTH);
  fgSizer100->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_tTrueWindAngle =
      new wxTextCtrl(sbSizer25->GetStaticBox(), wxID_ANY, wxEmptyString,
                     wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER);
  fgSizer100->Add(m_tTrueWindAngle, 0, wxALL, 5);

  m_lTrueWindAngles =
      new wxListBox(sbSizer25->GetStaticBox(), wxID_ANY, wxDefaultPosition,
                    wxDefaultSize, 0, NULL, 0);
  fgSizer100->Add(m_lTrueWindAngles, 0, wxALL | wxEXPAND, 5);

  fgSizer99->Add(fgSizer100, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer101;
  fgSizer101 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer101->SetFlexibleDirection(wxBOTH);
  fgSizer101->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_bAddTrueWindAngle =
      new wxButton(sbSizer25->GetStaticBox(), wxID_ANY, _("Add"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer101->Add(m_bAddTrueWindAngle, 0, wxALL, 5);

  m_bRemoveTrueWindAngle =
      new wxButton(sbSizer25->GetStaticBox(), wxID_ANY, _("Remove"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer101->Add(m_bRemoveTrueWindAngle, 0, wxALL, 5);

  fgSizer99->Add(fgSizer101, 1, wxEXPAND | wxRIGHT, 5);

  sbSizer25->Add(fgSizer99, 1, wxEXPAND | wxALL, 5);

  fgSizer98->Add(sbSizer25, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbSizer26;
  sbSizer26 = new wxStaticBoxSizer(
      new wxStaticBox(m_panel20, wxID_ANY, _("True WInd Speeds")), wxVERTICAL);

  wxFlexGridSizer* fgSizer991;
  fgSizer991 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer991->AddGrowableCol(0);
  fgSizer991->AddGrowableRow(0);
  fgSizer991->SetFlexibleDirection(wxBOTH);
  fgSizer991->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer1001;
  fgSizer1001 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer1001->AddGrowableCol(0);
  fgSizer1001->AddGrowableRow(1);
  fgSizer1001->SetFlexibleDirection(wxBOTH);
  fgSizer1001->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_tTrueWindSpeed =
      new wxTextCtrl(sbSizer26->GetStaticBox(), wxID_ANY, wxEmptyString,
                     wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER);
  fgSizer1001->Add(m_tTrueWindSpeed, 0, wxALL, 5);

  m_lTrueWindSpeeds =
      new wxListBox(sbSizer26->GetStaticBox(), wxID_ANY, wxDefaultPosition,
                    wxDefaultSize, 0, NULL, 0);
  fgSizer1001->Add(m_lTrueWindSpeeds, 0, wxALL | wxEXPAND, 5);

  fgSizer991->Add(fgSizer1001, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer1011;
  fgSizer1011 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer1011->SetFlexibleDirection(wxBOTH);
  fgSizer1011->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_bAddTrueWindSpeed =
      new wxButton(sbSizer26->GetStaticBox(), wxID_ANY, _("Add"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer1011->Add(m_bAddTrueWindSpeed, 0, wxALL, 5);

  m_bRemoveTrueWindSpeed =
      new wxButton(sbSizer26->GetStaticBox(), wxID_ANY, _("Remove"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer1011->Add(m_bRemoveTrueWindSpeed, 0, wxALL, 5);

  fgSizer991->Add(fgSizer1011, 1, wxEXPAND | wxRIGHT, 5);

  sbSizer26->Add(fgSizer991, 1, wxEXPAND | wxALL, 5);

  fgSizer98->Add(sbSizer26, 1, wxEXPAND | wxALL, 5);

  m_panel20->SetSizer(fgSizer98);
  m_panel20->Layout();
  fgSizer98->Fit(m_panel20);
  m_notebook6->AddPage(m_panel20, _("Dimensions"), false);
  m_panel21 = new wxPanel(m_notebook6, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer102;
  fgSizer102 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer102->AddGrowableCol(0);
  fgSizer102->AddGrowableRow(0);
  fgSizer102->SetFlexibleDirection(wxBOTH);
  fgSizer102->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_notebook61 =
      new wxNotebook(m_panel21, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
  m_panel22 = new wxPanel(m_notebook61, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer1091;
  fgSizer1091 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer1091->SetFlexibleDirection(wxBOTH);
  fgSizer1091->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxStaticBoxSizer* sbSizer27;
  sbSizer27 = new wxStaticBoxSizer(
      new wxStaticBox(m_panel22, wxID_ANY, _("New Measurement")), wxVERTICAL);

  wxFlexGridSizer* fgSizer104;
  fgSizer104 = new wxFlexGridSizer(0, 4, 0, 0);
  fgSizer104->SetFlexibleDirection(wxBOTH);
  fgSizer104->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_rbApparentWind =
      new wxRadioButton(sbSizer27->GetStaticBox(), wxID_ANY, _("Apparent Wind"),
                        wxDefaultPosition, wxDefaultSize, 0);
  fgSizer104->Add(m_rbApparentWind, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_rbTrueWind =
      new wxRadioButton(sbSizer27->GetStaticBox(), wxID_ANY, _("True Wind"),
                        wxDefaultPosition, wxDefaultSize, 0);
  fgSizer104->Add(m_rbTrueWind, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  fgSizer104->Add(0, 0, 1, wxEXPAND, 5);

  fgSizer104->Add(0, 0, 1, wxEXPAND, 5);

  m_staticText133 =
      new wxStaticText(sbSizer27->GetStaticBox(), wxID_ANY, _("Wind Speed"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText133->Wrap(-1);
  fgSizer104->Add(m_staticText133, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tWindSpeed =
      new wxTextCtrl(sbSizer27->GetStaticBox(), wxID_ANY, wxEmptyString,
                     wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER);
  fgSizer104->Add(m_tWindSpeed, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText134 =
      new wxStaticText(sbSizer27->GetStaticBox(), wxID_ANY, _("Wind Direction"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText134->Wrap(-1);
  fgSizer104->Add(m_staticText134, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tWindDirection =
      new wxTextCtrl(sbSizer27->GetStaticBox(), wxID_ANY, wxEmptyString,
                     wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER);
  fgSizer104->Add(m_tWindDirection, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  m_staticText135 =
      new wxStaticText(sbSizer27->GetStaticBox(), wxID_ANY, _("Boat Spead"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText135->Wrap(-1);
  fgSizer104->Add(m_staticText135, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

  m_tBoatSpeed =
      new wxTextCtrl(sbSizer27->GetStaticBox(), wxID_ANY, wxEmptyString,
                     wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER);
  fgSizer104->Add(m_tBoatSpeed, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  wxFlexGridSizer* fgSizer103;
  fgSizer103 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer103->SetFlexibleDirection(wxBOTH);
  fgSizer103->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_button46 = new wxButton(sbSizer27->GetStaticBox(), wxID_ANY, _("Add"),
                            wxDefaultPosition, wxDefaultSize, 0);
  fgSizer103->Add(m_button46, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  fgSizer104->Add(fgSizer103, 1, wxEXPAND, 5);

  sbSizer27->Add(fgSizer104, 1, wxEXPAND, 5);

  fgSizer1091->Add(sbSizer27, 1, wxEXPAND | wxALL, 5);

  wxStaticBoxSizer* sbSizer28;
  sbSizer28 = new wxStaticBoxSizer(
      new wxStaticBox(m_panel22, wxID_ANY, _("Measurements")), wxVERTICAL);

  wxFlexGridSizer* fgSizer107;
  fgSizer107 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer107->AddGrowableCol(0);
  fgSizer107->AddGrowableRow(0);
  fgSizer107->SetFlexibleDirection(wxBOTH);
  fgSizer107->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_lMeasurements = new wxListCtrl(
      sbSizer28->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize(-1, -1),
      wxLC_REPORT | wxLC_SINGLE_SEL | wxHSCROLL | wxVSCROLL);
  fgSizer107->Add(m_lMeasurements, 0, wxALL | wxEXPAND, 5);

  wxFlexGridSizer* fgSizer106;
  fgSizer106 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer106->SetFlexibleDirection(wxBOTH);
  fgSizer106->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_bRemoveMeasurement =
      new wxButton(sbSizer28->GetStaticBox(), wxID_ANY, _("Remove"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer106->Add(m_bRemoveMeasurement, 0, wxALL | wxEXPAND, 5);

  m_bRemoveAllMeasurements =
      new wxButton(sbSizer28->GetStaticBox(), wxID_ANY, _("Remove All"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer106->Add(m_bRemoveAllMeasurements, 0, wxALL | wxEXPAND, 5);

  m_button48 =
      new wxButton(sbSizer28->GetStaticBox(), wxID_ANY, _("Import NMEA Log"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer106->Add(m_button48, 0, wxALL | wxEXPAND, 5);

  m_button50 =
      new wxButton(sbSizer28->GetStaticBox(), wxID_ANY, _("Generate Polar"),
                   wxDefaultPosition, wxDefaultSize, 0);
  fgSizer106->Add(m_button50, 0, wxALL | wxEXPAND, 5);

  fgSizer107->Add(fgSizer106, 1, wxEXPAND | wxALL, 5);

  sbSizer28->Add(fgSizer107, 1, wxEXPAND, 5);

  fgSizer1091->Add(sbSizer28, 1, wxEXPAND | wxALL, 5);

  m_panel22->SetSizer(fgSizer1091);
  m_panel22->Layout();
  fgSizer1091->Fit(m_panel22);
  m_notebook61->AddPage(m_panel22, _("Measurements"), true);
  m_panel23 = new wxPanel(m_notebook61, wxID_ANY, wxDefaultPosition,
                          wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer113;
  fgSizer113 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer113->SetFlexibleDirection(wxBOTH);
  fgSizer113->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_panel17 = new wxPanel(m_panel23, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                          wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer1022;
  fgSizer1022 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer1022->SetFlexibleDirection(wxBOTH);
  fgSizer1022->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText139 =
      new wxStaticText(m_panel17, wxID_ANY,
                       _("Warning:  All of the below are currently not used"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText139->Wrap(-1);
  fgSizer1022->Add(m_staticText139, 0, wxALL, 5);

  fgSizer1022->Add(0, 0, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer52;
  fgSizer52 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer52->SetFlexibleDirection(wxBOTH);
  fgSizer52->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer1031;
  fgSizer1031 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer1031->SetFlexibleDirection(wxBOTH);
  fgSizer1031->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  wxFlexGridSizer* fgSizer1041;
  fgSizer1041 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer1041->AddGrowableCol(0);
  fgSizer1041->SetFlexibleDirection(wxBOTH);
  fgSizer1041->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText100 = new wxStaticText(m_panel17, wxID_ANY, _("Hull Type"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText100->Wrap(-1);
  fgSizer1041->Add(m_staticText100, 0, wxALL, 5);

  wxString m_cHullTypeChoices[] = {_("Mono"), _("Catamaran"), _("Trimaran"),
                                   _("Proa"), _("Submarine")};
  int m_cHullTypeNChoices = sizeof(m_cHullTypeChoices) / sizeof(wxString);
  m_cHullType =
      new wxChoice(m_panel17, wxID_ANY, wxDefaultPosition, wxSize(-1, -1),
                   m_cHullTypeNChoices, m_cHullTypeChoices, 0);
  m_cHullType->SetSelection(0);
  fgSizer1041->Add(m_cHullType, 0, wxALL, 5);

  fgSizer1031->Add(fgSizer1041, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer58;
  fgSizer58 = new wxFlexGridSizer(0, 3, 0, 0);
  fgSizer58->SetFlexibleDirection(wxBOTH);
  fgSizer58->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText58 = new wxStaticText(m_panel17, wxID_ANY, _("Displacement"),
                                    wxDefaultPosition, wxDefaultSize, 0);
  m_staticText58->Wrap(-1);
  fgSizer58->Add(m_staticText58, 0, wxALL, 5);

  m_sDisplacement =
      new wxSpinCtrl(m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition,
                     wxSize(140, -1), wxSP_ARROW_KEYS, 0, 100000, 4);
  fgSizer58->Add(m_sDisplacement, 0, wxALL, 5);

  m_staticText121 = new wxStaticText(m_panel17, wxID_ANY, _("tons"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText121->Wrap(-1);
  fgSizer58->Add(m_staticText121, 0, wxALL, 5);

  m_staticText128 = new wxStaticText(m_panel17, wxID_ANY, _("Sail Area"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText128->Wrap(-1);
  fgSizer58->Add(m_staticText128, 0, wxALL, 5);

  m_sSailArea =
      new wxSpinCtrl(m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition,
                     wxSize(140, -1), wxSP_ARROW_KEYS, 0, 10000, 400);
  fgSizer58->Add(m_sSailArea, 0, wxALL, 5);

  m_staticText129 = new wxStaticText(m_panel17, wxID_ANY, _("sq/ft"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText129->Wrap(-1);
  fgSizer58->Add(m_staticText129, 0, wxALL, 5);

  m_staticText57 =
      new wxStaticText(m_panel17, wxID_ANY, _("Len Water Line (lwl)"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText57->Wrap(-1);
  fgSizer58->Add(m_staticText57, 0, wxALL, 5);

  m_sLWL = new wxSpinCtrl(m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition,
                          wxSize(140, -1), wxSP_ARROW_KEYS, 0, 1000, 24);
  fgSizer58->Add(m_sLWL, 0, wxALL, 5);

  m_staticText122 = new wxStaticText(m_panel17, wxID_ANY, _("ft"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText122->Wrap(-1);
  fgSizer58->Add(m_staticText122, 0, wxALL, 5);

  m_staticText109 =
      new wxStaticText(m_panel17, wxID_ANY, _("Length Over All (loa)"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText109->Wrap(-1);
  fgSizer58->Add(m_staticText109, 0, wxALL, 5);

  m_sLOA = new wxSpinCtrl(m_panel17, wxID_ANY, wxT("27"), wxDefaultPosition,
                          wxSize(140, -1), wxSP_ARROW_KEYS, 0, 1000, 0);
  fgSizer58->Add(m_sLOA, 0, wxALL, 5);

  m_staticText127 = new wxStaticText(m_panel17, wxID_ANY, _("ft"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText127->Wrap(-1);
  fgSizer58->Add(m_staticText127, 0, wxALL, 5);

  m_staticText113 = new wxStaticText(m_panel17, wxID_ANY, _("Beam"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText113->Wrap(-1);
  fgSizer58->Add(m_staticText113, 0, wxALL, 5);

  m_sBeam =
      new wxSpinCtrl(m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition,
                     wxSize(140, -1), wxSP_ARROW_KEYS, 0, 100, 8);
  fgSizer58->Add(m_sBeam, 0, wxALL, 5);

  m_staticText126 = new wxStaticText(m_panel17, wxID_ANY, _("ft"),
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_staticText126->Wrap(-1);
  fgSizer58->Add(m_staticText126, 0, wxALL, 5);

  fgSizer1031->Add(fgSizer58, 1, wxEXPAND, 5);

  fgSizer52->Add(fgSizer1031, 1, wxEXPAND, 5);

  wxFlexGridSizer* fgSizer43;
  fgSizer43 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer43->SetFlexibleDirection(wxBOTH);
  fgSizer43->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_staticText119 =
      new wxStaticText(m_panel17, wxID_ANY, _("Sail Area Displacement Ratio"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText119->Wrap(-1);
  fgSizer43->Add(m_staticText119, 0, wxALL, 5);

  m_stSailAreaDisplacementRatio = new wxStaticText(
      m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
  m_stSailAreaDisplacementRatio->Wrap(-1);
  fgSizer43->Add(m_stSailAreaDisplacementRatio, 0, wxALL, 5);

  m_staticText105 =
      new wxStaticText(m_panel17, wxID_ANY, _("Displacement Length Ratio"),
                       wxDefaultPosition, wxDefaultSize, 0);
  m_staticText105->Wrap(-1);
  fgSizer43->Add(m_staticText105, 0, wxALL, 5);

  m_stDisplacementLengthRatio = new wxStaticText(
      m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
  m_stDisplacementLengthRatio->Wrap(-1);
  fgSizer43->Add(m_stDisplacementLengthRatio, 0, wxALL, 5);

  m_staticText92 = new wxStaticText(m_panel17, wxID_ANY, _("Hull Speed"),
                                    wxDefaultPosition, wxDefaultSize, 0);
  m_staticText92->Wrap(-1);
  fgSizer43->Add(m_staticText92, 0, wxALL, 5);

  m_stHullSpeed = new wxStaticText(m_panel17, wxID_ANY, wxEmptyString,
                                   wxDefaultPosition, wxDefaultSize, 0);
  m_stHullSpeed->Wrap(-1);
  fgSizer43->Add(m_stHullSpeed, 0, wxALL, 5);

  m_staticText94 = new wxStaticText(m_panel17, wxID_ANY, _("Capsize Risk"),
                                    wxDefaultPosition, wxDefaultSize, 0);
  m_staticText94->Wrap(-1);
  fgSizer43->Add(m_staticText94, 0, wxALL, 5);

  m_stCapsizeRisk = new wxStaticText(m_panel17, wxID_ANY, wxEmptyString,
                                     wxDefaultPosition, wxDefaultSize, 0);
  m_stCapsizeRisk->Wrap(-1);
  fgSizer43->Add(m_stCapsizeRisk, 0, wxALL, 5);

  m_staticText96 = new wxStaticText(m_panel17, wxID_ANY, _("Comfort Factor"),
                                    wxDefaultPosition, wxDefaultSize, 0);
  m_staticText96->Wrap(-1);
  fgSizer43->Add(m_staticText96, 0, wxALL, 5);

  m_stComfortFactor = new wxStaticText(m_panel17, wxID_ANY, wxEmptyString,
                                       wxDefaultPosition, wxDefaultSize, 0);
  m_stComfortFactor->Wrap(-1);
  fgSizer43->Add(m_stComfortFactor, 0, wxALL, 5);

  fgSizer52->Add(fgSizer43, 1, wxEXPAND, 5);

  fgSizer1022->Add(fgSizer52, 1, wxEXPAND, 5);

  m_panel17->SetSizer(fgSizer1022);
  m_panel17->Layout();
  fgSizer1022->Fit(m_panel17);
  fgSizer113->Add(m_panel17, 1, wxEXPAND | wxALL, 5);

  m_panel221 = new wxPanel(m_panel23, wxID_ANY, wxDefaultPosition,
                           wxDefaultSize, wxTAB_TRAVERSAL);
  wxFlexGridSizer* fgSizer109;
  fgSizer109 = new wxFlexGridSizer(0, 2, 0, 0);
  fgSizer109->AddGrowableCol(0);
  fgSizer109->AddGrowableRow(0);
  fgSizer109->SetFlexibleDirection(wxBOTH);
  fgSizer109->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_grid1 =
      new wxGrid(m_panel221, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);

  // Grid
  m_grid1->CreateGrid(5, 5);
  m_grid1->EnableEditing(true);
  m_grid1->EnableGridLines(true);
  m_grid1->EnableDragGridSize(false);
  m_grid1->SetMargins(0, 0);

  // Columns
  m_grid1->EnableDragColMove(false);
  m_grid1->EnableDragColSize(true);
  m_grid1->SetColLabelSize(30);
  m_grid1->SetColLabelAlignment(wxALIGN_CENTER, wxALIGN_CENTER);

  // Rows
  m_grid1->EnableDragRowSize(true);
  m_grid1->SetRowLabelSize(80);
  m_grid1->SetRowLabelAlignment(wxALIGN_CENTER, wxALIGN_CENTER);

  // Label Appearance

  // Cell Defaults
  m_grid1->SetDefaultCellAlignment(wxALIGN_LEFT, wxALIGN_TOP);
  fgSizer109->Add(m_grid1, 0, wxALL, 5);

  wxFlexGridSizer* fgSizer1131;
  fgSizer1131 = new wxFlexGridSizer(0, 1, 0, 0);
  fgSizer1131->SetFlexibleDirection(wxBOTH);
  fgSizer1131->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

  m_button42 = new wxButton(m_panel221, wxID_ANY, _("Add Row"),
                            wxDefaultPosition, wxDefaultSize, 0);
  fgSizer1131->Add(m_button42, 0, wxALL | wxEXPAND, 5);

  m_button43 = new wxButton(m_panel221, wxID_ANY, _("Remove Row"),
                            wxDefaultPosition, wxDefaultSize, 0);
  fgSizer1131->Add(m_button43, 0, wxALL | wxEXPAND, 5);

  m_button44 = new wxButton(m_panel221, wxID_ANY, _("Add Col"),
                            wxDefaultPosition, wxDefaultSize, 0);
  fgSizer1131->Add(m_button44, 0, wxALL | wxEXPAND, 5);

  m_button45 = new wxButton(m_panel221, wxID_ANY, _("Remove Col"),
                            wxDefaultPosition, wxDefaultSize, 0);
  fgSizer1131->Add(m_button45, 0, wxALL | wxEXPAND, 5);

  m_button461 = new wxButton(m_panel221, wxID_ANY, _("MyButton"),
                             wxDefaultPosition, wxDefaultSize, 0);
  fgSizer1131->Add(m_button461, 0, wxALL | wxEXPAND, 5);

  fgSizer109->Add(fgSizer1131, 1, wxEXPAND, 5);

  m_panel221->SetSizer(fgSizer109);
  m_panel221->Layout();
  fgSizer109->Fit(m_panel221);
  fgSizer113->Add(m_panel221, 1, wxEXPAND | wxALL, 5);

  m_panel23->SetSizer(fgSizer113);
  m_panel23->Layout();
  fgSizer113->Fit(m_panel23);
  m_notebook61->AddPage(m_panel23, _("Boat Characteristics"), false);

  fgSizer102->Add(m_notebook61, 1, wxEXPAND | wxALL, 5);

  m_panel21->SetSizer(fgSizer102);
  m_panel21->Layout();
  fgSizer102->Fit(m_panel21);
  m_notebook6->AddPage(m_panel21, _("Generate"), false);

  fgSizer96->Add(m_notebook6, 1, wxEXPAND | wxALL, 5);

  m_sdbSizer6 = new wxStdDialogButtonSizer();
  m_sdbSizer6Save = new wxButton(this, wxID_SAVE);
  m_sdbSizer6->AddButton(m_sdbSizer6Save);
  m_sdbSizer6Cancel = new wxButton(this, wxID_CANCEL);
  m_sdbSizer6->AddButton(m_sdbSizer6Cancel);
  m_sdbSizer6->Realize();
  m_sdbSizer6->SetMinSize(wxSize(-1, 40));

  fgSizer96->Add(m_sdbSizer6, 1, wxEXPAND | wxALL, 5);

  this->SetSizer(fgSizer96);
  this->Layout();
  fgSizer96->Fit(this);

  this->Centre(wxBOTH);

  // Connect Events
  m_gPolar->Connect(wxEVT_GRID_CELL_CHANGED,
                    wxGridEventHandler(EditPolarDialogBase::OnPolarGridChanged),
                    NULL, this);
  m_tTrueWindAngle->Connect(wxEVT_COMMAND_TEXT_ENTER,
                            wxCommandEventHandler(EditPolarDialogBase::d), NULL,
                            this);
  m_bAddTrueWindAngle->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnAddTrueWindAngle), NULL,
      this);
  m_bRemoveTrueWindAngle->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnRemoveTrueWindAngle), NULL,
      this);
  m_tTrueWindSpeed->Connect(
      wxEVT_COMMAND_TEXT_ENTER,
      wxCommandEventHandler(EditPolarDialogBase::OnAddTrueWindSpeed), NULL,
      this);
  m_bAddTrueWindSpeed->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnAddTrueWindSpeed), NULL,
      this);
  m_bRemoveTrueWindSpeed->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnRemoveTrueWindSpeed), NULL,
      this);
  m_tBoatSpeed->Connect(
      wxEVT_COMMAND_TEXT_ENTER,
      wxCommandEventHandler(EditPolarDialogBase::OnAddMeasurement), NULL, this);
  m_button46->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnAddMeasurement), NULL, this);
  m_bRemoveMeasurement->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnRemoveMeasurement), NULL,
      this);
  m_bRemoveAllMeasurements->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnRemoveAllMeasurements), NULL,
      this);
  m_button50->Connect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnGeneratePolar), NULL, this);
  m_cHullType->Connect(wxEVT_COMMAND_CHOICE_SELECTED,
                       wxCommandEventHandler(EditPolarDialogBase::OnRecompute),
                       NULL, this);
  m_sDisplacement->Connect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(EditPolarDialogBase::OnRecomputeSpin), NULL, this);
  m_sSailArea->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED,
                       wxSpinEventHandler(EditPolarDialogBase::OnRecomputeSpin),
                       NULL, this);
  m_sLWL->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED,
                  wxSpinEventHandler(EditPolarDialogBase::OnRecomputeSpin),
                  NULL, this);
  m_sLOA->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED,
                  wxSpinEventHandler(EditPolarDialogBase::OnRecomputeSpin),
                  NULL, this);
  m_sBeam->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED,
                   wxSpinEventHandler(EditPolarDialogBase::OnRecomputeSpin),
                   NULL, this);
  m_sdbSizer6Save->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                           wxCommandEventHandler(EditPolarDialogBase::OnSave),
                           NULL, this);
}

EditPolarDialogBase::~EditPolarDialogBase() {
  // Disconnect Events
  m_gPolar->Disconnect(
      wxEVT_GRID_CELL_CHANGED,
      wxGridEventHandler(EditPolarDialogBase::OnPolarGridChanged), NULL, this);
  m_tTrueWindAngle->Disconnect(wxEVT_COMMAND_TEXT_ENTER,
                               wxCommandEventHandler(EditPolarDialogBase::d),
                               NULL, this);
  m_bAddTrueWindAngle->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnAddTrueWindAngle), NULL,
      this);
  m_bRemoveTrueWindAngle->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnRemoveTrueWindAngle), NULL,
      this);
  m_tTrueWindSpeed->Disconnect(
      wxEVT_COMMAND_TEXT_ENTER,
      wxCommandEventHandler(EditPolarDialogBase::OnAddTrueWindSpeed), NULL,
      this);
  m_bAddTrueWindSpeed->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnAddTrueWindSpeed), NULL,
      this);
  m_bRemoveTrueWindSpeed->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnRemoveTrueWindSpeed), NULL,
      this);
  m_tBoatSpeed->Disconnect(
      wxEVT_COMMAND_TEXT_ENTER,
      wxCommandEventHandler(EditPolarDialogBase::OnAddMeasurement), NULL, this);
  m_button46->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnAddMeasurement), NULL, this);
  m_bRemoveMeasurement->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnRemoveMeasurement), NULL,
      this);
  m_bRemoveAllMeasurements->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnRemoveAllMeasurements), NULL,
      this);
  m_button50->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnGeneratePolar), NULL, this);
  m_cHullType->Disconnect(
      wxEVT_COMMAND_CHOICE_SELECTED,
      wxCommandEventHandler(EditPolarDialogBase::OnRecompute), NULL, this);
  m_sDisplacement->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(EditPolarDialogBase::OnRecomputeSpin), NULL, this);
  m_sSailArea->Disconnect(
      wxEVT_COMMAND_SPINCTRL_UPDATED,
      wxSpinEventHandler(EditPolarDialogBase::OnRecomputeSpin), NULL, this);
  m_sLWL->Disconnect(wxEVT_COMMAND_SPINCTRL_UPDATED,
                     wxSpinEventHandler(EditPolarDialogBase::OnRecomputeSpin),
                     NULL, this);
  m_sLOA->Disconnect(wxEVT_COMMAND_SPINCTRL_UPDATED,
                     wxSpinEventHandler(EditPolarDialogBase::OnRecomputeSpin),
                     NULL, this);
  m_sBeam->Disconnect(wxEVT_COMMAND_SPINCTRL_UPDATED,
                      wxSpinEventHandler(EditPolarDialogBase::OnRecomputeSpin),
                      NULL, this);
  m_sdbSizer6Save->Disconnect(
      wxEVT_COMMAND_BUTTON_CLICKED,
      wxCommandEventHandler(EditPolarDialogBase::OnSave), NULL, this);
}

RoutingTablePanelBase::RoutingTablePanelBase(wxWindow* parent, wxWindowID id,
                                             const wxString& title,
                                             const wxPoint& pos,
                                             const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
  this->SetSizeHints(wxSize(600, 400), wxDefaultSize);

  wxBoxSizer* bMainSizer = new wxBoxSizer(wxVERTICAL);

  // Create the grid without initializing it - we'll do that in the derived
  // class
  m_gridWeatherTable =
      new wxGrid(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);

  // Don't call CreateGrid here - we'll do it in the derived class

  // Configure grid properties
  m_gridWeatherTable->EnableEditing(false);
  m_gridWeatherTable->EnableGridLines(true);
  m_gridWeatherTable->EnableDragGridSize(false);
  m_gridWeatherTable->SetMargins(0, 0);

  // Columns
  m_gridWeatherTable->EnableDragColMove(false);
  m_gridWeatherTable->EnableDragColSize(true);
  m_gridWeatherTable->SetColLabelAlignment(wxALIGN_CENTER, wxALIGN_CENTER);

  // Rows
  m_gridWeatherTable->EnableDragRowSize(true);
  m_gridWeatherTable->SetRowLabelAlignment(wxALIGN_CENTER, wxALIGN_CENTER);

  // Cell Defaults
  m_gridWeatherTable->SetDefaultCellAlignment(wxALIGN_RIGHT, wxALIGN_CENTER);
  m_gridWeatherTable->SetMinSize(wxSize(600, 350));

  bMainSizer->Add(m_gridWeatherTable, 1, wxALL | wxEXPAND, 5);

  wxBoxSizer* bButtonSizer = new wxBoxSizer(wxHORIZONTAL);

  m_btnClose = new wxButton(this, wxID_ANY, _("Close"), wxDefaultPosition,
                            wxDefaultSize, 0);
  bButtonSizer->Add(m_btnClose, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

  bMainSizer->Add(bButtonSizer, 0, wxALIGN_RIGHT, 5);

  this->SetSizer(bMainSizer);
  this->Layout();
  bMainSizer->Fit(this);

  this->Centre(wxBOTH);

  // Connect Events
  m_btnClose->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                      wxCommandEventHandler(RoutingTablePanelBase::OnClose),
                      NULL, this);
}

RoutingTablePanelBase::~RoutingTablePanelBase() {
  // Disconnect Events
  m_btnClose->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                         wxCommandEventHandler(RoutingTablePanelBase::OnClose),
                         NULL, this);
}