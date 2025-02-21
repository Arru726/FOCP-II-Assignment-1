#include <iostream>
using namespace std;

int main() {
    double a,b,c;

    cout<< "Enter the values of three sides a, b, c : "<<endl;
    cin>>a>>b>>c;

    if(a == b && b==c && a==c) {
        cout<< "\n It is an equilateral triangle. ";
    }
    else if(a == b || b == c || a==c) {
        cout<<"\n It is an isosceles triangle. ";
    }
    else {
        cout<<"\n It is a scalene triangle. ";
    }

    return 0;
}
