#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readnumber()
{
    int num;
    cout << "*****************************" << endl;
    cout << "please enter a number: ";
    cin >> num;
    cout << "*****************************" << endl;
    return num;
}
void Powerof2_3_4(int num)
{
    int a,b,c;
    a=num*num;
    b=num*num*num;
    c=num*num*num*num;
    cout << "Power of 2 is: " << a << endl;
    cout << "Power of 3 is: " << b << endl;
    cout << "Power of 4 is: " << c << endl;
    cout << "*****************************" << endl;
}
int main()
{
    
    Powerof2_3_4(readnumber());
    return 0;
    
}