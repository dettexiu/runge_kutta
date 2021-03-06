#include "Calculator.hpp"
#include "Diff_Option.hpp"
#include "Diffeq.hpp"
#include "DataTable.hpp"
#include "ValueInfo.hpp"
#include "Initial_Value.hpp"

Calculator::Calculator(){
  
}

void Calculator::setInitial_Value(Initial_Value* init_val){
  this->init_val=init_val;
}

void Calculator::setDiff_Option(Diff_Option* diff_option){
  this->diff_option=diff_option;
}

void Calculator::setDiffeq(Diffeq* diffeq){
  this->diffeq=diffeq;
}

//runge_kutta法
void Calculator::calc(){
  ValueInfo* valueInfo=init_val->getY();
  double y=valueInfo->getValue();
  double step=diff_option->getStep();
  double t_start=diff_option->getTStart();
  double t_end=diff_option->getTEnd();
  double slope1,slope2,slope3,slope4=0.0;

  double k=0.0;
  double k1,k2,k3,k4=0.0;
  
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

    DataTable* table=new DataTable(t,y);
    data.push_back(table);
  }

  printf("data[0]:%lf", data.at(0)->getY());
  printf("y:%lf",y);
}

vector<DataTable*> Calculator::getData(){
  return this->data;
}
