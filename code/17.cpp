#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readarea(int &a , int &h)
{
    cout << "*****************************" << endl;
    cout << "please enter height of triangle: ";
    cin >> a;
    cout << "please enter base of triangle: ";
    cin >> h;
}
float calculatearea(int a, int h)
{
    return (a/2)*h;
}
void printarea(float area)
{
    cout << "*****************************" << endl;
    cout << "your area is: "<< area << endl;
    cout << "*****************************" << endl;
}
int main()
{
    int a, h;
    readarea(a, h);
    printarea(calculatearea(a, h));
    return 0;
    
}