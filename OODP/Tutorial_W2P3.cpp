#include <iostream>
using namespace std;

class Calculate {
public:
    int number;
    int cube;

    void calCube() {
        cube = number * number * number;
        cout << "Cube of " << number << " is " << cube << endl;
    }
};

int main() {
    Calculate c;
    int num;

    do {
        cout << "Enter a number: ";
        cin >> num;
        if (num % 2 == 0 && num % 3 == 0) {
      cout << "EXIT" << endl;
            break;
    }
        c.number = num;
        c.calCube();
    } while (true); 

    return 0;
}

