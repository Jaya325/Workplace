# What is pointers
 - It is a secondary derived data type which is used to store the address of the another variable

#include<iostream>
using namespace std;
int main()
{
  int a=10,*p;
  p=&a;
  cout<<*p<<endl;
}

# Smart Pointers
- In c++ this pointers are used to remove the chances of memory leak. There are 3 diffrent types of smart pointers
1. Unique pointer 
2. Shared Pointer
3. Week pointer */


# Unique pointer

#include<iostream>
using namespace std;

class foo{
  int x;
public:
  explicit foo(int x):x{x}{}
  int getx() {return x;}
};
int main()
{
  unique_ptr<foo>p1(new foo(10));
}


# Shared pointers
-std::shared_ptr is a smart pointer that retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object.




