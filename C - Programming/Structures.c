// Structures
/* it is a user defined seconady datatype which is a collection a diffrent datatypes which are in contigios memory locations */

Eg:
#include<stdio.h>
struct st
{
  char name[10];
  int age;
  float marks;
};
int main()
{
  struct st s= {"jaya",10,98.5};
  printf("%s %d %f\n",s.name,s.age,s.marks);
}
