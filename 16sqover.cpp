#include <iostream>
using namespace std;
class Square
{
private:       // default contructor ,
    int value; // function to evaluate
               // operator to increment the value
               // display value
public:
    Square() : value(4)
    {
        // making default constructor, will work without it
        // name of constructor same as class
    }
    int evaluate()
    {
        return value * value; // this is not void , so will return sth
    }
    Square operator ++()
    { // for increasing value
        cout << "enter the value";
        cin >> value;
        ++value;
    }
    void display()
    {
        cout << evaluate()<<endl; // wont return anything
    }
};

int main()
{
    Square mysquare;
    ++mysquare;
    mysquare.display();

    return 0;
}
