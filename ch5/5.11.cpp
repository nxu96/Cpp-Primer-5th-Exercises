/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: vowel counting with blank spaces, tabs and newlines read
 * Pressing "Enter" == \n newline character
 */
#include <iostream>

int main() {
  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0, otherCnt = 0;
  char ch;
  while (std::cin.get(ch)) {
    // NOTE: `<<` operator will omit whitespace characters so here we use get().
    switch (ch) {
      case 'A': case 'a':
        ++aCnt;
        break;
      case 'E': case 'e':
        ++eCnt;
        break;
      case 'I': case 'i':
        ++iCnt;
        break;
      case 'O': case 'o':
        ++oCnt;
        break;
      case 'U': case 'u':
        ++uCnt;
        break;
      case ' ':
        ++spaceCnt;
        break;
      case '\t':
        ++tabCnt;
        break;
      case '\n':
        ++newlineCnt;
        break;
      default:
        ++otherCnt;
        break;
    }
  }
  std::cout << "Number of vowel a:\t" << aCnt << '\n'
            << "Number of vowel e:\t" << eCnt << '\n'
            << "Number of vowel i:\t" << iCnt << '\n'
            << "Number of vowel o:\t" << oCnt << '\n'
            << "Number of vowel u:\t" << uCnt << '\n'
            << "Number of space:\t" << spaceCnt << '\n'
            << "Number of tabs t:\t" << tabCnt << '\n'
            << "Number of newline:\t" << newlineCnt << '\n'
            << "Number of others:\t" << otherCnt << std::endl;

  return 0;
}
