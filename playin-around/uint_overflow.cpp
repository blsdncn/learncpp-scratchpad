#include <iostream>

int main() {
  unsigned int i{1};
  while (1) {
    if (i < 10) {
      std::cout << i << "\n";
    }
    i++;
  }
}
