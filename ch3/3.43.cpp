/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Three comprehensive ways of printing elements in int array.
 */ 
#include <iostream>

int main() {
  // size must be constexpr
  constexpr size_t c_row = 3;
  constexpr size_t c_col = 4;
  // curly braces initialization
  int ia[c_row][c_col] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
  };

  // range based for loop
  // notice that the outer loop has to be reference otherwise it becomes pointer
  for (const int (&row)[c_col] : ia) {
    for (const int &col : row)
      std::cout << col << ' ';
    std::cout << std::endl;
  }
  // trivial one using subscripts
  for (size_t i = 0; i != c_row; ++i) {
    for (size_t j = 0; j != c_col; ++j)
      std::cout << ia[i][j] << ' ';
    std::cout << std::endl;
  }
  // pointer
  // NOTE: Pointer type. First is pointer to int array, second is pointer to int
  for (int (*pr)[c_col] = ia; pr != ia + c_row; ++pr) {
    for (int *pc = *pr; pc != *pr + c_col; ++pc)
      std::cout << *pc << ' ';
    std::cout << std::endl;
  }

  return 0;
}
