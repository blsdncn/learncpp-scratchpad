#include <iostream>

int main() {
  std::cout << "Enter an integer: ";
  int left{};
  std::cin >> left;

  std::cout << "Enter another integer: ";
  int right{};
  std::cin >> right;

  std::cout << left << " + " << right << " is " << left + right << ".\n";
  std::cout << left << " - " << right << " is " << left - right << ".\n";

  return 0;
}
