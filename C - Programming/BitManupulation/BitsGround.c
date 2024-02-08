# Bit Manupulation
/* Eg About How to set bit, clear ,compliment a bit */

#include<stdio.h>
void main()
{
  int num,pos;
  printf("enter the number\n");
  scanf("%d",&num);
  printf("enter pos\n");
  scanf("%d",&pos); // Which pos you want to set 
  num=num|1<<pos;
  printf("%d",num);
}


// Example to clear a bit in a given number
#include<stdio.h>
void main()
{
  int num,pos;
  printf("enter the number\n");
  scanf("%d",&num);
  printf("enter the position you want to clear\n");
  scanf("%d",&pos);
  num=num & ~(1<<pos);
  printf("%d",num);
}

