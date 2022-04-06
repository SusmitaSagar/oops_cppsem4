// write a function power() which raise a number m  to a power n. the fn takes double value of
// m and integer value of n returns the result. use a default value of n is 2 to make the
//  function  to calculate squares when this argument is omitted.
#include <iostream>
using namespace std;
double power(double x, int y = 2) // input by user
{  // this fn will calculate power
    double answer = 1;
    for (int i = 1; i <= y; i++)
    {
        answer = answer * x;
    }

    return answer;
}
int main()
{
    double m, answer;
    int n = 2;
    // int n; // if value is  not default
    //  cout << "enter the value of m and n ";
    // cin>>m;  // if n is not default, ask
    cout << power(3, n) << endl;
    cout << power(3, 4);

    return 0;
}
//////
