#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string readName()
{
    string name;
    cout << "*****************************" << endl;
    cout << "please enter your name: " << endl;
    getline(cin, name);
    return name;
}
void printName(string name)
{
    cout << "*****************************" << endl;
    cout << "Your name is: " << name << endl;
    cout << "*****************************" << endl;
}
int main()
{
    printName(readName());
    
    return 0;
    
}