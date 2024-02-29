package com.DSA.Java.Algorithms.Greedy.ActivitySelectionProblem;

public class Activity {
  private String activityName;
  private int startTime, endTime;

  public Activity(String activityName, int startTime, int endTime) {
    this.activityName = activityName;
    this.endTime = endTime;
    this.startTime = startTime;
  }

  public int getEndTime() {
    return endTime;
  }
  
  public int getStartTime() {
    return startTime;
  }

  public String getActivityName() {
    return activityName;
  }

  public void setEndTime(int endTime) {
    this.endTime = endTime;
  }

  public void setStartTime(int startTime) {
    this.startTime = startTime;
  }

  public void setActivityName(String activityName) {
    this.activityName = activityName;
  }

  @Override
  public String toString() {
    return "Activity : " + activityName + ", Start Time : " + startTime + ", End Time : " + endTime;
  }
}
