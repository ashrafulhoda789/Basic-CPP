#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    string country;
    int jersy;
    Cricketer(string country, int jersy){
        this->country = country;
        this->jersy = jersy;
    }
};

int main(){
    Cricketer* dhoni = new Cricketer("India",7);
    Cricketer* kholi = new Cricketer("India",15);

    // kholi->country = dhoni->country;
    // kholi->jersy = dhoni->jersy;
    *kholi = *dhoni;

    delete dhoni;

    cout << kholi->country << " " << kholi->jersy << endl;
    return 0;
}