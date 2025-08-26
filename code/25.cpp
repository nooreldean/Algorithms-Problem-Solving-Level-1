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
int readuntilagebetween(int from, int to)
{
    int age;
    do
    {
        age = readage();
    } while (!validanumberrange(age, from, to));
    return age;
}
void printvalidage(int age)
{
    cout << "your age is: "<< age << endl;
    cout << "***************************" << endl;
}
int main()
{
    printvalidage(readuntilagebetween(18, 45));
    return 0;
    
}