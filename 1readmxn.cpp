// write C++ program to read a matrix of size mxn 
//from the keyboard and display the same on the screen.
#include <iostream>
using namespace std;

    void getarray(int a[10][10] , int x, int y); // x , y element of matrix
  int main()
  {
 int a[10][10] , m , n , i , j;
 cout<<"enter value of m and n";
 cin>>m>>n; // m, n are order of matrix.
 getarray(a,m,n);
 cout<<endl;
 
 cout<< "your matrix" <<endl;
 for ( i = 0; i < m; i++)
 {
    for (j = 0; j<n; j++)
    {
      cout<<a[i][j]<<"\t";
    }
    cout<<endl;
 }
  return 0;  
}
void getarray(int a[10][10] , int x , int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<"enter element of matrix";
            cin>>a[i][j];
        }
    }
}

