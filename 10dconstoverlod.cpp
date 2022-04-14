// constructor overloading
//more than one constructor in a class with same name
#include <iostream>
using namespace std;
class construct{
    public:
    float area;
    //constructor with no parameters{default constr}
    construct(){
        area = 0;
    }
    // parametrised constructor{2 parameter}
    construct(int a, int b)
    {
        area = a*b;
    }
    void display()
    {
        cout<<area<<endl;
    }
};
int main(){
    construct object;
    construct object2(5,6);

    object.display();
    object2.display();
    return 1;

}