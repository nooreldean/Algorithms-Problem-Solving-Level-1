#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readarea()
{
    float l;
    cout << "*****************************" << endl;
    cout << "please enter length of rectangle: ";
    cin >> l;
    return l;
}
float calculatearea(float l)
{
    float pi = 3.14159265358979323846;
    float area= pow(l, 2) / (4 * pi);
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