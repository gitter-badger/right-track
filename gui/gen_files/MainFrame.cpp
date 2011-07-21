// -*- C++ -*- generated by wxGlade 0.6.3 on Thu Jul 21 18:45:28 2011

#include "MainFrame.h"

// begin wxGlade: ::extracode

// end wxGlade


MainFrame::MainFrame(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: MainFrame::MainFrame
    frame_1_menubar = new wxMenuBar();
    wxMenu* FileMenu = new wxMenu();
    FileMenu->Append(FileOpen_id, wxT("Load events"), wxEmptyString, wxITEM_NORMAL);
    FileMenu->Append(wxID_EXIT, wxT("Quit"), wxEmptyString, wxITEM_NORMAL);
    frame_1_menubar->Append(FileMenu, wxT("File"));
    wxMenu* ViewMenu = new wxMenu();
    ViewMenu->Append(wxID_ZOOM_IN, wxT("Zoom in"), wxEmptyString, wxITEM_NORMAL);
    ViewMenu->Append(wxID_ZOOM_OUT, wxT("Zoom out"), wxEmptyString, wxITEM_NORMAL);
    ViewMenu->Append(wxID_ZOOM_FIT, wxT("Zoom to fill window"), wxEmptyString, wxITEM_NORMAL);
    ViewMenu->Append(MenuRefresh_id, wxT("Refresh"), wxEmptyString, wxITEM_NORMAL);
    ViewMenu->Append(wxID_ANY, wxT("Event Data"), wxEmptyString, wxITEM_CHECK);
    ViewMenu->Append(CursorMenu_id, wxT("Cursor display"), wxEmptyString, wxITEM_CHECK);
    ViewMenu->Append(ResetCursor_id, wxT("Reset cursors"), wxEmptyString, wxITEM_NORMAL);
    frame_1_menubar->Append(ViewMenu, wxT("View"));
    wxMenu* ToolsMenu = new wxMenu();
    ToolsMenu->Append(ColorPicker_id, wxT("Color"), wxEmptyString, wxITEM_NORMAL);
    frame_1_menubar->Append(ToolsMenu, wxT("Tools"));
    wxMenu* HelpMenu = new wxMenu();
    HelpMenu->Append(wxID_ABOUT, wxT("About"), wxEmptyString, wxITEM_NORMAL);
    frame_1_menubar->Append(HelpMenu, wxT("Help"));
    SetMenuBar(frame_1_menubar);
    frame_1_toolbar = new wxToolBar(this, -1);
    SetToolBar(frame_1_toolbar);
    frame_1_toolbar->AddTool(wxID_ZOOM_IN, wxT("Zoom In"), wxBitmap(wxT("/disk2/projects/right-track/right_track/gui/resources/zoom_in.bmp"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, wxT("Zoom in"), wxEmptyString);
    frame_1_toolbar->AddTool(wxID_ZOOM_OUT, wxT("Zoom Out"), wxBitmap(wxT("/disk2/projects/right-track/right_track/gui/resources/zoom_out.bmp"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, wxT("Zoom out"), wxEmptyString);
    frame_1_toolbar->AddTool(wxID_ZOOM_FIT, wxT("Zoom Fit"), wxBitmap(wxT("/disk2/projects/right-track/right_track/gui/resources/Expand.bmp"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, wxT("Zoom to fit window"), wxEmptyString);
    frame_1_toolbar->AddSeparator();
    frame_1_toolbar->AddTool(wxID_UP, wxT("Move Up"), wxBitmap(wxT("/disk2/projects/right-track/right_track/gui/resources/up_arrow.bmp"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, wxT("Move event up"), wxEmptyString);
    frame_1_toolbar->AddTool(wxID_DOWN, wxT("Move Down"), wxBitmap(wxT("/disk2/projects/right-track/right_track/gui/resources/down_arrow.bmp"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, wxT("Move event down"), wxEmptyString);
    frame_1_toolbar->AddSeparator();
    frame_1_toolbar->AddTool(ResetCursor_id, wxT("Reset Cursors"), wxBitmap(wxT("/disk2/projects/right-track/right_track/gui/resources/Linux.bmp"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    frame_1_toolbar->AddTool(wxID_ANY, wxT("Party Time"), wxBitmap(wxT("/disk2/projects/right-track/right_track/gui/resources/144-martini.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    frame_1_toolbar->Realize();
    g_EventList = new wxTreeCtrl(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_HAS_BUTTONS|wxTR_NO_LINES|wxTR_DEFAULT_STYLE|wxSUNKEN_BORDER);
    g_EventFrame = new EventCanvas(this, wxID_ANY);
    g_StartTime = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    g_timeScale = new wxPanel(this, wxID_ANY);
    g_EndTime = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    g_TotalEventCount = new wxStaticText(this, wxID_ANY, wxT("Total events: 0"));
    static_line_1 = new wxStaticLine(this, wxID_ANY);
    g_EventInfo = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY|wxHSCROLL);
    g_info2 = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxHSCROLL);
    static_line_2 = new wxStaticLine(this, wxID_ANY);
    label_1 = new wxStaticText(this, wxID_ANY, wxT("Cursor 1"));
    g_Curs1Time = new wxTextCtrl(this, set_1_id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER);
    spin_button_1 = new wxSpinButton(this, spin_1_id, wxDefaultPosition, wxDefaultSize, wxSP_WRAP);
    label_2 = new wxStaticText(this, wxID_ANY, wxT("Cursor 2"));
    g_Curs2Time = new wxTextCtrl(this, set_2_id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER);
    spin_button_2 = new wxSpinButton(this, spin_2_id, wxDefaultPosition, wxDefaultSize, wxSP_WRAP);
    g_CursDtime = new wxStaticText(this, wxID_ANY, wxT("Delta time:"));
    static_line_2_copy = new wxStaticLine(this, wxID_ANY);
    panel_1 = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);

    set_properties();
    do_layout();
    // end wxGlade
}


BEGIN_EVENT_TABLE(MainFrame, wxFrame)
    // begin wxGlade: MainFrame::event_table
    EVT_MENU(FileOpen_id, MainFrame::FileOpenHandler)
    EVT_MENU(wxID_EXIT, MainFrame::QuitHandler)
    EVT_MENU(wxID_ZOOM_IN, MainFrame::ZoomInHandler)
    EVT_MENU(wxID_ZOOM_OUT, MainFrame::ZoomOutHandler)
    EVT_MENU(wxID_ZOOM_FIT, MainFrame::ZoomFillHandler)
    EVT_MENU(MenuRefresh_id, MainFrame::RefreshHandler)
    EVT_MENU(CursorMenu_id, MainFrame::CursorMenuHandler)
    EVT_MENU(ResetCursor_id, MainFrame::ResetCursorHandler)
    EVT_MENU(ColorPicker_id, MainFrame::ColorPickerHandler)
    EVT_MENU(wxID_ABOUT, MainFrame::AboutHandler)
    EVT_TOOL(wxID_UP, MainFrame::handle_move_up)
    EVT_TOOL(wxID_DOWN, MainFrame::handle_move_down)
    EVT_TEXT_ENTER(set_1_id, MainFrame::Curs1Set)
    EVT_SPIN_DOWN(spin_1_id, MainFrame::Curs1Down)
    EVT_SPIN_UP(spin_1_id, MainFrame::Curs1Up)
    EVT_TEXT_ENTER(set_2_id, MainFrame::Curs2Set)
    EVT_SPIN_DOWN(spin_2_id, MainFrame::Curs2Down)
    EVT_SPIN_UP(spin_2_id, MainFrame::Curs2Up)
    // end wxGlade
END_EVENT_TABLE();


void MainFrame::FileOpenHandler(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::FileOpenHandler) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::QuitHandler(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::QuitHandler) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::ZoomInHandler(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::ZoomInHandler) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::ZoomOutHandler(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::ZoomOutHandler) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::ZoomFillHandler(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::ZoomFillHandler) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::RefreshHandler(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::RefreshHandler) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::CursorMenuHandler(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::CursorMenuHandler) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::ResetCursorHandler(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::ResetCursorHandler) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::ColorPickerHandler(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::ColorPickerHandler) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::AboutHandler(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::AboutHandler) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::handle_move_up(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::handle_move_up) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::handle_move_down(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::handle_move_down) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::Curs1Set(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::Curs1Set) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::Curs1Down(wxSpinEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::Curs1Down) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::Curs1Up(wxSpinEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::Curs1Up) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::Curs2Set(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::Curs2Set) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::Curs2Down(wxSpinEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::Curs2Down) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void MainFrame::Curs2Up(wxSpinEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (MainFrame::Curs2Up) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


// wxGlade: add MainFrame event handlers


void MainFrame::set_properties()
{
    // begin wxGlade: MainFrame::set_properties
    SetTitle(wxT("Right Track Event Viewer"));
    SetSize(wxSize(1530, 800));
    g_TotalEventCount->SetMinSize(wxSize(150, 17));
    static_line_1->SetBackgroundColour(wxColour(255, 127, 0));
    static_line_1->SetForegroundColour(wxColour(255, 127, 0));
    static_line_2->SetBackgroundColour(wxColour(255, 127, 0));
    static_line_2->SetForegroundColour(wxColour(255, 127, 0));
    static_line_2_copy->SetBackgroundColour(wxColour(255, 127, 0));
    static_line_2_copy->SetForegroundColour(wxColour(255, 127, 0));
    panel_1->SetScrollRate(10, 10);
    // end wxGlade
}


void MainFrame::do_layout()
{
    // begin wxGlade: MainFrame::do_layout
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_2 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_7 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_6 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_3 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_4 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_5 = new wxBoxSizer(wxHORIZONTAL);
    sizer_3->Add(g_EventList, 1, wxEXPAND, 0);
    sizer_4->Add(g_EventFrame, 1, wxALL|wxEXPAND, 3);
    sizer_5->Add(g_StartTime, 1, wxEXPAND, 0);
    sizer_5->Add(g_timeScale, 6, 0, 0);
    sizer_5->Add(g_EndTime, 1, wxEXPAND, 0);
    sizer_4->Add(sizer_5, 0, wxEXPAND, 0);
    sizer_3->Add(sizer_4, 13, wxEXPAND, 0);
    sizer_1->Add(sizer_3, 1, wxEXPAND, 0);
    sizer_2->Add(g_TotalEventCount, 0, wxEXPAND, 0);
    sizer_2->Add(static_line_1, 0, wxEXPAND, 0);
    sizer_2->Add(g_EventInfo, 4, wxEXPAND, 0);
    sizer_2->Add(g_info2, 3, wxEXPAND, 0);
    sizer_2->Add(static_line_2, 0, wxEXPAND, 0);
    sizer_6->Add(label_1, 0, 0, 0);
    sizer_6->Add(g_Curs1Time, 0, 0, 0);
    sizer_6->Add(spin_button_1, 0, 0, 0);
    sizer_2->Add(sizer_6, 1, 0, 0);
    sizer_7->Add(label_2, 0, 0, 0);
    sizer_7->Add(g_Curs2Time, 0, 0, 0);
    sizer_7->Add(spin_button_2, 0, 0, 0);
    sizer_2->Add(sizer_7, 1, 0, 0);
    sizer_2->Add(g_CursDtime, 1, wxEXPAND, 0);
    sizer_2->Add(static_line_2_copy, 0, wxEXPAND, 0);
    sizer_2->Add(panel_1, 6, wxEXPAND, 0);
    sizer_1->Add(sizer_2, 0, wxEXPAND, 0);
    SetSizer(sizer_1);
    Layout();
    // end wxGlade
}

