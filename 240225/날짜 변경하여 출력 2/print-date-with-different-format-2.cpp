#include <bits/stdc++.h>
using namespace std;

int main() {
    string date;
    cin>>date;

    string month = date.substr(0,date.find('-'));
    date = date.substr(date.find('-')+1);
    string day = date.substr(0,date.find('-'));
    date = date.substr(date.find('-')+1);
    string year = date;

    cout<<year<<"."<<month<<"."<<day;

    return 0;
}