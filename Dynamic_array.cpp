#include<bits/stdc++.h>
using namespace std;

int main(){
    //int a[5];  Static Array
    int *a = new int[5]; // Dynamic Array
    
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
}