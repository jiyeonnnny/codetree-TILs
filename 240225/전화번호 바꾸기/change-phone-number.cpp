#include <bits/stdc++.h>
using namespace std;

int main() {
    string phone;
    cin >> phone;

    phone = phone.substr(phone.find('-')+1);
    string front = phone.substr(0,phone.find('-'));
    phone = phone.substr(phone.find('-')+1);
    string back = phone;

    cout<<"010-"<<back<<"-"<<front<<"\n";

    return 0;
}