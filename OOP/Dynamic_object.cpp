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

   
};

//Static Object
// Student* fun(){
//     Student karim(2,5,5.00);
//     Student* p = &karim;
//     return p;
// }

int main(){
    
    Student karim(2,5,5.00);
    Student* rahim = new Student(10,5,4.56);
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    cout << rahim->roll << " " << rahim->cls << " " << rahim->gpa << endl;
    return 0;
}