/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: look for duplicated words that start with an uppercase letter.
 */ 
#include <iostream>
#include <string>

int main() {
  std::string last, curr;
  bool hasRepeat = false;
  while (std::cin >> curr) {
    if (curr[0] < 'A' || curr[0] > 'Z') {
      last = curr;
      continue;
    }
    if (curr == last) {
      std::cout << "Find repeated word: " << curr << std::endl;
      hasRepeat = true;
      break;
    }
    last = curr;
  }
  if (!hasRepeat)
    std::cout << "No word was repeated." << std::endl;

  return 0;
}
