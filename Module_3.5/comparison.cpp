#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    char s;
    cin >> s;
    int b; 
    cin >> b;

    if((a>b && s=='>') || (a<b && s=='<') || (a==b && s=='=')){
        cout << "Right" << endl;
    }else{
        cout << "Wrong" << endl;
    }
    return 0;
}