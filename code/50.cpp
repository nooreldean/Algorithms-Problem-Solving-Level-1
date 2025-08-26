#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string readpincode()
{
    string pincode;
    
    cout << "please enter the pincode: ";
    cin >> pincode;
    return pincode;
}
bool login()
{
    string pincode;
    int count = 3;
    do
    {
        count--;
        pincode = readpincode();
        if (pincode == "1234")
        return true;
        else
        {
            cout << "****************" << endl;
            cout << "wrong PIN,you have " << count << " more tries" << endl;
            system ("color 4F");
            cout << "****************" << endl;
        }
    } while (count >=1 && pincode != "1234");
    return false;
}
   
int main()
{
    cout << "****************" << endl;
    if (login())
    {
        std::cout << "\033[42;37m";
        cout << "****************" << endl;
        cout << "your account balance is " << 7500 << endl;
        cout << "****************" << endl;

        }
    else
    {
        std::cout << "\033[41;37m";
        cout << "****************" << endl;
        cout << "your card is blocked,call the bank for help" << endl;
        cout << "****************" << endl;
        
    }
    return 0;
    
}