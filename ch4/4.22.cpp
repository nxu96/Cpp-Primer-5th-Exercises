/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Comparison between conditional operator and if statement
 */ 

#include <iostream>

int main() {
  int grade;
  std::cin >> grade;
  // Notice the parenthesis when using conditional operator in output.
  std::cout << (
      grade > 90 ? "high pass"
                 : grade > 75 ? "pass"
                              : grade >= 60 ? "low pass"
                                            : "fail")
            << std::endl;

  // Note that the conditional operator is right associative, meaning that the
  // operands are grouped from right to left.

  if (grade > 90)
    std::cout << "high pass" << std::endl;
  else if (grade > 75)
    std::cout << "pass" << std::endl;
  else if (grade >= 60)
    std::cout << "low pass" << std::endl;
  else
    std::cout << "fail" << std::endl;

  // The `if` statements are relatively easy to understand when the conditions
  // do not have much braches.

  return 0;
}
