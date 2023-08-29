#include <iostream>
#include <functional>

using namespace std;

// Function for Addition
double add(double l, double m) {
    return l + m;
}

// Function for subtraction
double subtract(double x, double y) {
    return x - y;
}

// Function for multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function for division
double divide(double y, double z) {
    if (y != 0) {
        return y / z;
    }
    else {
        cerr << "Error: Division by zero cannot happen" << endl;
        return 0;
    }
}

int main() {
    
    double num1, num2;
    char s1;

    // Function pointer for the chosen operation
    function<double(double, double)> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> s1;

    // Set the function pointer based on the chosen operation
    switch (s1) {
    case '+':
        operation = add;
        break;
    case '-':
        operation = subtract;
        break;
    case '*':
        operation = multiply;
        break;
    case '/':
        operation = divide;
        break;
    default:
        cerr << "Error: Invalid operation." << endl;
        return 1;
    }

    // Perform the chosen operation and display the result
    double result = operation(num1, num2);
    cout << "Result: " << result << endl;

    return 0;
}
