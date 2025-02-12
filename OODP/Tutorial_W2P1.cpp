#include <iostream>
using namespace std;

class operation {
public:
    int product;
    void multiply(int x, int y) {
        product = x * y;
        cout << "Product of " << x << " and " << y << " is " << product << endl;
    }

    void counting() {
        int tempSum = product; 
        int digits = 0;
        while (tempSum > 0) {
            tempSum = tempSum / 10;
            digits++;
        }
        cout << "Number of digits in the product is " << digits << endl;
    }
};

int main() {
    int x, y;
    operation op;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    op.multiply(x, y);       
    op.counting();      
}


