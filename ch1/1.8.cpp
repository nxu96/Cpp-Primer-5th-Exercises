/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: So it is like a greedy matching. 
 *               Another tip is that adding: a backslash if you want to
 *               print out  a double quote ".
 */ 
#include <iostream>

int main() {
  std::cout << "/*";  // OK
  std::cout << "*/";  // OK
  // std::cout << /* "*/" */;  // Error
  std::cout << /*  "*/" /*  "/*"  */;  // OK
  std::cout << std::endl;
  std::cout << "\"" << std::endl;
  return 0;
}
