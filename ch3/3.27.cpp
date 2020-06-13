/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Description
 */ 
int txt_size();

int main() {
  unsigned buf_size = 1024;
  // Array size must be a constexpr
  //int ia1[buf_size];            // Error: `buf_size` must be `constexpr`
  int ia2[4 * 7 - 14];          // OK
  //int ia3[txt_size()];          // Error: `txt_size()` must be a `constexpr` function
  //char st[11] = "fundamental";  // Error: the size of string is 12 with a trailing '\0'

  return 0;
}
