#include <bits/stdc++.h>
using namespace std;

int main() {
    int weight, height;
    cin >> weight >> height;

    weight += 8;
    height *= 3;

    cout<<weight<<"\n"<<height<<"\n"<<weight*height;
    return 0;
}