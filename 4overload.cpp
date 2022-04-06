// program to show that the efeect of default argument 
//can be alternatively achieved by overloading

#include <iostream>
using namespace std;
int power(int x, int y)
{
    int answer = 1;
    for (int i = 1; i <= y; i++)
    {
        answer = answer * x;
    }
    return answer;
}

int power(int x)
{
    int y = 2;
    int answer = 1;
    for (int i = 1; i <= y; i++)
    {
        answer = answer * x;
    }
    return answer;
}

int main()
{
    int m, answer;
    int n;

    cout << power(3, 4) << endl;

    cout << power(3);

    return 0;
}