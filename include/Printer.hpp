#ifndef PRINTER_H
#define PRINTER_H

#include<vector>
using namespace std;
class DataTable;

class Printer{
private:
  
public:
  Printer();
  void toCSV(vector<DataTable*> data_tables);
};

#endif
