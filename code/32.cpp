#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readnumber()
{
    int num;
    cout << "please enter a number: ";
    cin >> num;
    return num;
}
int readpower()
{
    int num;
    cout << "please enter a power: ";
    cin >> num;
   
    return num;
}
int powerofM(int num, int power)
{
    cout << "*****************************" << endl;
    if (power == 0)
        return 1;
    int p= 1;
    for (int i = 1; i <= power; i++)
    {
        p = p * num;
    }
    return p;
    
}
int main()
{

    cout  << powerofM(readnumber(), readpower()) << endl;
    return 0;
}