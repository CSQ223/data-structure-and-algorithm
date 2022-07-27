
#include "priority_queue.h"

priority_queue::priority_queue() {}

void priority_queue::push(int val) {
  std::cout << data_.size() << std::endl;
  if (data_.size() > size_) {
    data_[size_] = val;
  } else {
    data_.push_back(val);
  }
  size_++;
  swim_up();
}

void priority_queue::pop() {
  if (size_ == 0)
    return;

  std::swap(data_[0], data_[size_ - 1]);
  size_--;
  shift_down();
}

int priority_queue::top() const {
  if (size_ > 0)
    return data_[0];

  throw std::out_of_range("Trying to top() in an empty queue");
}

int priority_queue::size() const {
  return size_;
}

void priority_queue::shift_down() {
  for (int parent = 0; parent < size_;) {
    int left_child = 2 * parent + 1;
    int right_child = 2 * parent + 2;

    int tmp = parent;
    if (left_child < size_ && data_[tmp] > data_[left_child])
      tmp = left_child;
    if (right_child < size_ && data_[tmp] > data_[right_child])
      tmp = right_child;

    if (tmp == parent)
      break;

    std::swap(data_[parent], data_[tmp]);
    parent = tmp;
  }
}

void priority_queue::swim_up() {
  int child = size_ - 1;
  for (int parent = child / 2; (child > 0) && (data_[parent] > data_[child]);
       child = parent, parent /= 2) {
    std::swap(data_[parent], data_[child]);
  }
}
