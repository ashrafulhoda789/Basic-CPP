#include<bits/stdc++.h>
using namespace std;
long long int* sort_it(long long int n){
    long long int* a = new long long int[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a,a+n,greater<long long int>());

    return a;
}
int main(){
    long long int n;
    cin >> n;

    long long int* x = sort_it(n);

    for(int i=0; i<n; i++){
        cout << x[i] << " ";
    }
    return 0;
}