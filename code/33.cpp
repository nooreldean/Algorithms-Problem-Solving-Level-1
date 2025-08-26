#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readnumberinrange (int from, int to)
{
    int grade;
    do
    {
    cout << "****************" << endl;
       cout << "please enter a number between " << from << " and " << to << ": ";
       cin >> grade;
    }
     while (grade < from || grade > to);
    return grade; 

    
}
char getgradelatter (int grade)
{
    cout << "****************" << endl;
    if (grade >= 90)
    return 'A';
    else if (grade >= 80)
    return 'B';
    else if (grade >= 70)
    return 'C';
    else if (grade >= 60)
    return 'D';
    else if (grade >= 50)
    return 'E';
    else
    return 'F';
    cout << "****************" << endl;
}
int main()
{
   int number = readnumberinrange(0, 100);
   char grade = getgradelatter(number);
   cout << "Your grade is " << grade << endl;
   cout << "****************" << endl;
    return 0;
    
}