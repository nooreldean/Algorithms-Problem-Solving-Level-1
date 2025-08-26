#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readarea()
{
    float a;
    cout << "*****************************" << endl;
    cout << "please enter radius of circle: ";
    cin >> a;
    return a;
}
float calculatearea(float a)
{
    float Pi = 3.14159265358979323846;
    float area= ( Pi * pow(a, 2))/4;
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
    printarea(calculatearea(readarea()));
    return 0;
}