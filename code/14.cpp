#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readnumbers(int &num1, int &num2 )
{
    cout << "*****************************" << endl;
    cout << "please enter your first number: ";
    cin >> num1;
    cout << "please enter your second number: ";
    cin >> num2;
    cout << "*****************************" << endl;
}

void swap(int &num1, int &num2 ,int &temp)
{
    temp = num1;
    num1 = num2;
    num2 = temp;
}
void printnumbers(int num1, int num2)
{
    
    cout << num1 <<endl;
    cout << num2 << endl;
    cout << "*****************************" << endl;
}
int main()
{
    int num1, num2,temp;
    readnumbers(num1, num2);
    printnumbers(num1, num2);
    swap(num1, num2,temp);
    printnumbers(num1, num2);
    return 0;
    
}