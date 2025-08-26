#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct stinfo
{
    int age;
    bool havealicense;
};
stinfo readInfo()
{
    stinfo info;
    cout << "*****************************" << endl;
    cout << "please enter your age: ";
    cin >> info.age;
    cout << "do you have a driver license: " <<"for yes enter 1, for no enter 0" << endl;
    cin >> info.havealicense;
    return info;
}
bool isaccepted(stinfo info)
{
    return (info.age>21 && info.havealicense);
}
void printaccepted(stinfo info)
{
    if (isaccepted(info))
    {
        cout << "*****************************" << endl;
        cout << "hired" << endl;
        cout << "*****************************" << endl;
    }
    else
    {
        cout << "*****************************" << endl;
        cout <<"rejected" << endl;
        cout << "*****************************" << endl;
    }
}

int main()
{
    printaccepted(readInfo());
  
    return 0;
    
}