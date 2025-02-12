#include<iostream>
using namespace std;

class Activities{
public:
  int temp;
  string act[4]={"swimming", "tennis", "golf", "skiing"};

  void choosing(){
    if (temp>= 80){
      cout << "Activity: " << act[0] << endl;
    }
    else if (temp>60 && temp<=80){
        cout << "Activity: " << act[1] << endl;
      }
      else if (temp>40 && temp<=60){
        cout << "Activity: " << act[2] << endl;
      }
      else{
        cout << "Activity: " << act[3] << endl;
      }
    }
  };

int main(){
  Activities a;
  int temp;

  cout<<"Enter temperature: ";
  cin>>temp;
  a.temp = temp;
  a.choosing();
}
