#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int readnumber()
{
    int num;
    cout << "*************" << endl;
    cout << "please Enter your number: ";
    cin >> num;
    return num;
}

float calculatehalfnumber(int num)
{
    return (float)num / 2;
}
void printnumber(int num)
{
    string result = "half of " + to_string(num) + " is " + to_string(calculatehalfnumber(num));
    cout << "*************" << endl;
    cout << result << endl;
    cout << "*************" << endl;
}


int main()
{
    printnumber(readnumber());
    return 0;
}