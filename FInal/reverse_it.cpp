#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char sec;
    int id;
};

int main(){

    int n;
    cin >> n;

    Student stu[n];

    for(int i=0; i<n; i++){
        cin >> stu[i].name >> stu[i].cls >> stu[i].sec >> stu[i].id;
    }

    for(int i=0; i<n/2; i++){
        swap(stu[i].sec,stu[n-1-i].sec);
    }

    for(int i=0; i<n; i++){
        cout << stu[i].name << " " << stu[i].cls << " " << stu[i].sec << " " << stu[i].id << endl;
    }
    
    return 0;
}