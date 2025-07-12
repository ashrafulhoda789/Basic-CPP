#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    char name[100];
    char section;
    int total_marks;

    Student(int i, char n[], char s, int marks){
        id = i;
        strcpy(name,n);
        section = s;
        total_marks = marks;
    }
};
int main(){
    int t;
    cin >> t;

    while(t--){
        int ids;
        char names[100];
        char sec;
        int mark;

        cin >> ids >> names >> sec >> mark;
        Student first(ids, names, sec, mark);

        cin >> ids >> names >> sec >> mark;
        Student second(ids, names, sec, mark);

        cin >> ids >> names >> sec >> mark;
        Student third(ids, names, sec, mark);

        Student high_marks = first;

        if (second.total_marks > high_marks.total_marks || 
            (second.total_marks == high_marks.total_marks && second.id < high_marks.id)) {
            high_marks = second;
        }
        
        if (third.total_marks > high_marks.total_marks || 
            (third.total_marks == high_marks.total_marks && third.id < high_marks.id)) {
            high_marks = third;
        }

        cout << high_marks.id << " " << high_marks.name << " " << high_marks.section << " " << high_marks.total_marks << endl;
    
    }
    return 0;
}