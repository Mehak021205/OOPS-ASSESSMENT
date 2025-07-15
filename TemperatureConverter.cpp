#include <iostream>
using namespace std;

class TemperatureConverter {
private:
    float temp;

public:
    void getInput() {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
    }

    float toFahrenheit() {
        return (temp * 9 / 5) + 32;
    }

    float toKelvin() {
        return temp + 273.15;
    }

    void displayResults() {
        cout << "\nTemperature Conversions:" << endl;
        cout << "Celsius: " << temp << " °C" << endl;
        cout << "Fahrenheit: " << toFahrenheit() << " °F" << endl;
        cout << "Kelvin: " << toKelvin() << " K" << endl;
    }
};

int main() {
    TemperatureConverter tc;
    tc.getInput();
    tc.displayResults();
    return 0;
}

