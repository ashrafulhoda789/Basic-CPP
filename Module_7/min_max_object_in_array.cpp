#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
};

int main(){

    int n;
    cin >> n;
    Student a[n];

    for(int i=0; i<n; i++){
       
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    //int min_object = INT_MAX;
    Student min_object;
    min_object.marks = INT_MAX;

    for(int i=0; i<n; i++){
        if(a[i].marks < min_object.marks){
            min_object = a[i];
        }
    } 

    cout << min_object.name << " " << min_object.roll << " " << min_object.marks << endl;
    
    return 0;
}