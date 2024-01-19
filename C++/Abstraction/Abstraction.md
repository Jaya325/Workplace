# Abstraction 
  - displaying only essential information and hiding the details
  - Data abstraction – This type only shows the required information about the data and hides the unnecessary data
  - Control Abstraction – This type only shows the required information about the implementation and hides unnecessary information.
-eg:
```
#include <iostream>
using namespace std;
class hello{
    private:
      int a,b;
    public:
     void world(int x,int y)
    {
      a=x;
      b=y;
    }
        void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

};
int main()
{
    hello h;
    h.world(10,20);
    h.show();
    return 0;
}
```
