#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct fullname
{
    string firstname;
    string lastname;
};

fullname readfullname()
{
    fullname fullname;
    cout << "Enter your first name: ";
    cin >> fullname.firstname;
    cout << "Enter your last name: ";
    cin >> fullname.lastname;
    return fullname ;
}
string getfullname(fullname fullname,bool reverse)
{
    string result;
    if (reverse)
    {
      result = fullname.lastname + " " + fullname.firstname;
    }
    else
    {
      result = fullname.firstname + " " + fullname.lastname;
    }
    return result;
}
void printfullname(string result)
{
    cout << "*************" << endl;
    cout <<"your name is: "<< result << endl;   
    cout << "*************" << endl;
}
int main()
{
    printfullname(getfullname(readfullname(),true));
    return 0;
}
