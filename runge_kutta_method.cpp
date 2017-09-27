#include<stdio.h>
#include<math.h>
#include"Diffeq.hpp"
/*
double f(double x,double y);
double test1(double x,double y);
double test2(double x,double y);
*/
class Diffeq;

int main(){

  //微分方程式クラス
  Diffeq* diffeq=new Diffeq();
  
  //計算範囲
  double t_start=0.00;
  double t_end=2.00;

  //初期値を設定
  double y=1.00;

  //刻み幅
  double step=0.01;

  //微小時間内の増加量
  double k=0.00;

  //ルンゲクッタ係数
  double k1,k2,k3,k4=0.0;

  for(double t=t_start;t<t_end;t+=step){
    //k1を求める
    k1=step*(diffeq->getDiff(t,y));

    //k2を求める
    k2=step*(diffeq->getDiff( t+step/2.0 , y+k1/2.0));
    
    //k3を求める
    k3=step*(diffeq->getDiff(t+step/2.0, y+k2/2.0));
    
    //k4を求める
    k4=step*(diffeq->getDiff(t+step , y+k3));

    k=(k1 + 2.0*k2 +2.0*k3 + k4)/6.000;
    y+=k;
  
  }

  //printf("answer:%lf",y);
  return 0;
  
}

/*
double f(double x,double y){
  double ans=test2(x,y);
  return ans;
}

double test1(double x,double y){
  //計算式は
  // https://suugaku-bukai.esnet.ed.jp/2008/study/2004/20040301.html
  //から引用
  
  double a=1.0;
  return a*y;
 
}

//計算式は
// https://suugaku-bukai.esnet.ed.jp/2008/study/2004/20040301.html
//から引用
double test2(double x,double y){
  double A=2.0;
  double k=1.0;

  return k*(A-y)*y;
  
}
*/

