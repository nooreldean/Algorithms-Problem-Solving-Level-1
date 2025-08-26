#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readarea()
{
    float r;
    cout << "*****************************" << endl;
    cout << "please enter radius of circle: ";
    cin >> r;
    return r;
}
float calculatearea(float r)
{
    float Pi = 3.14159265358979323846;
    float area= Pi * pow(r, 2);
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