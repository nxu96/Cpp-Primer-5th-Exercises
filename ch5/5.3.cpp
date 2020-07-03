#include <iostream>

int main() {
  int sum = 0, val = 1;
  while (val <= 10 && (sum += val, ++val));  // null statement
  // The second part will evalute ++val as true.
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

  // This rewrite diminishes the readability of the code.

  return 0;
}
