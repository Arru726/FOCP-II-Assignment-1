#include <iostream>
using namespace std;
float round(float var)
{
    char str[40]; 

 
    sprintf(str, "%.2f", var);
 
    sscanf(str, "%f", &var); 

    return var; 
}

int main()
{
    float var = 59.78938;
    cout << round(var);
    return 0;
}
