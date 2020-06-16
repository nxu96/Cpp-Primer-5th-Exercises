/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: && for chaining comparison
 */ 
#include <iostream>

int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  if (a > b && b > c && c > d) { /* do something */ }
  return 0;
}
