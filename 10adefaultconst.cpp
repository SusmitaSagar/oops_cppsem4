//cpp program for default constructor
#include<iostream>
using namespace std;
 class defaultconstructor{
     public:
     int a,b;
     defaultconstructor(){  //default constructor
         a=20;
         b=12;
     }
 };
 int main(){
     //defaultt const called autometically
     //after object is created
     defaultconstructor myobj;
     cout<<"a:"<<myobj.a<<endl<<"b:"<<myobj.b;
     return 1;
 }