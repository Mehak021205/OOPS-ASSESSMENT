// Check whether the number is odd or even, positive or negative, single-digit or double-digit using OOPS
#include <iostream>
using namespace std;

class Number {
private:
    int n;

public:
    void inputNumber() {
        cout << "Enter an integer: ";
        cin >> n;
    }

    void checkEvenOdd() {
        if (n % 2 == 0)
            cout << n << " is even." << endl;
        else
            cout << n << " is odd." << endl;
    }

    void checkPositiveNegative() {
        if (n > 0)
            cout << n << " is positive." << endl;
        else if (n < 0)
            cout << n << " is negative." << endl;
        else
            cout << "The number is zero." << endl;
    }

    void checkSingleDoubleDigit() {
        if (n >= 0 && n < 10)
            cout << n << " is a single-digit number." << endl;
        else if (n >= 10 && n < 100)
            cout << n << " is a double-digit number." << endl;
        else
            cout << n << " is not a single or double-digit number." << endl;
    }
};

int main() {
    Number num;
    num.inputNumber();
    num.checkEvenOdd();
    num.checkPositiveNegative();
    num.checkSingleDoubleDigit();
    return 0;
} 