#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter values for a, b, c, and d: \n";
    cin >> a >> b >> c >> d;

    int result = pow(a, b) + (c & d);

    cout << "The result of the expression (a^b + c&d) is: " << result << "\n";

    return 0;
}
