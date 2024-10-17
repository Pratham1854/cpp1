#include<iostream>
using namespace std;
class SchoolMember{
    public:
    string name;
    static int number;
    SchoolMember(){
    }
    ~SchoolMember(){
    number--;
    }
};
class Teacher:public SchoolMember{
    int salary;
    public:
    Teacher(){
    number++;
    }
};
class Student:public SchoolMember{
    char grade;
    public:
    Student(){
    number++;
    }
};
int SchoolMember::number;
int main(){
Teacher *obj1=new Teacher;
Student *obj2=new Student;
Student *obj3=new Student;
cout<<"number of school members:"<<obj1->number;
return 0;
}