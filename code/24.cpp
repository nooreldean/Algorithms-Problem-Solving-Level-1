#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readage()
{
    int age;
    cout << "**************************" << endl;
    cout << "please enter your age" <<endl;
    cin  >> age;
    cout << "**************************" << endl;
    return age;
}
bool validanumberrange(int number , int from, int to)
{
   return (number >= from && number <= to);
}
void printvalidage(int age)
{
    if (validanumberrange(age, 18, 45))
    {
        cout << "valid age" << endl;
        cout << "***************************" << endl;
    }
    else
    {
        cout << "invalid age" << endl;
        cout << "***************************" << endl;
    }
}
int main()
{
    printvalidage(readage());
    return 0;
    
}