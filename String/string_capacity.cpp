#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello world!";

    //cout << s.size() << endl;
    //cout << s.max_size() << endl;
    //cout << s.capacity() << endl;
    //s.clear();
    // if(s.empty()){
    //     cout << "Empty" << endl;
    // }else{
    //     cout << "Not empty" << endl;
    // }
    s.resize(15,'x');
    cout << s << endl;
    return 0;
}