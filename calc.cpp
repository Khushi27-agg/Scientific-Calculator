#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

int main() {
    int choice;
    char option;
    double a, b, degrees, radians;

    do {
        cout << "\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod\n";
        cout << "6.Sin\n7.Cos\n8.Tan\n9.Cot\n10.Sec\n11.Cosec\n12.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
        } 
        else if (choice >= 6 && choice <= 11) {
            cout << "Enter angle in degrees: ";
            cin >> degrees;
            radians = degrees * PI / 180.0;
        }

        switch (choice) {
            case 1: cout << "Result: " << a + b; break;
            case 2: cout << "Result: " << a - b; break;
            case 3: cout << "Result: " << a * b; break;

            case 4:
                if (b != 0) cout << "Result: " << a / b;
                else cout << "Error: Division by zero";
                break;

            case 5:
                if ((int)b != 0) cout << "Result: " << (int)a % (int)b;
                else cout << "Error: Modulo by zero";
                break;

            case 6: cout << "Sin: " << sin(radians); break;
            case 7: cout << "Cos: " << cos(radians); break;
            case 8: cout << "Tan: " << tan(radians); break;
            case 9: cout << "Cot: " << 1 / tan(radians); break;
            case 10: cout << "Sec: " << 1 / cos(radians); break;
            case 11: cout << "Cosec: " << 1 / sin(radians); break;
            case 12: cout << "Exiting..."; return 0;

            default: cout << "Invalid choice";
        }

        cout << "\nContinue? (y/n): ";
        cin >> option;

    } while (option == 'y' || option == 'Y');

    return 0;
}
