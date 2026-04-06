#include <iostream>

// Write the function declaration statement (or function prototype) here to tell
// the compiler that the function exists and what its shape is: takes in two
// ints and returns an int.
int add(int a, int b);

int main() { std::cout << "The sum of 3 and 4 is" << add(3, 4) << ".\n"; }

// If we were to comment-out this line, then we'd get an error with the linker
// -- undefined reference to `add(int, int)'
int add(int a, int b) { return a + b; }
