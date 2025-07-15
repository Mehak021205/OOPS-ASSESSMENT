#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a,int b) {
        return a + b;
    }

    int subtract(int a,int b) {
        return a - b;
    }

    int multiply(int a,int b) {
        return a * b;
    }

   float divide(int a,int b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0; 
        }
        return static_cast<double>(a) / b;
    }
};
int main() {
    Calculator calc;
    int n1, n2;
    char op;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter operator (+,-,*,/): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> n2;

    switch(op) {
        case '+':
            cout << "Res: " << calc.add(n1,n2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(n1,n2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(n1,n2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(n1, n2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    return 0;
}
