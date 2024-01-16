// Templates
/* Templates allows functions and classes to operate with generic types.
-> This will allows a function (or) class to work on many diffrent data types.
-> This will used to over come the disadvantage of Function overloading */

#include<iostream>
using namespace std;
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
int main(){
    int intResult = maximum<int>(5, 10);
    double doubleResult = maximum<double>(4.9, 6.8);
    cout<<intResult<<endl;
    cout<<doubleResult<<endl;
    return 0;
}
