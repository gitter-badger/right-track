/*ckwg +5
 * Copyright 2010-2011 by Kitware, Inc. All Rights Reserved. Please refer to
 * KITWARE_LICENSE.TXT for licensing information, or contact General Counsel,
 * Kitware, Inc., 28 Corporate Drive, Clifton Park, NY 12065.
 */


#ifndef _RIGHT_TRACK_EVENT_TRANSPORT_READER_GUI_H_
#define _RIGHT_TRACK_EVENT_TRANSPORT_READER_GUI_H_

#include <EventTransportReader.h>
#include "Model.h"


namespace RightTrack {
  namespace Internal {


// ----------------------------------------------------------------
/** Event receiver GUI class.
 *
 * This class is used to handle event structure creation when
 * unmarshling events from the transport medium.  One of the
 * NewEvent() methods is called with the appropriate type when that
 * type of event is read from the medium.
 */
class EventTransportReaderGui
  : public EventTransportReader
{
public:
  EventTransportReaderGui(Model * m);
  virtual ~EventTransportReaderGui();

  virtual int NewEvent(EventDefinition const& msg);
  virtual int NewEvent(EventStart const& msg);
  virtual int NewEvent(EventEnd const& msg);
  virtual int NewEvent(EventText const& msg);
  virtual int NewEvent(ContextDefinition const& msg);
  virtual int NewEvent(ContextPush const& msg);
  virtual int NewEvent(ContextPop const& msg);


private:
  Model * m_model;

}; // end class EventTransportReaderGui


} // end namespace
} // end namespace

#endif /* _RIGHT_TRACK_EVENT_TRANSPORT_READER_GUI_H_ */

// Local Variables:
// mode: c++
// fill-column: 70
// c-tab-width: 2
// c-basic-offset: 2
// c-basic-indent: 2
// c-indent-tabs-mode: nil
// end:
