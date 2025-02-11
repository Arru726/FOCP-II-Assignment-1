#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char character;
    int integer;
    float floatingPoint;

    cout << "Enter a character: ";
    cin >> character;
    cout << "Enter an integer: ";
    cin >> integer;
    cout << "Enter a floating-point number: ";
    cin >> floatingPoint;

    cout << "\n================= Formatted Table =================\n";
    cout << left << setw(15) << "Character" << setw(15) << "Integer" << setw(15) << "Floating Point" << endl;
    cout << "---------------------------------------------------\n";
    cout << left << setw(15) << character << setw(15) << integer << setw(15) << fixed << setprecision(2) << floatingPoint << endl;

    return 0;
}
