//program to make use of inline function.
// if very less work is going on in function,we make it inline.
  //when less codes are there in fn
  // dont aplly when its recursion
#include<iostream>
using namespace std;
 inline int product(int a ,int b){ 
    return a*b;
}
 int main(){
     int a, b;
     cout<<"enter value of a and b";
     cin>>a>>b;
     // the fn down here is replace dby the// int product(int a ,int b){ 
    //return a*b;// the line by using inline.
    // fn call is replaced by function code in compilation time.
     cout<<"the sum of a and b is"<<product(a,b)<<endl; 
     cout<<"the sum of a and b is"<<product(a,b)<<endl;
     cout<<"the sum of a and b is"<<product(a,b)<<endl;
     cout<<"the sum of a and b is"<<product(a,b)<<endl;
     

     return 0;
 }

