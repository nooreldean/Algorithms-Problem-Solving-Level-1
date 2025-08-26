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
strtaskduration readtaskduration()
{
    strtaskduration taskduration;
    cout << "****************" << endl;
    taskduration.numberofdays = readpositivenumber("please enter the number of days: ");
    taskduration.numberofhours = readpositivenumber("please enter the number of hours: ");
    taskduration.numberofminutes = readpositivenumber("please enter the number of minutes: ");
    taskduration.numberofseconds = readpositivenumber("please enter the number of seconds: ");
    return taskduration;
}
int taskdurationtotalseconds(strtaskduration taskduration)
{
    int durationinseconds = 0;
    durationinseconds = taskduration.numberofdays * 24 * 60 * 60;
    durationinseconds += taskduration.numberofhours * 60 * 60;
    durationinseconds += taskduration.numberofminutes * 60;
    durationinseconds += taskduration.numberofseconds;
    return durationinseconds;
}
int main()
{
    strtaskduration taskduration;
    taskduration = readtaskduration();
    cout << "****************" << endl;
    cout << "total duration = " << taskdurationtotalseconds(taskduration) << endl;
    cout << "****************" << endl;
    return 0;
    
}