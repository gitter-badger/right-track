/*ckwg +5
 * Copyright 2010 by Kitware, Inc. All Rights Reserved. Please refer to
 * KITWARE_LICENSE.TXT for licensing information, or contact General Counsel,
 * Kitware, Inc., 28 Corporate Drive, Clifton Park, NY 12065.
 */

#ifndef _MODEL_H_
#define _MODEL_H_

#include <BoundedEvent.h>
#include <DiscreteEvent.h>
#include <EventRecords.h>

#include <vcl_map.h>
#include <vcl_list.h>
#include <vcl_vector.h>

#include <wx/pen.h>
#include <wx/brush.h>
#include <wx/colordlg.h>

#include <boost/shared_ptr.hpp>

#include "event_database.h"


using namespace ::RightTrack;
using namespace ::RightTrack::Internal;

class MainFrameApp;



// ================================================================
// ----------------------------------------------------------------
/** Model part of MVC
 *
 *
 */
class Model
{
public:
  // -- TYPES --
  // Event data types
  typedef vcl_map < ItemId_t, EventDef::handle_t > event_map_t;
  typedef event_map_t::iterator event_iterator_t;
  typedef event_map_t::const_iterator const_event_iterator_t;

  // Context data types
  typedef vcl_map < ItemId_t, ContextDef_t > context_map_t;
  typedef context_map_t::iterator context_iterator_t;
  typedef vcl_vector < ContextHistoryElement_t > context_history_t;
  typedef context_history_t::iterator pp_iterator_t;

  enum { // bit mask
    UPDATE_EVENTS = 1,
    UPDATE_INFO = 2,
    UPDATE_CURSOR = 4
  };

  // -- CONSTRUCTORS --
  Model(MainFrameApp * frame);  // CTOR
  void Reset();
  static Model * Instance();

  // -- ACCESSORS --
  double EventTimeRange() const;
  double TimeOffset() const { return m_timingOffset; }

  /**  Number of events in data base.
   */
  int EventCount() const;
  int DisplayableEventCount() const;


  // -- MANIPULATORS --
  int ReadFromFile( const char * file);
  void ModelUpdate(unsigned code);

  void MoveSelectedEventTop();
  void MoveSelectedEventUp();
  void MoveSelectedEventDown();
  void MoveSelectedEventBottom();

  // FindEventByTime (ItemId_t id, double ots);

  // Event data areas -- proposal
  struct drawing_attributes_t
  {
    ItemId_t event_id;
    bool selected;
    bool display_enable;
  };

  vcl_vector < ItemId_t > m_drawOrder;
  event_map_t m_eventMap; // list of events

  EventDef::handle_t GetEventHistory( ItemId_t ev) { return m_eventMap[ev]; }

  // Context data areas
  context_map_t m_contextMap;
  vcl_vector < ContextHistoryElement_t > m_contextHistory;

  // cursor time bounds
  void SetCursorTimes (double t1, double t2);
  void GetCursorTimes (double& t1, double& t2);

  // x-axis timeline bounds
  void SetTimeBounds (double start, double end);
  void GetTimeBounds (double& start, double& end);

  // Event selection
  void SelectEvent (ItemId_t event);
  bool IsEventSelected (ItemId_t event) const;
  ItemId_t GetSelectedEvent() const;

  // Occurrences selection
  void SelectOccurrence (BaseOccurrence * oc);
  bool IsOccurrenceSelected(BaseOccurrence * oc) const;
  BaseOccurrence * GetSelectedOccurrence() const;

  void SetEventFilter( bool v );
  bool IsEventDisplayable(ItemId_t event) const;


//   bool GetEventInfoByTime (EventHistory_t const& eh, double time_offset, EventInfo_t * out_info);
// Need to define EventInfo_t structure

  // Colors to use
  wxColour m_defaultBaselineColor;
  wxColour m_defaultLineColor;
  wxColour m_defaultEventColor;
  wxColour m_startEventColor;
  wxColour m_endEventColor;
  wxColour m_selectColor;
  wxColour m_commentMarkerColor;

  wxColourData m_persistentColourData;

private:
  void ScanEvents();

  MainFrameApp * m_parentFrame;
  double m_timingOffset; // time of first event
  double m_maxTime;

  // Last item number in data base. Used for appending items.
  ItemId_t m_maxItemNumber;

  double m_cursor_1_time;
  double m_cursor_2_time;

  double m_viewTimeStart;
  double m_viewTimeEnd;

  // Event click info
  BoundedEventStatistics m_evc_stats;
  double m_evc_data;

  // selected items
  ItemId_t m_selectedEvent;
  BaseOccurrence * m_selectedOccurrence;

  bool m_eventFilter;

  static Model * s_instance;
};

#endif /* _MODEL_H_ */

// Local Variables:
// mode: c++
// fill-column: 70
// c-tab-width: 2
// c-basic-offset: 2
// c-basic-indent: 2
// c-indent-tabs-mode: nil
// end:

