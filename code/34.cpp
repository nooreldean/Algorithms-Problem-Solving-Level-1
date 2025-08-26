#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readtotalsales()
{
    float totalSales;
    cout << "Enter the total sales: ";
    cin >> totalSales;
    return totalSales;
}
float getcommissioncentage(float totalSales)
{
    if (totalSales >= 1000000)
    return 0.01;
    else if (totalSales >= 500000)
    return 0.02;
    else if (totalSales >= 100000)
    return 0.03;
    else if (totalSales >= 50000)
    return 0.05;
    else
    return 0.00;
}
float calculatetotalcommission(float totalSales)
{
    return getcommissioncentage(totalSales) * totalSales;

}
int main()
{
    cout << "****************" << endl;
    float totalSales = readtotalsales();
    cout << "****************" << endl;
    cout << "Commission percentage = " << getcommissioncentage(totalSales) << endl;
    cout << "Total commission = " << calculatetotalcommission(totalSales) << endl;
    cout << "****************" << endl;
    return 0;
    
}