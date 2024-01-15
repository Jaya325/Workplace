# Inheritance
/*
->  It is popularly used techniq in Opps concepts for code reusability 
->  We are created a base class which contains x,y attributes 
-> Through the base class we are going to create a derived class through we create the objects 
There are different types of inheritances 
*/
// Single  level Inheritance : A Derived class with only one base class 
#include<iostream.h>
using namespace std;
class base
public{
  int x;
  int y;
};
int main()
{
  int x,y;
  cin>>x;
  cin>>y;
}


// Multilevel :A Derived class with base class and that base class is derived class of another 
#include<iostream>
using namespace std;
class base{
public:
 Cin>>x;
};
int main()
{
  base b1;
  b1.x(10);
}



// Multiple Inheritance: A derived class with two or more base classes.
#include<iostream>
using namespace std;
class base{
public:
 int x :{ cout<< "enter the int value" << endl;}
};
int main()
{
 base b;
 b.x = 12;
}



// Heirarchical Inheritance : Multiple derived classes from the same base class. Eg: We have created a 2 or more Derived classes From the Single Base class 
#include<iostream>
using namespace std;
class base{
public:
int x { cout<<"int"<<endl;}
};
int main()
{
  base b;
  b.x=10;
}

// Hybrid Inheritance: 

