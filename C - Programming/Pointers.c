/* Pointer is a secondary derived data type */
/* Which will hold the address of the another varible through pointers we can change the value of that varible */

#include<stdio.h>
int main()
{
int a=10,*p;
p=&a;
printf("you enterd number = %d",*p);
}

/* Double pointers */

#include<stdio.h>
void main()
{
  int a=5,*p,**q;
  p = &a;
  q = &p;
  printf("%d\n",*p);  // We are printing tha variable a throuh pointer p 
  printf("%d\n",**q); // Here both pointers will give same result but q holding the address of p and p is also a pointer which will hold address of the variable a 
}
