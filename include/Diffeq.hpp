#ifndef __DIFFEQ_H__
#define __DIFFEQ_H__

#include<stdio.h>

//微分の式をまとめておくクラス

class Diffeq {
 private:
  double test1(double x,double y);
  double test2(double x,double y);
 public:
  Diffeq();
  double getDiff(double x,double y);
};

# endif
