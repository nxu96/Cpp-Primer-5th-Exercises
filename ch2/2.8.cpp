/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Practice escape sequence
 */ 
#include <iostream>

int main() {
  std::cout << ">" << "2\115\012" << "<" << std::endl;
  std::cout << ">" << "2\011\x4d\012" << "<" << std::endl;

  return 0;
}
