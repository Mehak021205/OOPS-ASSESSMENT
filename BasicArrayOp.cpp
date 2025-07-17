#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int intArr[5];
    float floatArr[5];

public:
   
    ArrayOperations() {
        
        for (int i = 0; i < 5; ++i)
            intArr[i] = i + 1;

        
        floatArr[0] = 1.1;
        floatArr[1] = 2.2;
        floatArr[2] = 3.3;
        floatArr[3] = 4.4;
        floatArr[4] = 5.5;
    }

    void modifyElement(int index, int newValue) {
        if (index >= 0 && index < 5)
            intArr[index] = newValue;
    }

    void displayArrays() {
        cout << "Integer Array: ";
        for (int i = 0; i < 5; ++i)
            cout << intArr[i] << " ";
        cout << "\nFloat Array: ";
        for (int i = 0; i < 5; ++i)
            cout << floatArr[i] << " ";
        cout << endl;
    }

    void calculateSumAndAverage() {
        int sum = 0;
        for (int i = 0; i < 5; ++i)
            sum += intArr[i];
        float average = static_cast<float>(sum) / 5;
        cout << "\nSum of intArr: " << sum << endl;
        cout << "Average of intArr: " << average << endl;
    }
};

int main() {
    ArrayOperations arrOps;
    arrOps.displayArrays();
    arrOps.modifyElement(2, 99);  
    arrOps.displayArrays();
    arrOps.calculateSumAndAverage();
    return 0;
}