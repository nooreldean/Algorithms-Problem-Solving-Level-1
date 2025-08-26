#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readpositivenumber(string massage)
{
    int num;
    do
    {
        cout << massage << endl;
        cin >> num;
    } while (num < 0);
    return num;
}
int factorial(int num)
{
    cout << "***********************" << endl;
    int f=1;
    for (int counter=num; counter>=1; counter--)
    {
        f=f*counter;
    }
    return f;
}
int main()
{
    cout << "***********************" << endl;
    cout << factorial(readpositivenumber("please enter a positive number: ")) << endl;
    cout << "***********************" << endl;
    return 0;
}