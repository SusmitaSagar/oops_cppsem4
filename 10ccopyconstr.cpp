// copy constructor
// initializes an object using another object of same class
#include <iostream>
using namespace std;
class copyconstr{
    
    public:
    int x;
    copyconstr (int a) // parametrized constructor
    {
        x=a;
    }
    copyconstr(copyconstr & i)  // copy constructor
    {
        x = i.x;
    }
};
int main(){
  copyconstr myobj(3); // calling parametrised constr
  copyconstr myobjenew(myobj);// calling copy constr
  cout<<myobjenew.x;
  return 0;
}
    

