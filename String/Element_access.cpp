#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    cout << s[0] << endl;
    cout << s.at(3) << endl;
    cout << s[s.size()-1] << endl; //for print last index
    cout << s.back() << endl;//for print last index
    cout << s.front() << endl;//for print first index
    return 0;
}