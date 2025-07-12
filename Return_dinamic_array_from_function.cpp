#include<bits/stdc++.h>
using namespace std;

int* fun(){
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main(){
    int *x = fun();

    //If it static array, it's showed segmentation fault. Because Static array can't print from function.
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
}