#include<stdio.h>
#include<math.h>

double f(double t,double y);

int main(){

  //計算範囲
  double t_start=0.00;
  double t_end=1.00;

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
    k1=step*f(t,y);

    //k2を求める
    k2=step*f( t+step/2.0 , y+k1/2.0);
    
    //k3を求める
    k3=step*f(t+step/2.0, y+k2/2.0);
    
    //k4を求める
    k4=step*f(t+step , y+k3);

    k=(k1 + 2.0*k2 +2.0*k3 + k4)/6.000;
    y+=k;
  }
  
  //double dif_ans=step*(k1+2*k2+2*k3+k4)/6.0;
  printf("answer:%lf",y);
  return 0;
  
}

double f(double x,double y){

  //計算式は
  // https://suugaku-bukai.esnet.ed.jp/2008/study/2004/20040301.html
  //から引用
  
  double a=1.0;
  return a*y;
 
}
