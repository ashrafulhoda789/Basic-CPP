#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    int marks;
};

int main(){

    int n;
    cin >> n;

    Student arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    Student maxMarks = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i].marks > maxMarks.marks){
            maxMarks = arr[i];
        }
    }

    cout << maxMarks.name << " " << maxMarks.roll << " " << maxMarks.marks << endl;

    
    return 0;
}