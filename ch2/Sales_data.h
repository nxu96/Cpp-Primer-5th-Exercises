#ifndef CH2_SALES_DATA_H_
#define CH2_SALES_DATA_H_

#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

#endif  // CH2_SALES_DATA_H_
