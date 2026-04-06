// violates ODR 2?
#include "odr.h"

int add(int x, int y) { return x + y; }

// violate ODR 1
int add(int x, int y) { return x + y; }

int subtract(int x, int y) { return x - y; }

int main() {
  int x{};
  // violate ODR 1
  int x{5};

  int y{add(6, 7) - subtract(6, 7)};
}
