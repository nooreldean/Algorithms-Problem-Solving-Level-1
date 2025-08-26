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
void printrangefromnto1_usingwhile(int num)
{
    int counter = num+1;
    cout << "range printed using while statement" << endl;
   
    while (counter > 1)
    {
        counter--;
        cout << counter << endl;
    }
    cout << "*****************************" << endl;
   
}
void printrangefromnto1_usingdowhile(int num)
{
    int counter = num+1;
    cout << "range printed using do while statement" << endl;
    do
    {
        counter--;
        cout << counter << endl;
    } while (counter > 1);
    cout << "*****************************" << endl;
}
void printrangefromnto1_usingfor(int num)
{
    int counter = num+1;
    cout << "range printed using for statement" << endl;
    for (counter = num; counter >= 1; counter--)
    {
        cout << counter << endl;
    }
    cout << "*****************************" << endl;
}
int main()
{
    int num= readnumber();
    printrangefromnto1_usingwhile(num);
    printrangefromnto1_usingdowhile(num);
    printrangefromnto1_usingfor(num);
    return 0;       
    
}