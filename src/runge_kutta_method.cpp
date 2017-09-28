
#include<stdio.h>
#include<math.h>
#include"Diffeq.hpp"
#include"Initial_Value.hpp"
#include"ValueInfo.hpp"

int main(){
  //微分方程式クラス
  Diffeq* diffeq;

  diffeq=new Diffeq();
  
  //計算範囲
  double t_start=0.00;
  double t_end=1.00;
   //刻み幅
  double step=0.01;

  //初期値を設定
  //double y=1.00;
  Initial_Value* initVal;
  initVal=new Initial_Value();

  //微小時間内の増加量
  double k=0.00;

  //ルンゲクッタ係数
  double k1,k2,k3,k4=0.0;
  double slope1,slope2,slope3,slope4=0.0;

  ValueInfo* valueInfo=initVal->getY();
  double y=valueInfo->getValue();
  //double y=1.0;
  
  for(double t=t_start;t<t_end;t+=step){

    //k1を求める
    slope1=diffeq->getDiff(t,y);
    k1=step*slope1;

    //k2を求める
    slope2=diffeq->getDiff(t+step/2.0,y+k1/2.0);
    k2=step*slope2;
    
    //k3を求める
    slope3=diffeq->getDiff(t+step/2.0,y+k2/2.0);
    k3=step*slope3;

    //k4を求める
    slope4=diffeq->getDiff(t+step,y+k3);
    k4=step*slope4;

    k=(k1 + 2.0*k2 +2.0*k3 + k4)/6.000;
    y+=k;
  
  }

  printf("answer:%lf",y);
  return 0;
}

