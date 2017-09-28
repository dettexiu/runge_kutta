#ifndef VALUEINFO_H
#define VALUEINFO_H
#include <string>
using namespace std;


class ValueInfo{
private:
  string label;
  double value;
  
public:
  ValueInfo(string label,double value);
  string getLabel();
  double getValue();
  //double operator+();
};

#endif
