#include <iostream>
#include <cstring>

int main() {
  char s1[] = "Hello";  // size 6
  char s2[] = "World";  // size 6
  char s3[11];
  // notice that you have to copy first and then cat
  // you can not cat twice
  // also you can not cpy twice
  // NOTE: Really trick
  // copy to the beginning
  // only use cat when there is already a cstyle string in it.
  strcpy(s3, s1);
  std::cout << s3 << std::endl;
  strcat(s3, s2);
  std::cout << s3 << std::endl;
  // strcat(s3, s2);
  // std::cout << s3 << std::endl;
  // NOTE: What happened if we cat again? buffer overflow
  // Error message:
  /*
  Hello
  HelloWorld
  HelloWorldWorld
  *** stack smashing detected ***: <unknown> terminated
  Aborted (core dumped)  
  */

  return 0;
}
// test the :x command in vim
