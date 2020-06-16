/*
 * @Author: Ning Xu
 * @Email: nxu@umich.edu
 * @Date: 2020-05-15 23:55:28
 * @LastEditor: Ning Xu
 * @Description: application of static_cast<type>(expression)
 */ 
int main() {
  int i = 0;
  double d = 0;
  i *= static_cast<int>(d);
  return 0;
}
