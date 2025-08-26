#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readnumbers(int &num1, int &num2 ,int &num3)
{
    cout << "*****************************" << endl;
    cout << "please enter your first number: ";
    cin >> num1;
    cout << "please enter your second number: ";
    cin >> num2;
    cout << "please enter your third number: ";
    cin >> num3;
}
int maxofnumbers(int num1, int num2, int num3)
{
    if(num1 > num2 && num1 > num3)
        return num1;
    else if(num2 > num1 && num2 > num3)
        return num2;
    else
        return num3;
}
void printmax(int max)
{
    cout << "*****************************" << endl;
    cout << "your max number is: "<< max << endl;
    cout << "*****************************" << endl;
}
int main()
{
    int num1, num2, num3;
    readnumbers(num1, num2, num3);
    printmax(maxofnumbers(num1, num2, num3));
    return 0;
    
}