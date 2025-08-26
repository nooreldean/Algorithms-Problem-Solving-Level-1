#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void readmarks(int &mark1, int &mark2, int &mark3)
{
    cout << "*****************************" << endl;
    cout << "please enter your first mark: ";
    cin >> mark1;
    cout << "please enter your second mark: ";
    cin >> mark2;
    cout << "please enter your third mark: ";
    cin >> mark3;
}
int sumofmarks(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}
float calculateaverage(int mark1, int mark2, int mark3)
{
    return (float)sumofmarks(mark1, mark2, mark3) / 3;
}

void printmarks(float average)
{
    cout << "*****************************" << endl;
    cout << "your average mark is: "<< average << endl;
    cout << "*****************************" << endl;
}

int main()
{
    int mark1, mark2, mark3;
    readmarks(mark1, mark2, mark3);
    printmarks(calculateaverage(mark1, mark2, mark3));
    return 0;
    
}