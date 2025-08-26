#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct stpiggybankcontent
{
    int pennies, nickels, dimes, quarters,dollars;
};
stpiggybankcontent readpiggybankcontent()
{
    stpiggybankcontent piggybankcontent;
    cout << "****************" << endl;
    cout << "please enter the total of pennies: ";
    cin >> piggybankcontent.pennies;
    cout << "please enter the total of nickels: ";
    cin >> piggybankcontent.nickels;
    cout << "please enter the total of dimes: ";
    cin >> piggybankcontent.dimes;
    cout << "please enter the total of quarters: ";
    cin >> piggybankcontent.quarters;
    cout << "please enter the total of dollars: ";
    cin >> piggybankcontent.dollars;
    return piggybankcontent;
}
int calculatetotalpennies(stpiggybankcontent piggybankcontent)
{
    int totalPennies = piggybankcontent.pennies * 1
                     + piggybankcontent.nickels * 5
                     + piggybankcontent.dimes * 10
                     + piggybankcontent.quarters * 25
                     + piggybankcontent.dollars * 100;
    return totalPennies;
}    
int main()
{
    int totalPennies = calculatetotalpennies(readpiggybankcontent());
    cout << "****************" << endl;
    cout << "Total pennies = " << totalPennies << endl;
    cout << "Total dollars = " << (float)totalPennies / 100 << endl;
    cout << "****************" << endl;
    return 0;
    
}