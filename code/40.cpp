#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readpositivenumber(string message)
{
    cout << "****************" << endl;
    float number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
float totalbillafterserviceandtax(float totalbill)
{
    totalbill = totalbill * 1.1;
    totalbill = totalbill * 1.16;
    return totalbill;
}
int main()
{
    float totalbill = readpositivenumber("please enter the total bill: ");
    cout << endl;
    cout << "****************" << endl;
    cout << "total bill = " << totalbill << endl;
    cout << "total bill after service and tax = "
     << totalbillafterserviceandtax(totalbill) << endl;
     cout << "****************" << endl;
    return 0;
    
}