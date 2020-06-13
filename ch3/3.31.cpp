/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Description
 */ 
int main() {
  int ia[10];
  for (size_t i = 0; i != 10; ++i)
    ia[i] = i;

  // To get the size of an array one could use
  //     sz = sizeof(ia) / sizeof(*ia)
  // NOTE: This way of finding the size of an array will only work if the first
  // sizeof function is called within the same scope as where the array is
  // defined. Otherwise ia will becomes the pointer and we would never know the
  // total size of the array unless we explicitly maintain such a variable for
  // the size. That is why we need to pass the size of the array together into
  // a function.

  // This will also not work for some situations like dynamically allocated
  // array, pointer array, array in function parameter etc.

  return 0;
}
