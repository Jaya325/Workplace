// # Bit Manupulation
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

// Example to complementing a bit in a given number
#include<stdio.h>
void main()
{
  int num,pos;
  printf("enter the number\n");
  scanf("%d",&num);
  printf("enter the position you want to complement \n");
  scanf("%d",&pos);
  num=num ^1<<pos;
  printf("%d",num);
}

//Left shift operators 
/* To multiply the number we can do the shift operators we can achive */
#include<stdio.h>
void main()
{
  int num;
  printf("enter the number\n");
  scanf("%d",&num);
  num=num<<2; // Here the bit operation is hapening what ever we given number it will multipy with 2 similarly if we need multiplicaton of 3 we can do num<<3 times
  printf("num=%d\t",num);
}



