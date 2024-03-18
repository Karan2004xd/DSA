#include "../../../include/Greedy/ActivitySelectionProblem/ActivitySelection.h"

void ActivitySelection::add_activity(const std::string &activity_name, int start_time, int end_time) {
  activities.push_back(new Activity(activity_name, start_time, end_time));
}

void ActivitySelection::select_activities() {
  std::sort(activities.begin(), activities.end(),
            [] (Activity *arg0, Activity *arg1) {
              return arg0->get_end_time() < arg1->get_end_time();
            });

  if (activities.size() > 0) {
    Activity *prev_activity = activities[0];

    std::cout << "\nRecommended Schedule : \n" << *prev_activity << std::endl;
    for (int i = 1; i < activities.size(); i++) {
      Activity *current_activity = activities[i];
      if (current_activity->get_start_time() >= prev_activity->get_end_time()) {
        std::cout << *current_activity << std::endl;
        prev_activity = current_activity;
      }
    }
  }
}
