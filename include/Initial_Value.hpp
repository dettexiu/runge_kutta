#ifndef INITIAL_VALUE_H
#define INITIAL_VALUE_H

class ValueInfo;

class Initial_Value{
private:
  ValueInfo* t;
  ValueInfo* y;
public:
  Initial_Value();
  ValueInfo* getT();
  ValueInfo* getY();
  
};
 #endif
