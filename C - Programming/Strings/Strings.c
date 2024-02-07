# In c no data type called string.
# Collection of characters in c we call as string.
# A character Array is a string it is ended with a null '\0'.

Example
/* Program to print the characters of string */

#include<stdio.h>
void main()
{
 char s[]="Hello";  // Initilizing the array of characters 
 int i;
 for(i=0;s[i]!='\0';i++)  // Rotating the loop until end of the characters in array
 {
   printf("%c\t",s[i]);   // Printing the string
 }
}
