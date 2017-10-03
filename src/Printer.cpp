#include"Printer.hpp"
#include"DataTable.hpp"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

Printer::Printer(){
}

//csvを出力
void Printer::toCSV(vector<DataTable*>data_tables){
  ofstream ofs("Test.csv");
  string buf="";
  DataTable* data_table;
  ofs<<""<<endl;
 
  for(unsigned int i=0;i<data_tables.size()-1;i++){
    buf="";
    data_table=data_tables.at(i);

    if(i==0){
      ofs<<"t,y"<<endl;
    }
    
    buf+=to_string(data_table->getT());
    buf+=",";
    buf+=to_string(data_table->getY());
    ofs<<buf<<endl;
  }
  ofs.close();
  return;
  
  
}
