#include <iostream>
/*
int main() {
  std::cout << "Enter numbers:" << std::endl;
  int sum = 0, val = 0;
  while (std::cin >> val)
    sum += val;
  std::cout << "The sum of numbers is " << sum << std::endl;
  return 0;
}
*/

int main() {
  std::cout << "Enter Numbers: " << std::endl;
  int sum = 0, curr = 0;
  // NOTE: Notice that you have to press ctrl+d to mark the end
  // of the file!!!! Pressing enter is not working here.
  // Only when the istream hits the end of the file it will evaluate
  // to false then the while loop is terminated.
  while (std::cin >> curr) {
    sum += curr;
  }
  std::cout << "The sum of all numbers is " << sum << std::endl;
  return 0;
}
