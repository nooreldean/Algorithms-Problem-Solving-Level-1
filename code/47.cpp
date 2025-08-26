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
float totalmonths(float loanamount, float monthlypayment)
{
    return loanamount / monthlypayment;
}
int main()
{
    cout << "****************" << endl;
    float loanamount = readpositivenumber("please enter the loan amount: ");
    float monthlypayment = readpositivenumber("please enter the monthly payment: ");
    cout << "****************" << endl;
    cout << "total months = " << totalmonths(loanamount, monthlypayment) << endl;
    cout << "****************" << endl;
    return 0;
}