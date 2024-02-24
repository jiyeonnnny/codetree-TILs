#include <iostream>
using namespace std;

int main() {
    string s,t;
    cin>>s>>t;
    string tmp = t;
    t = s;
    s = tmp;
    cout<<s<<"\n"<<t<<"\n";
    return 0;
}