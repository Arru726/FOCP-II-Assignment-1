#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double a, b, c;

    
    cout << "Enter the coefficients a, b, and c: ";
    cin >> a >> b >> c;

    
    if (a == 0) {
        if (b != 0) {
            
            double root = -c / b;
            cout << "This is a linear equation. The root is: " << root << endl;
        } else {
            
            if (c == 0)
                cout << "This equation has infinite solutions." << endl;
            else
                cout << "This equation has no solution!" << endl;
        }
    } else {
        
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "The roots are real and different:" << endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        } else if (discriminant == 0) {
            
            double root = -b / (2 * a);
            cout << "The roots are real and equal:" << endl;
            cout << "Root = " << root << endl;
        } else {
            
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "The roots are complex:" << endl;
            cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }

    return 0;
}
