#include <iostream>

int main() {
  // This wouldn't compile because add() is called on line 6, but add() is
  // declared on line 9.
  std::cout << "The sum of 3 and 4 is" << add(3, 4) << ".\n";
}

int add(int a, int b) { return a + b; }
