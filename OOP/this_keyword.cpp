#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa){
        //this is the pointer of class
        //It's can also use through (*this).roll = roll
        this -> roll = roll;
        this -> cls = cls;
        this -> gpa = gpa;
    }

    void display(){
        cout << roll << " " << cls << " " << gpa << endl;
    
    }
};

int main(){
    
    Student rahim(45,5,3.5);
    rahim.display();
    Student karim(2,5,5);
    karim.display();

   return 0;
}