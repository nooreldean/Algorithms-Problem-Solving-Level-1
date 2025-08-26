#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enmonthofyear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 };
int readnumberinrange(string message, int from, int to)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < from || number > to);
    return number;
}
enmonthofyear readmonthofyear()
{
    return (enmonthofyear)readnumberinrange("please enter month number [1 to 12]: ", 1, 12);
}
string getmonthofyear(enmonthofyear month)
{
    cout << "****************" << endl;
    switch (month)
    {
    case enmonthofyear::Jan:
        return "January";
    case enmonthofyear::Feb:
        return "February";
    case enmonthofyear::Mar:
        return "March";
    case enmonthofyear::Apr:
        return "April";
    case enmonthofyear::May:
        return "May";
    case enmonthofyear::Jun:
        return "June";
    case enmonthofyear::Jul:
        return "July";
    case enmonthofyear::Aug:    
        return "August";
    case enmonthofyear::Sep:
        return "September";
    case enmonthofyear::Oct:
        return "October";
    case enmonthofyear::Nov:
        return "November";
    case enmonthofyear::Dec:
        return "December";
    default:
        return "not a valid month";
    }
}

int main()
{
    cout << "****************" << endl;
    cout << getmonthofyear(readmonthofyear()) << endl;
    cout << "****************" << endl;
    return 0;
    
}