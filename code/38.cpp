#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enprimnotprime { prime = 1, notprime = 2 };
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
enprimnotprime checkprime(int number)
{
    if (number < 2)
    return enprimnotprime::notprime;
    int M = round(number / 2);
    for (int counter = 2; counter <= M; counter++)
    {
        if (number % counter == 0)
        return enprimnotprime::notprime;
        
    }
    return enprimnotprime::prime;
}
void printnumbertype(int number)
{
    switch (checkprime(number))
    {
        case enprimnotprime::prime:
            cout << "****************" << endl;
            cout << "it is a prime number" << endl;
            cout << "****************" << endl;
            break;
        case enprimnotprime::notprime:
            cout << "****************" << endl;
            cout << "it is not a prime number" << endl;
            cout << "****************" << endl;
            break;
       
    }
}
int main()
{
    cout << "****************" << endl;
    printnumbertype(readpositivenumber("please enter a positive number:"));
    return 0;
    
}