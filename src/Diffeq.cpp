#include"Diffeq.hpp"

Diffeq::Diffeq(void){
  
}

double Diffeq::test1(double x,double y){
  //計算式は
  // https://suugaku-bukai.esnet.ed.jp/2008/study/2004/20040301.html
  //から引用
  
  double a=1.0;
  printf("x:%lf\n",x);
  return (a*y);
 
}

//計算式は
// https://suugaku-bukai.esnet.ed.jp/2008/study/2004/20040301.html
//から引用
double Diffeq::test2(double x,double y){
  double A=2.0;
  double k=1.0;
  printf("x:%lf\n",x);
  return (k*(A-y)*y);
  
}

double Diffeq::getDiff(double x,double y){
  return test1(x,y);
}

