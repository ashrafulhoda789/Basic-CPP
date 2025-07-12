#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double d = 23.25678;
    cout << fixed << setprecision(3);
    cout << d << endl;
    return 0;
}