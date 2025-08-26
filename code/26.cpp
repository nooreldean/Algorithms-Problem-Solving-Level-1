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

void printNumbersUpTowhile(int num)
{
    int counter = 0;
    cout << "range printed using while statement" << endl;
   
    while (counter < num)
    {
        counter++;
        cout << counter << endl;
    }
    cout << "*****************************" << endl;
}
void printNumbersUpTodowhile(int num)
{
    int counter = 0;
    cout << "range printed using do while statement" << endl;
    do
    {
        counter++;
        cout << counter << endl;
    } while (counter < num);
    cout << "*****************************" << endl;
}
void printNumbersUpTofor(int num)
{
    int counter = 0;
    cout << "range printed using for statement" << endl;
    for (counter = 1; counter <= num; counter++)
    {
        cout << counter << endl;
    }
    cout << "*****************************" << endl;
}



int main()
{
    int num= readnumber();
    printNumbersUpTowhile(num);
    printNumbersUpTodowhile(num);
    printNumbersUpTofor(num);
    return 0;

}