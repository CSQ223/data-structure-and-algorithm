#ifndef DATA_STRUCTURE_AND_ALGORITHM_PRIORITY_QUEUE_PRIORITY_QUEUE_H
#define DATA_STRUCTURE_AND_ALGORITHM_PRIORITY_QUEUE_PRIORITY_QUEUE_H

#include <iostream>
#include <vector>

class priority_queue {
public:
  priority_queue();

  void push(int val);
  void pop();

  int top() const;
  int size() const;

private:
  void shift_down();
  void swim_up();

private:
  std::vector<int> data_;
  int size_{0};
};

#endif // DATA_STRUCTURE_AND_ALGORITHM_PRIORITY_QUEUE_PRIORITY_QUEUE_H
