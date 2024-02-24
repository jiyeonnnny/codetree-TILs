#include <bits/stdc++.h>

using namespace std;
int main() {
    string numbers;
    cin>>numbers;
    cout<<numbers.substr(0,numbers.find('-')) << numbers.substr(numbers.find('-')+1);
    return 0;
}