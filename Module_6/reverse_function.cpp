#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin >> n;
    // int a[n];

    // for(int i=0; i<n; i++){
    //     cin >> a[i];
    // }
    string s;
    cin >> s;

    reverse(s.begin(),s.end());

    for(char i : s){
        cout << i;
    }
    return 0;
}