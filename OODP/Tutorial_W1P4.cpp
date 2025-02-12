#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  cout<<left<<setw(15)<<0.123456<<endl;
  cout<<right<<setw(12)<<fixed<<setprecision(2)<<23.987<<endl;
  cout<<scientific<<setprecision(4)<<-123.456<<endl;
  cout<<setw(10)<<scientific<<setprecision(4)<<-123.456<<endl;

}
