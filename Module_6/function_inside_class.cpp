#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name,int roll,int math, int english){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total(){
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main(){
    
    Student stu("Ashraful Hoda Jamshed",21,85,92);
    stu.total();
    Student stu1("Muktade Tabassum",20,65,95);
    stu1.total();
    
    return 0;
}