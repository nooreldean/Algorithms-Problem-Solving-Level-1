#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readnumbers(int &num1, int &num2)
{
    cout << "*****************************" << endl;
    cout << "please enter your first number: ";
    cin >> num1;
    cout << "please enter your second number: ";
    cin >> num2;
}
int maxofnumbers(int num1, int num2)
{
    if(num1 > num2)
        return num1;
    else
        return num2;
}
void printmax(int max)
{
    cout << "*****************************" << endl;
    cout << "your max number is: "<< max << endl;
    cout << "*****************************" << endl;
}
int main()
{
    int num1, num2;
    readnumbers(num1, num2);
    printmax(maxofnumbers(num1, num2));
    return 0;
    
}