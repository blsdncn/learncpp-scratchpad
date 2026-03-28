#include <iostream>
#include <sstream>
#include <string>

/*
 * Stat tracker
 * User inputs age, is_male, and their name, and it will print it out
 * somehow.
 *
 */

int main() {
  std::string title{"Stat Tracker\n"};
  std::cout << title;
  std::cout << "Enter your age: ";
  int age{};
  bool is_male{};
  std::cin >> age;
  std::cout << "Are you male or female? <m/f> ";
  char answer{};
  std::cin >> answer;
  if (answer == 'm') {
    is_male = true;
  } else if (answer == 'f') {
    is_male = false;
  } else {
    std::cout << "Invalid male/female response.";
    exit(1);
  }
  std::string name{};
  std::cout << "What is your name? ";
  std::cin >> name;
  std::cout << "=== Your Stats ===\n"
            << "Name: " << name << '\n'
            << "Age: " << age << '\n'
            << "Gender: " << (is_male ? "Male" : "Female") << std::endl;

  // Investigating the extraction operator:
  // std::istringstream test(name);
  // char result{};
  // test >> result;
  // std::cout << result << '\n';
}

/* Questions
 * Can any expression go into cout?
 * How does the direction affect the insertion (<<) and extraction (>>)
 * operator?
 * - What does "x >> y" do?
 * */
