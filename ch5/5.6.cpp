/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Conditional operator
 */ 
#include <vector>
#include <string>
#include <iostream>

int main() {
  const std::vector<std::string> scores = { "F", "D", "C", "B", "A", "A++"};
  std::string lettergrade;
  int grade;
  std::cin >> grade;
  lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
  std::cout << lettergrade << std::endl;

  return 0;
}
