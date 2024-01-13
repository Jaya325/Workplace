// Structures
/* it is a user defined seconady datatype which is a collection a diffrent datatypes which are in contigios memory locations */

Eg:
#include<stdio.h>
struct st
{
  char name
  int age;
  float marks;
}
int main()
{
  struct st s;
  s.name="hello";
  s.age=20;
  s.marks= 80;
  printf("%c %d %f\n",s.name,s.age,s.marks);
}
