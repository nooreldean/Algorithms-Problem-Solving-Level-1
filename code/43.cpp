#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct strtaskduration
{
    int numberofdays, numberofhours, numberofminutes, numberofseconds;
};
int readpositivenumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
strtaskduration secoundstotaskduration(int totalseconds)
{
    strtaskduration taskduration;
    const int secondsperday = 24 * 60 * 60;
    const int secondsperhour = 60 * 60;
    const int secondsperminute = 60;
    int remainder = 0;
    taskduration.numberofdays = floor(totalseconds / secondsperday);
    remainder = totalseconds % secondsperday;

    taskduration.numberofhours = floor(remainder / secondsperhour);
    remainder = remainder % secondsperhour;

    taskduration.numberofminutes = floor(remainder / secondsperminute);
    remainder = remainder % secondsperminute;

    taskduration.numberofseconds = remainder;
    
    return taskduration;
}
void printtaskduration(strtaskduration taskduration)
{
    cout << "****************" << endl;
    cout << taskduration.numberofdays << ":"
         << taskduration.numberofhours << ":"
         << taskduration.numberofminutes << ":"
         << taskduration.numberofseconds << endl;
    cout << "****************" << endl; 
}
int main()
{
  int totalseconds = readpositivenumber("please enter the total seconds: ");
  printtaskduration(secoundstotaskduration(totalseconds));
  return 0;
    
}