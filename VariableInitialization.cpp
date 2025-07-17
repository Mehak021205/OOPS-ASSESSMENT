#include <iostream>
using namespace std;

class InitDemo {
private:
    int copyInit;        // Copy initialization
    int directInit;      // Direct initialization
    int uniformInit;     // Uniform initialization
    int defaultInit;     // Default initialization

public:
    // Constructor with initialization list (correct way)
    InitDemo()
        : copyInit(10),            // Copy initialization (via constructor)
          directInit(20),          // Direct initialization
          uniformInit{30},         // Uniform initialization (C++11 style)
          defaultInit()            // Default initialization (sets to 0)
    {}

    void showValues() {
        cout << "Copy Initialization: " << copyInit << endl;
        cout << "Direct Initialization: " << directInit << endl;
        cout << "Uniform Initialization: " << uniformInit << endl;
        cout << "Default Initialization: " << defaultInit << endl;
    }
};

int main() {
    InitDemo obj;
    obj.showValues();
    return 0;
} 

