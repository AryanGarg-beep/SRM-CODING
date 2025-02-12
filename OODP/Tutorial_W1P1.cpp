#include <iostream>
using namespace std;

class operation {
public:
    int sum;
    void add(int x, int y) {
        sum = x + y;
        cout << "Sum of " << x << " and " << y << " is " << sum << endl;
    }

    void counting() {
        int tempSum = sum; 
        int digits = 0;
        while (tempSum > 0) {
            tempSum = tempSum / 10;
            digits++;
        }
        cout << "Number of digits in the sum is " << digits << endl;
    }
};

int main() {
    int x, y;
    operation op;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    op.add(x, y);       
    op.counting();      
}


