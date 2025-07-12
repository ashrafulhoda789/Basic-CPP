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

//Dynamic Object
Student* fun(){
    Student* karim = new Student(2,5,5.00);
    return karim;
}

int main(){
    
    Student* p = fun();
    Student* rahim = new Student(10,5,4.56);
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    cout << rahim->roll << " " << rahim->cls << " " << rahim->gpa << endl;
    return 0;
}