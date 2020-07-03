/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: usage of do while loop
 */ 
#include <iostream>
#include <string>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  do {
    std::cout << ( s1 == s2 ? "Equal"
                            : s1 < s2 ? "First small" : "Second small")
              << std::endl;
  } while (std::cin >> s1 >> s2);

  return 0;
}
