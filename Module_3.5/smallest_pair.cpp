#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        int sum_ar;
        int min_sum = INT_MAX; 

        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                sum_ar = a[i] + a[j] + j - i;
                min_sum = min(sum_ar,min_sum);
            }
        }

        cout << min_sum << endl;
    }
    return 0;
}