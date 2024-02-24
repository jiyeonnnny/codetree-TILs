#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    double n;
    cin>>n;
    cout<<fixed;
    cout.precision(1);
    cout<<30.48*n;
    return 0;
}