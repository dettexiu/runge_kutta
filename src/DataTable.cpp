#include"DataTable.hpp"

DataTable::DataTable(double t,double y){
  this->t=t;
  this->y=y;
}

double DataTable::getT(){
  return  this->t;
}

double DataTable::getY(){
  return this->y;
}
