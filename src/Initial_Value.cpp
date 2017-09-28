#include"ValueInfo.hpp"
#include"Initial_Value.hpp"

ValueInfo* Initial_Value::getT(){
  return t;
}

ValueInfo* Initial_Value::getY(){
  return y;
}

Initial_Value::Initial_Value(){
  //初期値設定
  this->t=new ValueInfo("t",0.00);
  this->y=new ValueInfo("y",1.00);
}
