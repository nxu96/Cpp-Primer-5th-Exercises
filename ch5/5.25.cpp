/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: handle the divide by zero exception
 */ 
#include <iostream>
#include <stdexcept>

int main() {
  int a, b;
  bool tryAgain;
  do {
    tryAgain = false;
    try {
      std::cin >> a >> b;
      if (b == 0)
        throw std::runtime_error("Divide by 0.");
      std::cout << a / b << std::endl;
    } catch (std::runtime_error err) {
      std::cout << err.what() << "\nTry again? (y/n)" << std::endl;
      char c;
      if (std::cin >> c && (c == 'y' || c == 'Y'))
        tryAgain = true;
    }
  } while (tryAgain);

  return 0;
}
