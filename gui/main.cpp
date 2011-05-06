// -*- C++ -*- generated by wxGlade 0.6.3 on Tue May  3 10:13:20 2011

#include <wx/wx.h>
#include <wx/image.h>
#include "MainFrameApp.h"

#include <Model.h>




// ----------------------------------------------------------------
/** Main application class.
 *
 * This class represents the rightTrack GUI.
 */
class RightTrackApp: public wxApp
{
public:
  bool OnInit();

  Model* GetModel() { return &m_model; }

private:
  Model m_model;

};



IMPLEMENT_APP(RightTrackApp)



bool RightTrackApp::OnInit()
{
    wxInitAllImageHandlers();
    MainFrameApp* frame_1 = new MainFrameApp(NULL, wxID_ANY, wxEmptyString);
    SetTopWindow(frame_1);
    frame_1->Show();
    return true;
}
