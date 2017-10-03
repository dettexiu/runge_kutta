#include "ValueInfo.hpp"
using namespace std;

ValueInfo::ValueInfo(string label,double value){
  this->label=label;
  this->value=value;
}

string ValueInfo::getLabel(){
  return this->label;
}

double ValueInfo::getValue(){
  return this->value;
}
