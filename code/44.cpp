#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum endayofweek { sat = 1, sun = 2, mon = 3, tue = 4, wed = 5, thu = 6, fri = 7};
int readpositivenumber(string message, int from, int to)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < from || number > to);
    return number;
}
endayofweek readdayofweek()
{
    return (endayofweek)readpositivenumber("please enter day number (sat=1, sun=2, mon=3, tue=4, wed=5, thu=6, fri=7)", 1, 7);
}
string getdayofweek(endayofweek day)
{
    cout << "****************" << endl;
    switch (day)
    {
    case endayofweek::sat:
        return "saturday";
    case endayofweek::sun:
        return "sunday";
    case endayofweek::mon:
        return "monday";
    case endayofweek::tue:
        return "tuesday";
    case endayofweek::wed:
        return "wednesday";
    case endayofweek::thu:
        return "thursday";
    case endayofweek::fri:
        return "friday";
    default:
        return "not a valid day";
    }
}
int main()
{
    cout << "****************" << endl;
    cout << getdayofweek(readdayofweek()) << endl;
    cout << "****************" << endl;
    return 0;
    
}