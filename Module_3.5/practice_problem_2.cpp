#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    int jursy_no;
    char country[100];
};

int main(){
    Cricketer* dhoni = new Cricketer;
    dhoni->jursy_no = 7;
    strcpy(dhoni->country,"India");

    Cricketer* kholi = new Cricketer;

    kholi->jursy_no = dhoni->jursy_no;
    strcpy(kholi->country,dhoni->country);

    delete dhoni;

    cout << kholi->jursy_no << " " << kholi->country << endl;
    
    return 0;
}