#include <iostream>

void doSomething() {
  std::cout << "Hello\n";
  // printf(x); error: 'x' was not declared in this scope
}

int main() {
  int x{3};
  doSomething();
  return x;
}
