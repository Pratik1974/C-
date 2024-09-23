#include <iostream>
using namespace std;

// Function to convert Celsius to Kelvin
float celsius_to_kelvin(float temp) {
    return temp + 273.0;
}

// Function to convert Kelvin to Celsius
float kelvin_to_celsius(float temp) {
    return temp - 273.0;
}

int main() {
    int option;
    float temp;

    cout << "---WELCOME TO TEMPERATURE CONVERTER---" << endl;
    cout << "1. Celsius to Kelvin" << endl;
    cout << "2. Kelvin to Celsius" << endl;

    cout << "Choose any one option: ";
    cin >> option;

    if (option == 1) {
        cout << "Enter temperature to be converted (in Celsius): ";
        cin >> temp;
        cout << "The temperature in Kelvin for the given temperature is: " << celsius_to_kelvin(temp) << " K" << endl;
    } else if (option == 2) {
        cout << "Enter temperature to be converted (in Kelvin): ";
        cin >> temp;
        cout << "The temperature in Celsius for the given temperature is: " << kelvin_to_celsius(temp) << " C" << endl;
    } else {
        cout << "ERROR! Please choose a valid option." << endl;
    }

    return 0;
}
