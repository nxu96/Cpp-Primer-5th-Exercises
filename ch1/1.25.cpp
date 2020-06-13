/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: The bookstore program
 */ 
#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item total;
  if (std::cin >> total) {
    Sales_item trans;
    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn()) {
        total += trans;
      } else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    // insert to ostream cerr
    std::cerr << "No data!" << std::endl;
    return -1;
  }
  return 0;
}
