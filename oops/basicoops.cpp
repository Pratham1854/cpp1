#include<iostream>
using namespace std;
class vehicle{
int noOfTyres;
int power;
public:
vehicle(){
cout<<"vehicle constructor called"<<endl;
}
~vehicle(){
cout<<"vechicle distructor"<<endl;
}
};
class car:public vehicle{
string color;
public:
car(string clr){
    cout<<"car constructor"<<endl;
    this->color=clr;
}
string getColor(){
return this->color;
}
~car(){
cout<<"car destructor"<<endl;
}
};
int main(){
car harrier("brown");
cout<<harrier.getColor()<<endl;
return 0;
}