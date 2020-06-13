/*
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: Array default initialization. On stack or on other area like heap
 */ 
#include <string>
using std::string;

string sa[10];  // ten elements of empty string
int    ia[10];  // ten elements of 0

int main() {
  string sa2[10];  // ten elements of empty string
  int    ia2[10];  // ten elements of undefined value
}
