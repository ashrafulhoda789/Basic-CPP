#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool cmp(Student l, Student r){
    if(l.total_marks > r.total_marks){
        return true;
    }else if(l.total_marks < r.total_marks) {
        return false;
    }else{
        if(l.id < r.id){
            return true;
        }else{
            return false;
        }
    }
}

int main(){

    int n;
    cin >> n;

    Student stu[n];

    for(int i=0; i<n; i++){
        cin >> stu[i].name >> stu[i].cls >> stu[i].sec >> stu[i].id >> stu[i].math_marks >> stu[i].eng_marks;
        stu[i].total_marks = stu[i].math_marks + stu[i].eng_marks;
    }
        
    sort(stu,stu+n,cmp);


    for(int i=0; i<n; i++){
        cout << stu[i].name << " " << stu[i].cls << " " << stu[i].sec << " " << stu[i].id <<" " << stu[i].math_marks << " " << stu[i].eng_marks << endl;
    }
    
    return 0;
}