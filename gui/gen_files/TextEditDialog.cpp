// -*- C++ -*- generated by wxGlade 0.6.3 on Thu Aug 11 09:43:46 2011

#include "TextEditDialog.h"

// begin wxGlade: ::extracode

// end wxGlade


TextEditDialog::TextEditDialog(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTHICK_FRAME)
{
    // begin wxGlade: TextEditDialog::TextEditDialog
    TextField = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_WORDWRAP);
    ok_button = new wxButton(this, wxID_OK, wxT("OK"));
    static_line_3 = new wxStaticLine(this, wxID_ANY);
    clear_button = new wxButton(this, wxID_CLEAR, wxT("Clear"));
    static_line_3_copy = new wxStaticLine(this, wxID_ANY);
    cancel_button = new wxButton(this, wxID_CANCEL, wxT("Cancel"));

    set_properties();
    do_layout();
    // end wxGlade
}


BEGIN_EVENT_TABLE(TextEditDialog, wxDialog)
    // begin wxGlade: TextEditDialog::event_table
    EVT_BUTTON(wxID_CLEAR, TextEditDialog::handle_clear)
    // end wxGlade
END_EVENT_TABLE();


void TextEditDialog::handle_clear(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (TextEditDialog::handle_clear) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


// wxGlade: add TextEditDialog event handlers


void TextEditDialog::set_properties()
{
    // begin wxGlade: TextEditDialog::set_properties
    SetTitle(wxT("Edit Annotation"));
    SetSize(wxSize(543, 268));
    // end wxGlade
}


void TextEditDialog::do_layout()
{
    // begin wxGlade: TextEditDialog::do_layout
    wxBoxSizer* sizer_8 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_9 = new wxBoxSizer(wxHORIZONTAL);
    sizer_8->Add(TextField, 3, wxEXPAND, 0);
    sizer_9->Add(ok_button, 0, 0, 0);
    sizer_9->Add(static_line_3, 5, wxEXPAND, 0);
    sizer_9->Add(clear_button, 0, 0, 0);
    sizer_9->Add(static_line_3_copy, 5, wxEXPAND, 0);
    sizer_9->Add(cancel_button, 0, wxRIGHT, 0);
    sizer_8->Add(sizer_9, 0, wxEXPAND, 0);
    SetSizer(sizer_8);
    Layout();
    // end wxGlade
}

