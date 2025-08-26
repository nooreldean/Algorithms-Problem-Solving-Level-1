#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enoddoreven { odd=1, even=2 };
int readnumber()
{
    int num;
    cout << "*****************************" << endl;
    cout << "please enter a number: ";
    cin >> num;
    cout << "*****************************" << endl;
    return num;
}
enoddoreven checkoddoreven(int num)
{
    if (num % 2 == 0)
    {
        return enoddoreven::even;
    }
    else
    {
        return enoddoreven::odd;
    }
}

int sumoddandevenfrom1ton_usingwhile(int num)
{
    int counter = 0;
    int sum = 0;
    cout << "sum odd numbers using while statement" << endl;
    while (counter < num)
    {
        counter++;
        if (checkoddoreven(counter) == enoddoreven::even)
        {
            sum += counter;
        }
    }
    return sum;
}
int sumoddandevenfrom1ton_usingdowhile(int num)
{
    int counter = 0;
    int sum = 0;
    cout << "sum odd numbers using do while statement" << endl;
    do
    {
        counter++;
        if (checkoddoreven(counter) == enoddoreven::even)
        {
            sum += counter;
        }
    } while (counter < num);
    return sum;
}
int sumoddandevenfrom1ton_usingfor(int num)
{
    
    
    int sum = 0;
    cout << "sum odd numbers using for statement" << endl;
    for (int counter = 1; counter <= num; counter++)
    {
        if (checkoddoreven(counter) == enoddoreven::even)
        {
            sum += counter;
        }
    }
    return sum;
}   
int main()
{
    int num= readnumber();
    cout << sumoddandevenfrom1ton_usingwhile(num) << endl;
    cout << sumoddandevenfrom1ton_usingdowhile(num) << endl;
    cout << sumoddandevenfrom1ton_usingfor(num) << endl;
    return 0;
    
}