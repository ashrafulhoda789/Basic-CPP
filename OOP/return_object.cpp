#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r,int c,double g){
        roll = r;
        cls = c;
        gpa = g;
    }

    void display(){
        cout << roll << " " << cls << " " << gpa << endl;
    }
};

Student fun(){
    Student karim(2,5,5);
    return karim;
}

int main(){
    Student rahim(45,5,3.5);
    rahim.display();
    
    Student obj = fun();
    obj.display();
    return 0;
}