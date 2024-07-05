#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

int main() {
    double temperature;
    char unit;
    
    cout << "Enter temperature value: ";
    cin >> temperature;
    cout << "Enter the unit of measurement (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;
    
    if(unit == 'C' || unit == 'c') {
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << " F" << endl;
        cout << "Temperature in Kelvin: " << celsiusToKelvin(temperature) << " K" << endl;
    }
    else if(unit == 'F' || unit == 'f') {
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << " C" << endl;
        cout << "Temperature in Kelvin: " << fahrenheitToKelvin(temperature) << " K" << endl;
    }
    else if(unit == 'K' || unit == 'k') {
        cout << "Temperature in Celsius: " << kelvinToCelsius(temperature) << " C" << endl;
        cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(temperature) << " F" << endl;
    }
    else {
        cout << "Invalid unit of measurement." << endl;
    }
    
    return 0;
}
