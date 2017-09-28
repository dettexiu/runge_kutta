#include "Diff_Option.hpp"

Diff_Option::Diff_Option(double step,double t_start,double t_end){
  this->step=step;
  this->t_start=t_start;
  this->t_end=t_end;
}

double Diff_Option::getStep(){
  return this->step;
}

double Diff_Option::getTStart(){
  return this->t_start;
}

double Diff_Option::getTEnd(){
  return this->t_end;
}

double Diff_Option::setStep(double step){
  this->step=step;
}

double Diff_Option::setRange(double t_start,double t_end){
  this->t_start=t_start;
  this->t_end=t_end;
}
