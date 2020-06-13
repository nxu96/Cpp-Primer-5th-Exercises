#include <string>
#include <iostream>
#include <cstring>
using std::cout;

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  if (s1 == s2)
    cout << "Two strings are equal." << std::endl;
  else
    cout << "Two strings are not equal." << std::endl;

  char cs1[100];
  char cs3[101];
  std::cin >> cs1 >> cs2;
  // equal -- 0
  if (!strcmp(cs1, cs2))
    cout << "Two C-style strings are equal." << std::endl;
  else
    cout << "Two C-style strings are not equal." << std::endl;

  return 0;
}
// modify the same file on two windows
// They are synchronized like in vscode multiple tabs
