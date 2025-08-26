#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readnumber(string message)
{
    float number=0;
    cout << message << endl;
    cin >> number;
    return number;
}
float sumnumbers()
{
    int sum = 0;
    int number = 0;
    int counter = 1;
    cout << "****************" << endl;
    number = readnumber("please enter number: " + to_string(counter) );
    while (number != -99)
    {
        sum += number;
        counter++;
        number = readnumber("please enter number: " + to_string(counter) );

    };
    cout << "****************" << endl;
    return sum;
    
}
int main()
{
    
    float sum = sumnumbers();
    
    cout << "sum = " << sum << endl;
    cout << "****************" << endl;

    return 0;
    
}