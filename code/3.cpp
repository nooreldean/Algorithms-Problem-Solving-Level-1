#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum ennumbertype { odd=1, even=2};

int readNumber()
{
    int number;
    cout << "*****************************" << endl;
    cout << "please enter a number: " << endl;
    cin >> number;
    return number;
}
ennumbertype checknumbertype(int num)
{
    int result =num%2;
    if (result==0)
        return ennumbertype::even;
    else
        return ennumbertype::odd;
    
}
void printnumbertype(ennumbertype numbertype)
{
    if (numbertype== ennumbertype::even)
      { cout << "*****************************" << endl;
        cout << "number is even" << endl;
        cout << "*****************************" << endl;
      }
        else
    {
        cout << "*****************************" << endl;
        cout << "number is odd" << endl;
        cout << "*****************************" << endl;
    }
}
int main()
{
    printnumbertype(checknumbertype(readNumber()));

    return 0;
   
    
}