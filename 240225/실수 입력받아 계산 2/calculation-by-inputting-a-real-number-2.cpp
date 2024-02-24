#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    double a;
    cin>>a;
    cout<<fixed;
    cout.precision(2);
    cout<<a+1.5;
    return 0;
}