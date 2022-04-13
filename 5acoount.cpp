// Write a class Account that reprents your bank account and then use it.
#include <iostream>
using namespace std;
class Account
{
public:
int balance = 2000;
   int acc_no;
    int amt_witdr(int y){
        balance = balance-y;
        return balance;
    }
    int amt_depo(int x){
        balance=balance+x;
        return balance;
    }
    double intrest (double rate, double time){
      double   simple_interest = balance - (balance*rate*time)/100;
        return simple_interest;
    }};
int main(){
    Account myact ;
   cout<<myact.balance<<endl;
    cout<<myact.amt_witdr(500)<<endl;
   cout<< myact.amt_depo(300)<<endl;
  cout<<  myact.intrest(2,3)<<endl;
    return 0;
}
