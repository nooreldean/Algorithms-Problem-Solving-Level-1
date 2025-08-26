#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enpassfail{pass=1, fail=2};
int readnum()
{
    int Mark;
    cout << "*************" << endl;
    cout << "please enter your mark: ";
    cin >> Mark;
    return Mark;
}
enpassfail checkpassfail(int Mark)
{
    if (Mark >= 50)
        return enpassfail::pass;
    else
        return enpassfail::fail;
}
void printmark(int Mark)
{
    cout << "*************" << endl;
    if(checkpassfail(Mark) == enpassfail::pass)
        cout << "you passed "<<endl;
    else
        cout << "you failed "<<endl;
    cout << "*************" << endl;
}
int main()
{
    printmark(readnum());
    return 0;
    
}