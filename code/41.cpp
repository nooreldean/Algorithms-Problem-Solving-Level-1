#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readpositivenumber(string message)
{
    float number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
float hourstodays(float Numberofhours)
{
    return (float)Numberofhours / 24;
}
float hourstoweeks(float Numberofhours)
{
    return (float)Numberofhours / (24 * 7);
}
float daystoweeks(float Numberofdays)
{
    return (float)Numberofdays / 7;
}

int main()
{
    cout << "****************" << endl;
    float Numberofhours = readpositivenumber("please enter the number of hours: ");
    float Numberofdays = hourstodays(Numberofhours);
    float Numberofweeks = daystoweeks(Numberofdays);
    cout << endl;
    cout << "****************" << endl;
    cout << "total hours = " << Numberofhours << endl;
    cout << "total days = " << Numberofdays << endl;
    cout << "total weeks = " << Numberofweeks << endl;
    cout << "****************" << endl;
    return 0;
    
}