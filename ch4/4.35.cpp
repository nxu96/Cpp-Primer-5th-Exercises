/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Test the char to int promotion (convert to the ASCII code)
 */ 

#include <iostream>

int main() {
  char cval = 0;
  int ival = 0;
  unsigned int ui = 0;
  float fval = 0;
  double dval = 0;


  cval = 'a' + 3;
  // 'a' is promoted to `int`, then added to `3`, then converted to `char`.
  // std::cout << (int)cval << std::endl;

  fval = ui - ival * 1.0;
  // `ival` is converted to double, then multiplied by `1.0`. The result is
  // converted to `unsigned int`, then subtracted by `ui`. The result is
  // converted to `float`, then assigned to `fval`.

  dval = ui * fval;
  // Since `float` usually has more bits then `unsigned int`, `ui` is converted
  // to `float`, then multiplied by `fval`. The result is converted to
  // `double`, then assigned to `dval`.

  cval = ival + fval + dval;
  // `ival` is converted to `float`, then added to `fval`. The result is
  // converted to `double`, then added to `dval`. The result is converted to
  // `char`, then assigned to `cval`.

  return 0;
}
