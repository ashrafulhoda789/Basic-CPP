#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;

    long long int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int count = 0;
    int i=0,j=n-1;

    while(i<j){
        if(a[i] != a[j]){
            count ++;
        }
        i++;
        j--;
    }

    if(count == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}