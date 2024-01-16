# Inheritance
/*
->  It is popularly used techniq in Opps concepts for code reusability 
->  We are created a base class which contains x,y attributes 
-> Through the base class we are going to create a derived class through we create the objects 
There are different types of inheritances 
*/
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
