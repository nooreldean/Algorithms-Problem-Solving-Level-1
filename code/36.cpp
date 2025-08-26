#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enoparationtype { add = '+', subtract = '-', multiply = '*', divide = '/' };
float readnumber(string message)
{
    float number=0;
    cout << message << endl;
    cin >> number;
    return number;
}
enoparationtype readoptype()
{
    char ot ='+';
    cout << "please enter operation type (+, -, *, /): ";
    cin >> ot;
    return (enoparationtype)ot;
}
float calculate(float number1, float number2, enoparationtype optype)
{
    switch (optype)
    {
        case enoparationtype::add:
            return number1 + number2;
        case enoparationtype::subtract:
            return number1 - number2;
        case enoparationtype::multiply:
            return number1 * number2;
        case enoparationtype::divide:
            return number1 / number2;
        default:
            return number1 + number2;
    }
}
int main()
{
    cout << "****************" << endl;
    float number1 = readnumber("please enter the first number: ");
    float number2 = readnumber("please enter the second number: ");
    enoparationtype optype = readoptype();
    cout << "****************" << endl;
    cout << "result = " << calculate(number1, number2, optype) << endl;
    cout << "****************" << endl;
    return 0;
    
}