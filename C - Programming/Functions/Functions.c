// Functions is a set of instructions are placed together to perform a specific task 
// The main purpose of using functions is to achive Modularity and Reusability

Eg:
/* Program to add two numbers using functions */
#include<stdio.h>
int sum(int x, int y)
{
  int z;
  z= x+y;
  return z;
}
int main()
{
 int x,y,z;
 printf(" enter the values of x and y: ");
 scanf("%d %d",&x,&y);
 z=sum(x,y);
 printf("sum of z is %d\n",z);
}
