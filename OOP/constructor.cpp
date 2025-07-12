#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c, double g){
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }

    void display(){
        cout << roll << " " << cls << " " << gpa << endl;
    
    }
};

int main(){
    
    Student rahim;
    cin >> rahim.roll >> rahim.cls >> rahim.gpa;
    rahim.display();

    Student karim;
    cin >> karim.roll >> karim.cls >> karim.gpa;
    karim.display();

   return 0;
}