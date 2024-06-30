#include <iostream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;
// Function to add two numbers
double addition(double a, double b)
{
    return a + b;
}

// Function to subtract two numbers
double subtraction(double a, double b) 
{
    return a - b;
}

// Function to multiply two numbers
double multiplication(double a, double b)
{
    return a * b;
}

// Function to divide two numbers
double division(double a, double b)
{
    if (b == 0) 
    {
        cout << "Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    char operation;
    double num1, num2;
    string input;

    do {
        // Display menu
        cout << "Choose an operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter 'q' to quit." << endl;

        getline(cin, input);
        stringstream stream(input);
        if (stream >> operation) {
            if (operation == 'q') {
                break;
            }
            if (operation < '1' || operation > '4') {
                cout << "Invalid input. Please try again." << endl;
                continue;
            }

            // Ask for two numbers
            cout << "Enter the first number: ";
            if (!(cin >> num1)) {
               cout << "Invalid input. Please enter a number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            
            cout << "Enter the second number: ";
            if (!(cin >> num2)) {
              cout << "Invalid input. Please enter a number." << endl;
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            // Perform the chosen operation
            switch (operation) {
                case '1':
                    cout << "Result: " << addition(num1, num2) << endl;
                    break;
                case '2':
                    cout << "Result: " << subtraction(num1, num2) << endl;
                    break;
                case '3':
                    cout << "Result: " << multiplication(num1, num2) << endl;
                    break;
                case '4':
                    cout << "Result: " << division(num1, num2) << endl;
                    break;
            }

            // Clear input buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    } while (true);

    return 0;
}
