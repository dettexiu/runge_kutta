#include<stdio.h>
#include<math.h>
#include<vector>
#include"Diffeq.hpp"
#include"Initial_Value.hpp"
#include"ValueInfo.hpp"
#include"Diff_Option.hpp"
#include"Calculator.hpp"
using namespace std;

int main(){
//変数宣言
  Diffeq* diffeq;
  Diff_Option* diff_option;
  Initial_Value* initVal;
  Calculator* calculator;
    
  //微分方程式クラス
  diffeq=new Diffeq();
  diff_option=new Diff_Option(0.01,0.00,1.00);
  
  //初期値を設定
  initVal=new Initial_Value();
  calculator=new Calculator();

  calculator->setDiffeq(diffeq);
  calculator->setInitial_Value(initVal);
  calculator->setDiff_Option(diff_option);

  calculator->calc();

  /*
  vector<DataTable*>data;
  data=calculator->getData();
  printf("data[1]->t:%lf",data[0]->getT());
  printf("data[1]->y:%lf",data[0]->getY());
  */
  
  return 0;
}
