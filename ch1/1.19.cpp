/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Handles input in which the first number is smaller
 *               than the second one.
 */ 
#include <iostream>

int main() {
  int bg = 0, ed = 0;
  std::cout << "Enter the number of begin and end: ";
  std::cin >> bg >> ed;
  while (bg <= ed)
    std::cout << bg++ << " ";
  std::cout << std::endl;
  return 0;
}
