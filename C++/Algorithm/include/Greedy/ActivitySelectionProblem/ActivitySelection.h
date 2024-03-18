#ifndef ACTIVITY_SELECTION_H
#define ACTIVITY_SELECTION_H

#include "./Activity.h"
#include <vector>
#include <algorithm>
#include <iostream>


/* ActivitySelection problem; */

/* problem.add_activity("A1", 0, 6); */
/* problem.add_activity("A2", 3, 4); */
/* problem.add_activity("A3", 1, 2); */
/* problem.add_activity("A4", 5, 8); */
/* problem.add_activity("A5", 5, 7); */
/* problem.add_activity("A6", 8, 9); */

/* problem.select_activities(); */

// Output :

/* Recommended Schedule : */
/* Activity Name: A3, Start Time: 1, End Time: 2 */
/* Activity Name: A2, Start Time: 3, End Time: 4 */
/* Activity Name: A5, Start Time: 5, End Time: 7 */
/* Activity Name: A6, Start Time: 8, End Time: 9 */


class ActivitySelection {
private:
  std::vector<Activity *> activities;

public:
  void add_activity(const std::string &activity_name, int start_time, int end_time);
  void select_activities();
};
#endif // ACTIVITY_SELECTION_H
