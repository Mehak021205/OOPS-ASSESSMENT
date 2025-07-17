#include <iostream>
using namespace std;

// Macro constant 
#define PI 3.14159

class ConstantDemo {
public:
    void showConstants() {
        const int radius = 5; // const variable

        // Using both constants
        double areaWithConst = PI * radius * radius;
        cout << "Using #define PI and const int radius:\n";
        cout << "Area of circle: " << areaWithConst << endl;

    }

    void difference() {
        cout << "\nDifference:\n";
        cout << "const has a data type, checked by compiler\n";
        cout << "#define is replaced before compilation \n";
    }
};

int main() {
    ConstantDemo obj;
    obj.showConstants();
    obj.difference();
    return 0;
} 
