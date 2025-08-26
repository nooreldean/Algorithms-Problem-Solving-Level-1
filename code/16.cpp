#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readarea(float &a , float &d)
{
    cout << "*****************************" << endl;
    cout << "please enter value of A: ";
    cin >> a;
    cout << "please enter value of D: ";
    cin >> d;
}
float calculatearea(float a, float d)
{
    return (a) * (sqrt(pow(d, 2) - pow(a, 2)));
}
void printarea(float area)
{
    cout << "*****************************" << endl;
    cout << "your area is: "<< area << endl;
    cout << "*****************************" << endl;
}
int main()
{
    float a, d;
    readarea(a, d);
    printarea(calculatearea(a, d));
    return 0;
    
}