#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readarea(float &a , float &b)
{
    cout << "*****************************" << endl;
    cout << "please enter value of A: ";
    cin >> a;
    cout << "please enter value of B: ";
    cin >> b;
}
float calculatearea(float a, float b)
{
    float pi = 3.14159265358979323846;
    float area= (pi * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    return area;
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