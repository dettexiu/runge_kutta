#ifndef DATATABLE_H
#define DATATABLE_H
#include <map>
using namespace std;

class DataTable{
private:
  double t;
  double y;
public:
  DataTable(double t,double y);
  double getT();
  double getY();
};

#endif
