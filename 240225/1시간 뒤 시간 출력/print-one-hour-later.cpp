#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,h,m;
    cin >> s;
    h = s.substr(0,s.find(":"));
    int hh = 0;
    for(int i=0;i<h.size();i++){
        hh = hh*10+ h[i] - '0';
    }

    m = s.substr(s.find(":")+1);
    
    cout<<hh+1<<":"<<m;
    return 0;
}