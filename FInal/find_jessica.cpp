#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string jes="Jessica";
    bool is_true = false;

    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        if(word == jes)
        {
           is_true = true;
           break;
        }

    }
    if(is_true)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}