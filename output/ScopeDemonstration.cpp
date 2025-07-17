#include <iostream>
using namespace std;

// Global variable
int value = 10;

class ScopeExample {
public:
    void showScopes() {
        int value = 20; // Function scope (shadows global)
        cout << "Function scope value: " << value << endl;
        cout << "Global scope value using ::value: " << ::value << endl;

        {
            int value = 30; // Block scope (shadows function scope)
            cout << "Block scope value: " << value << endl;
        }

        cout << "Back to function scope value: " << value << endl;
    }
};

int main() {
    ScopeExample obj;
    obj.showScopes();

    cout << "In main - Global value: " << value << endl;

    return 0;
}
