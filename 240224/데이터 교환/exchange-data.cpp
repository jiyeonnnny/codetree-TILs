#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    int tmp = b;
    b = a;
    a = c;
    c = tmp;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    return 0;
}