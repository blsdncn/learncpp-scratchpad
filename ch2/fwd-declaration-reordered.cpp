#include <iostream>

// Define add before it is first referenced.
int add(int a, int b) { return a + b; }

int main() {
  // This compiles fine because add() is already defined.
  std::cout << "The sum of 3 and 4 is" << add(3, 4) << ".\n";
}
