#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello world";
    //s[s.size()+1] = 'A';// We can't add character through this method
    //string s2 = "Hi";

    //s += s2; // append another string
    //s.append(s2); //append another string
    //s.push_back('A');//push a character to the last of string
    //s.pop_back();//remove the last character of string
    // s = s2;//assign string
    // s.assign("Gello");//assign string
    //s.erase(3,5);
    s.replace(6,0,"Bangladesh ");
    //s.insert(5,"Pias");
    cout << s << endl;
    return 0;
}