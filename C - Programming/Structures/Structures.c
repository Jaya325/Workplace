// Structures
/* it is a user defined seconady datatype which is a collection a diffrent datatypes which are in contigious memory locations */

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
  struct st s= {"Hello",10,98.5};
  printf("%s %d %f\n",s.name,s.age,s.marks);
}

/* Accessing the structure members by pointers */
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
  struct st *s;
  s = (struct st *)malloc(sizeof(struct st));  // We are allocating memory in C when we are using pointer we must allocate some memory to it
  if (s == NULL) {
    printf("Memory allocation failed!\n");
    return 1;  // Exit with an error code
    }
   strcpy(s->name,"Hello");
   s->age = 20;
   s->marks = 95.2;
  printf("%s %d %f",s->name,s->age,s->marks);
  free(s);  // We are freeing the memory which we used for structure 
}



