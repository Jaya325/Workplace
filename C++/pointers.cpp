// What is pointers
// It is a secondary derived data type which is used to store the address of the another variable 

Example:
#include<iostream>
using namespace std;
int main()
{
  int a=10,*p;
  p=&a;
  cout<<*p<<endl;
}
