#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void readnumber(int &num1, int &num2, int &num3)
{
    cout << "*************" << endl;
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;
    cout << "Enter your third number: ";
    cin >> num3;
}
int sumofnumber(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

void printnumber(int total)
{
    cout << "*************" << endl;
    cout <<"your sum is: "<< total << endl;
    cout << "*************" << endl;
}

int main()
{
    int num1, num2, num3;
    readnumber(num1, num2, num3);
    printnumber(sumofnumber(num1, num2, num3));
    return 0;
    
}