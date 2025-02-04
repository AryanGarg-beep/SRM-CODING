#include<iostream>
#include<cmath>
using namespace std;

class Circle
{
    public:
    double radius;
    double area;
    double circumference;
    void getdata()
    {
        cout<<"Enter the radius of the circle: ";
        cin>>radius;
    }
    void calculate()
    {
        area = 3.14 * pow(radius,2);
        circumference = 2 * 3.14 * radius;
    }
    void display()
    {
        cout<<"The area of the circle is: "<<area<<endl;
        cout<<"The circumference of the circle is: "<<circumference<<endl;
    }
};

int main()
{
    Circle c;
    c.getdata();
    c.calculate();
    c.display();
    return 0;
}
