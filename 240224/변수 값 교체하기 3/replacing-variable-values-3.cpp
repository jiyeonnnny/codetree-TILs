#include <iostream>
using namespace std;
int main() {
    int a = 3;
    int b = 5;

    int tmp = a;
    a = b;
    b = tmp;

    cout<<a<<"\n";
    cout<<b<<"\n";
    return 0;
}