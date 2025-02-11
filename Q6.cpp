#include <iostream>

using namespace std;

int main() {
    
    double length, width;

    const int MULTIPLIER = 2;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    double area = length * width;
    double perimeter = MULTIPLIER * (length + width);

    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}
