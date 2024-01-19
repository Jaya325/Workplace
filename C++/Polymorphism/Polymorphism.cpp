/* Function overloading: We have created the multile functions with same name but diffrent parameters. Which means we are passing diffrent parameters in both the functions but we created same function name lets see some eg */
Eg

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
#include <iostream>
using namespace std;
 
class Complex {
private:
    int real, imag;
 
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
 
    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};
 
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}

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
