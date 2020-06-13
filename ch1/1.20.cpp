/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Read and write each transaction.
 */ 
#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item item;
  while (std::cin >> item)
    std::cout << item << std::endl;

  return 0;
}
