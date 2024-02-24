#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    vector<int> arr;
    string command; int num;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>command;
        if(command=="push_back"){
            cin >> num;
            arr.push_back(num);
        }
        else if(command=="pop_back"){
            arr.pop_back();
        }
        else if(command=="get"){
            cin >> num;
            cout<<arr[num-1]<<"\n";
        }
        else{ // size
            cout<<arr.size()<<"\n";
        }
    }

    return 0;
}