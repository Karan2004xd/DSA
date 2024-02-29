package com.DSA.Java.Algorithms.Greedy.ActivitySelectionProblem;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

// Test Cases

// ActivitySelection activitySelection = new ActivitySelection();
// activitySelection.addActivity("A1", 0, 6);
// activitySelection.addActivity("A2", 3, 4);
// activitySelection.addActivity("A3", 1, 2);
// activitySelection.addActivity("A4", 5, 8);
// activitySelection.addActivity("A5", 5, 7);
// activitySelection.addActivity("A6", 8, 9);

// activitySelection.selectActivities();

public class ActivitySelection {
  private ArrayList<Activity> activityList;

  public ActivitySelection() {
    this.activityList = new ArrayList<Activity>();
  }

  public void addActivity(String name, int startTime, int endTime) {
    activityList.add(new Activity(name, startTime, endTime));
  }

  public void selectActivities() {
    Comparator<Activity> finishTimeComparator = new Comparator<Activity>() {
      @Override
      public int compare(Activity arg0, Activity arg1) {
        return arg0.getEndTime() - arg1.getEndTime();
      }
    };

    Collections.sort(activityList, finishTimeComparator);
    Activity prevActivity = activityList.get(0);

    System.out.println("\nRecommended Schedule : \n" + prevActivity);

    for (int i = 1; i < activityList.size(); i++) {
      Activity currentActivity = activityList.get(i);
      if (currentActivity.getStartTime() >= prevActivity.getEndTime()) {
        System.out.println(currentActivity);
        prevActivity = currentActivity;
      }
    }
  }
}
