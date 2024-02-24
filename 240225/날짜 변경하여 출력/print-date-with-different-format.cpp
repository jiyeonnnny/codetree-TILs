#include <iostream>
using namespace std;

int main() {
    string date;
    cin >> date;

    string year = date.substr(0,date.find('.'));
    date = date.substr(date.find('.')+1);
    string month = date.substr(0,date.find('.'));
    date = date.substr(date.find('.')+1);
    string day = date;

    cout<<month<<"-"<<day<<"-"<<year;
    return 0;
}