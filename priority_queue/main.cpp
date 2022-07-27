#include "priority_queue.h"

using namespace std;

int main() {
  priority_queue queue{};

  queue.push(1);
  queue.push(2);
  queue.push(-1);
  queue.push(-3);
  queue.push(-2);

  queue.pop();
  queue.push(-5);
  queue.pop();
  queue.push(-6);
  queue.pop();
  queue.pop();
  queue.pop();

  return 0;
}
