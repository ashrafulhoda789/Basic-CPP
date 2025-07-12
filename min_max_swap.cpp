#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    // if(a<b){
    //     cout << a << endl;
    // }else{
    //     cout << b << endl;
    // }

    cout << min({3,6,10,15,49,35,100}) << endl;
    cout << max({3,6,10,15,49,35,10}) << endl;
    
    swap(a,b);
    cout << a << " " << b << endl;
}    