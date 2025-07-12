#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    char section;
    double math_marks;
    int cls;

    Student(char n[],int r,char sec, double marks, int c){
        strcpy(name,n);
        roll = r;
        section = sec;
        math_marks = marks;
        cls = c; 
    }
};

int main(){
    char f_name[] = "Jamshed";
    Student first(f_name,2,'A',93.50,6);
    char s_name[] = "Mumir";
    Student second(s_name,1,'A',97.00,9);
    char t_name[] = "Esha";
    Student third(t_name,3,'B',85.00,5);


   Student highest = first;

   if(second.math_marks > highest.math_marks){
    highest = second;
   }
   if(third.math_marks > highest.math_marks){
    highest = third;
   }

   cout << highest.name << " " << highest.roll << " " << highest.section << " " << highest.math_marks << " " << highest.cls << endl;
    return 0;
}