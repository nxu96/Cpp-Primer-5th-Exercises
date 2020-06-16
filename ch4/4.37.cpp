/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Do not use c style cast as it is error-prone.
 */ 
#include <string>

int main() {
  int i = 0;
  double d = 0;
  std::string str("some string");
  const std::string *ps = &str;
  char c = 'c';
  char *pc = &c;
  void *pv;

  // pv = (void*)ps;
  pv = static_cast<void *>(const_cast<std::string *>(ps));
  // pv = const_cast<std::string *>(ps);
  // The above expression also work because void * can take any type of pointers

  // i = int(*pc);
  i = static_cast<int>(*pc);

  // pv = &d;
  pv = static_cast<void *>(&d);

  // pc = (char*) pv;
  // void pointer retrieve
  pc = static_cast<char *>(pv);

  return 0;
}
