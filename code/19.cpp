#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readarea()
{
    float d;
    cout << "*****************************" << endl;
    cout << "please enter diameter of circle: ";
    cin >> d;
    return d;
}
float calculatearea(float d)
{
    float Pi = 3.14159265358979323846;
    float area= ( Pi * pow(d, 2)) / 4;
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