#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readarea(float &a , float &b)
{
    cout << "*****************************" << endl;
    cout << "please enter recangle width: ";
    cin >> a;
    cout << "please enter recangle height: ";
    cin >> b;
}
float calculatearea(float a, float b)
{
    return a * b;
}
void printarea(float area)
{
    cout << "*****************************" << endl;
    cout << "your area is: "<< area << endl;
    cout << "*****************************" << endl;
}
int main()
{
    float a, b;
    readarea(a, b);
    printarea(calculatearea(a, b));
    return 0;
    
}