#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: \n";
    cin >> num1 >> num2;

    bool areOpposite = ((num1 ^ num2) < 0);

    cout << "The numbers " << num1 << " and " << num2;
    cout << (areOpposite ? " have opposite signs.\n" : " do not have opposite signs.\n");

    return 0;
}
