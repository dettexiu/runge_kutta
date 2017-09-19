#include<stdio.h>

double differential_equation(double t,double y);




int main(){
  // dt:刻み値（微小時間）
  double dt=0.1;

  double k1,k2,k3,k4;
  double y2,y3,y4;
  double y=0.0;

  //初期値を設定
  
  double y_0=0.0;

  double t_max=100;

  for(double t=0;t<t_max;t+=dt){
    //k1を求める
    k1=differential_equation(t,y);

    //k2を求める
    y2=y_0+1.0/2.0*dt*k1;
    k2=differential_equation(t+1.0/2.0*dt,y);

    //k3を求める
    y3=y_0+1.0/2.0*dt*k2;
    k3=differential_equation(t+1.0/2.0*dt,y);
    
    //k4を求める
    y4=y_0+dt*k3;
    k4=differential_equation(t+dt,y);

    y+=(k1+2.0*k2+2.0*k3+k4)/6.0;
  }
  
  double dif_ans=dt*(k1+2*k2+2*k3+k4)/6.0;
  //printf(dif_ans);
  
}
