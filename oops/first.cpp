#include<iostream>
using namespace std;
class student{
    string name;
    int marks[3];
    int age;
public:
student(string n,int m[],int a){
name=n;
marks[0]=m[0];
marks[1]=m[1];
marks[2]=m[2];
age=a;
} 
string get_name(){
    return name;
}   
int get_age(){
    return age;
}
int get_max(){
 int max = marks[0];
 if(marks[1]>=marks[0] && marks[1]>=marks[2]){
    max=marks[1];
 }
else if(marks[2]>=marks[0] && marks[2]>=marks[1]){
    max=marks[2];
 }
 return max;
}
};
int main(){
    int m[3]={50,60,70};
    student obj1("pratham",m,21);
    cout<<"name is:"<< obj1.get_name()<<endl;
    cout<<"age is:"<<obj1.get_age()<<endl;
    cout<<"max number:"<< obj1.get_max();
    return 0;
}