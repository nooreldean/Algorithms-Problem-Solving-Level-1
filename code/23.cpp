#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readnumbers(float &A, float &B , float &C)
{
    cout << "*****************************" << endl;
    cout << "please enter your first number: ";
    cin >> A;
    cout << "please enter your second number: ";
    cin >> B;
    cout << "please enter your third number: ";
    cin >> C;
}
float calculatearea(float A, float B, float C)
{
    float pi = 3.14159265358979323846;
    float p = (A + B + C) / 2;
    float t = (A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C)));
    float area = pi * pow(t, 2);
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
    float A, B, C;
    readnumbers(A, B, C);
    printarea(calculatearea(A, B, C));
    return 0;
}