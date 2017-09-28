#ifndef DATATABLE_H
#define DATATABLE_H
#include <map>
using namespace std;

class DataTable{
private:
  double t;
  double y;
public:
  DataTable();
  double getData(string);
  double getT();
  double getY();
};

#endif
