#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle: \n";
    cin >> side1 >> side2 >> side3;
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        cout << "The triangle is valid.\n";

        if (side1 == side2 && side2 == side3) {
            cout << "It is an equilateral triangle.\n";
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "It is an isosceles triangle.\n";
        } else {
            cout << "It is a scalene triangle.\n";
        }
    } else {
        cout << "The triangle is not valid.\n";
    }

    return 0;
}
