// parametric constructor
#include<iostream>
using namespace std;
class paramconstr
{
private:
    int a, b;
public:    // parametric constructor
    paramconstr(int a1, int b1){
        a= a1;
        b = b1;

    }
    int geta(){   // funcion to return a
        return a;
    }
    int getb(){    // fn to return b
        return b;
    }
};
int main(){  // driver code
  paramconstr myobj(10,4); //constructor called
 // access value assigned by constructor
 cout<<"myobj.a1 ="<<myobj.geta()<<", myobje.b1 =" <<myobj.getb();
return 0;
}

