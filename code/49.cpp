#include <iostream>
#include <string>
#include <cmath>
#include <iostream>


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
    do
    {
        pincode = readpincode();
    if (pincode == "1234")
    return true;
    else
    {
        cout << "****************" << endl;
        cout << "wrong pincode, please try again" << endl;
        std::cout << "\033[41;37m";
        cout << "****************" << endl;
    }
    } while (pincode != "1234");
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
    }
    cout << "****************" << endl;
    return 0;
    
}