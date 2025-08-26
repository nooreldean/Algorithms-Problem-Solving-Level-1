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
float calculateremainder(float totalbill, float totalcashpaid)
{
    return totalcashpaid - totalbill;
}
int main()
{
    cout << "****************" << endl;
    float totalbill = readpositivenumber("please enter the total bill: ");
    float totalcashpaid = readpositivenumber("please enter the total cash paid: ") ;
    cout << endl;
    cout << "total bill = " << totalbill << endl;
    cout << "total cash paid = " << totalcashpaid << endl;
    cout << "****************" << endl;
    cout << "remainder = " << calculateremainder(totalbill, totalcashpaid) << endl;
    cout << "****************" << endl;
    return 0;
}