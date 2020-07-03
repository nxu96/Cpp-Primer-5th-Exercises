/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: vowel-counting program for `ff`, `fl` and `fi`.
 */ 
#include <iostream>

int main() {
  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0, otherCnt = 0;
  unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
  bool previousf = false;
  char ch;
  while (std::cin.get(ch)) {
    // NOTE: `<<` operator will omit whitespace characters
    switch (ch) {
      case 'A': case 'a':
        ++aCnt;
        break;
      case 'E': case 'e':
        ++eCnt;
        break;
      case 'I':
        ++iCnt;
        break;
      case 'i':
        ++iCnt;
        if (previousf) {
          ++fiCnt;
          previousf = false;
        }
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
      case 'f':
        if (previousf) {
          ++ffCnt;
          previousf = false;
        } else {
          previousf = true;
        }
        break;
      case 'l':
        if (previousf) {
          ++flCnt;
          previousf = false;
        }
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
            << "Number of tab:\t" << tabCnt << '\n'
            << "Number of newline:\t" << newlineCnt << '\n'
            << "Number of sequence ff:\t" << ffCnt << '\n'
            << "Number of sequence fl:\t" << flCnt << '\n'
            << "Number of sequence fi:\t" << fiCnt << '\n'
            << "Number of others:\t" << otherCnt << std::endl;

  return 0;
}
