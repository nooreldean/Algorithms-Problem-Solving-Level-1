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
float monthlyinstallment(float loanamount, float howmanymonths)
{
    return loanamount / howmanymonths;
}

    
int main()
{
    cout << "****************" << endl;
    float loanamount = readpositivenumber("please enter the loan amount: ");
    float howmanymonths = readpositivenumber("how many months: ");
    cout << "****************" << endl;
    cout << "monthly installment = " << monthlyinstallment(loanamount, howmanymonths) << endl;
    cout << "****************" << endl;
    return 0;
    
}