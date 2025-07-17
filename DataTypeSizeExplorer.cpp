#include <iostream>
#include <climits>
using namespace std;

class DataTypeDemo {
public:
    void showSizes() {
        cout << "Size of int: " << sizeof(int) << " bytes\n";
        cout << "Size of float: " << sizeof(float) << " bytes\n";
        cout << "Size of double: " << sizeof(double) << " bytes\n";
        cout << "Size of char: " << sizeof(char) << " bytes\n";
        cout << "Size of bool: " << sizeof(bool) << " bytes\n";
    }

    void showRanges() {
        cout << "\nSigned int range: " << INT_MIN << " to " << INT_MAX << "\n";
        cout << "Unsigned int range: 0 to " << UINT_MAX << "\n";
        cout << "Signed char range: " << CHAR_MIN << " to " << CHAR_MAX << "\n";
        cout << "Unsigned char range: 0 to " << UCHAR_MAX << "\n";
    }

    void demonstrateCasting() {
        int i = 65;
        char c = static_cast<char>(i);
        float f = static_cast<float>(i);

        cout << "\nCasting int to char: " << c << "\n";
        cout << "Casting int to float: " << f << "\n";
    }
};

int main() {
    DataTypeDemo demo;
    demo.showSizes();
    demo.showRanges();
    demo.demonstrateCasting();
    return 0;
}