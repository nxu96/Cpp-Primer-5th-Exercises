/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: if-else statement
 * p.s. vim command for combining two lines: 2J
 */ 
#include <vector>
#include <string>
#include <iostream>

int main() {
  const std::vector<std::string> scores = { "F", "D", "C", "B", "A", "A++"};
  std::string lettergrade;
  int grade;
  std::cin >> grade;
  if (grade >= 60) {
    lettergrade = scores[(grade - 50) / 10];
  } else {
    lettergrade = scores[0];
  }
  std::cout << lettergrade << std::endl;
  return 0;
}
