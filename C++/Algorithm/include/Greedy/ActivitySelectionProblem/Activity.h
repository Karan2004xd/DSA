#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <ostream>
#include <string>

class Activity {
private:
  std::string activity_name;
  int start_time, end_time;
public:
  Activity(const std::string &activity_name, int start_time, int end_time)
    : activity_name {activity_name}, start_time {start_time}, end_time {end_time} {}

  void set_activity_name(const std::string &activity_name) {
    this->activity_name = activity_name;
  }
  void set_start_time(int start_time) {
    this->start_time = start_time;
  }
  void set_end_time(int end_time) {
    this->end_time = end_time;
  }

  std::string get_activity_name() const { return this->activity_name; }
  int get_start_time() const { return this->start_time; }
  int get_end_time() const { return this->end_time; }

  friend std::ostream &operator<<(std::ostream &os, const Activity &obj) {
    os << "Activity Name: " << obj.activity_name
      << ", Start Time: " << obj.start_time
      << ", End Time: " << obj.end_time;
    return os;
  }
};
#endif // ACTIVITY_H
