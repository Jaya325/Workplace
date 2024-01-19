// Templates

Eg:
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
