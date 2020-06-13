/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-06-12 13:32:54
 * @LastEditor: Ning Xu
 * @Description: Description
 */ 
#include <string>
#include <iostream>
using namespace std;
int main() {
  const string s = "Keep out!";
  auto cs = s;  // string without const deduced
  cs = "Test";
  // TODO: Why is this legal here? auto is supposed to ignore the top level const. But in the range based for loop it keeps the const.
  // the top level const here?
  for (auto & c : s) {
    cout << c << endl;
    // c = 'X';
  }
  return 0;
}
 