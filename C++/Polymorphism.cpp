
// Polymorphism
/* It is mainly devided into the 2 types 1. Compiletime Polymorphism 2. Run time polymorphism 
We will see the both with an eg 
1. Compiletime Polymorphism
-a) Function Overloading
-b) Operator overloading
2. Runtime Polymorphism
- Function Overriding */

/* Function overloading: We have created the multile functions with same name but diffrent parameters. Which means we are passing diffrent parameters in both the functions but we created same function name lets see some eg */
#include<iostream>
using namespace std;
class base
{
 public:
 void fun(int x) {cout<<"integer value"<<endl;}
 void fun(float x) {cout<<"Float value"<<endl;}
};
int main()
{
  base b;
  b.fun(5);
  b.fun(34.46);
  return 0;
}

/* Operator Overloading :*/
/* Function Over riding*/
#include<iostream>
using namespace std;
class base{
int x;
public:
base():x(10){cout<<"base"<<endl;}
};
class derived{
int y;
public:
derived():y(20){cout<<"derived"<<endl;}
};
int main()
{
 derived d;
 d.y;
}
