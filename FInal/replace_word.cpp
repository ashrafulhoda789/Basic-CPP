#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s,s1;
        cin >> s >> s1;

        while(1){
            int is_find = s.find(s1);

            if(is_find != -1){
                s.erase(is_find,s1.size());
                s.insert(s.begin()+is_find,'#');
            }else{
                break;
            }
        }

        cout << s << endl;
    }
    return 0;
}