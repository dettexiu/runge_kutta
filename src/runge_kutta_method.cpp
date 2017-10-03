#include<stdio.h>
#include<math.h>
#include<vector>
#include"Diffeq.hpp"
#include"Initial_Value.hpp"
#include"ValueInfo.hpp"
#include"Diff_Option.hpp"
#include"Calculator.hpp"
#include"Printer.hpp"
using namespace std;

vector<DataTable*>data;

int main(){
//変数宣言
  Diffeq* diffeq;
  Diff_Option* diff_option;
  Initial_Value* initVal;
  Calculator* calculator;
  Printer* printer;
  
  //微分方程式クラス
  diffeq=new Diffeq();
  diff_option=new Diff_Option(0.01,0.00,1.00);
  printer=new Printer();
  
  //初期値を設定
  initVal=new Initial_Value();
  calculator=new Calculator();

  calculator->setDiffeq(diffeq);
  calculator->setInitial_Value(initVal);
  calculator->setDiff_Option(diff_option);

  calculator->calc();
  data=calculator->getData();
  printer->toCSV(data);  
  return 0;
}
