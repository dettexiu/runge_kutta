#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<vector>
using namespace std;

//プロトタイプ宣言
class Initial_Value;
class Diff_Option;
class Diffeq;
class DataTable;


//計算を行うクラス
class Calculator{
private:
  Initial_Value* init_val;
  Diff_Option* diff_option;
  Diffeq* diffeq;

  vector<DataTable*>data;
  
public:
  Calculator();


  void setInitial_Value(Initial_Value* init_val);
  void setDiff_Option(Diff_Option* diff_option);
  void setDiffeq(Diffeq* diffeq);
  
  void calc();
  vector<DataTable*>getData();
  
  
  
};

#endif
