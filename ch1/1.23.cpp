/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Count isbn, play around with class member functions
 */ 
#include <iostream>
#include "Sales_item.h"

/*
int main() {
  Sales_item curItem, item;
  if (std::cin >> curItem) {
    int cnt = 1;
    while (std::cin >> item) {
      if (item.isbn() == curItem.isbn())
        ++cnt;
      else {
        std::cout << curItem.isbn() << " " << cnt << std::endl;
        curItem = item;
        cnt = 1;
      }
    }
    std::cout << curItem.isbn() << " " << cnt << std::endl;
  }

  return 0;
}
*/

int main() {
  Sales_item curr, item;
  std::cout << "Isbn Counter " << std::endl;
  if (std::cin >> item) {
    int cnt = 1;
    while (std::cin >> curr) {
      if (item.isbn() == curr.isbn()) {
        ++cnt;
      } else {  // update with the new one
        std::cout << item.isbn() << " " << cnt << std::endl;
        item = curr;
        cnt = 1;
      }
    }
    // at the end of input
    std::cout << item.isbn() << " " << cnt << std::endl;
  }
  return 0;
}
