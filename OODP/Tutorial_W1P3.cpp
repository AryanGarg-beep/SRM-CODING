//displaying product details

#include<iostream>
using namespace std;

class product{
  public:
  int price, stock;
  string name;

  void display(){
    cout << "\n\nProduct name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Stock: " << stock << endl;
  }
};
int main(){
  int price, stock;
  string name;
  product p;
  cout << "Enter product name: ";
  cin >> name;
  cout << "Enter product price: ";
  cin >> price;
  cout << "Enter stock: ";
  cin >> stock;
  p.name = name;
  p.price = price;
  p.stock = stock;
  p.display();
}
