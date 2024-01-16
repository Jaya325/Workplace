# Inheritance
/*
->  It is popularly used techniq in Opps concepts for code reusability 
->  We are created a base class which contains x,y attributes 
-> Through the base class we are going to create a derived class through we create the objects 
There are different types of inheritances */
/* Imp : If the constructor is not a public we cannot call from outside of the class */

// Single  level Inheritance : A Derived class with only one base class 
#include <iostream>
using namespace std;
class Vechile{
public: 
 void drivevehicle() { cout<<"driving"<<endl; }
};
class car : public Vechile{
public:
 void getfuel() {cout<< "Tank Full"<<endl;}
};
int main()
{
  car c;
  c.getfuel();
  c.drivevehicle();
  return 0;
}


// Multilevel :A Derived class with base class and that base class is derived class of another 
#include<iostream>
using namespace std;
class Animal{};
class dog : public Animal{};
class GermanShapord : public dog {};
int main()
{
 return 0;
}


// Multiple Inheritance: A derived class with two or more base classes.
#include<iostream>
using namespace std;
class foo{
public:
foo() { cout<< "ola"<<endl;}
};
class foo1{
public:
foo1(){ cout<<"hola"<<endl;}
};
class good :public foo, public foo1{   // depending on class we are passing first that it will take we can change what ever we need like foo1,foo also .
public:
good(){ cout<<"be ready"<<endl;}
};
int main()
{
good g;
return 0;
}




// Heirarchical Inheritance : Multiple derived classes from the same base class. Eg: We have created a 2 or more Derived classes From the Single Base class 
#include<iostream>
using namespace std;
class Human{
public:
void breeting() { cout<<"I am breathing"<<endl;}
};
class boy:public Human{};
class girl:public Human{};
class gender :public Human{};
int main()
{
boy y;
y.breathing();
}


// Hybrid Inheritance: It is a combination of multiple and Heirarchical inheritance.
#include<iostream>
using namespace std;
class base{
public:
int x;
};
int main()
{
  base b;
  b.x=19;
}


// Multipath Inheritance : A derived class with two base classes and these two base classes have one common base class.
#include<iostream>
using namespace std;
class base{
int y;
};
int main()
{
  base b;
  b,y=10;
}
