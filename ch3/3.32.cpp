/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Notice that we use array and size t together
 */ 
#include <vector>
// in vector we use std::vector<xxx>::size_type which is an alias of size_t
// which is a typedef for unsigned int or unsiged long depending on the machine
// platform.
int main() {
  int ia[10];
  for (size_t i = 0; i != 10; ++i)
    ia[i] = i;
  // array is not a class and it has no copy ctor or assignment operator.
  // So we have to copy the element one by one.
  // Why bother using it when we have vector?
  // Probably when you have to deal with some legacy code LMAO.
  int ia2[10];
  for (size_t i = 0; i != 10; ++i)
    ia2[i] = ia[i];

  std::vector<int> iv;
  for (int i = 0; i != 10; ++i)
    iv.push_back(i);

  std::vector<int> iv2(iv);

  return 0;
}
