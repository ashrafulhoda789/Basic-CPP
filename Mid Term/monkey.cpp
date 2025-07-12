#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[1000001];
    char ch[1000001];

    while(cin.getline(s,1000001)){
        int j = 0;
        for(int i=0; s[i]!='\0'; i++){
            if(s[i] != ' '){
                ch[j] = s[i];
                j++;
            }
        }

        ch[j] = '\0';

        sort(ch,ch+j);
        cout << ch << endl;
    }
    return 0;
}