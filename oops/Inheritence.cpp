#include<iostream>
using namespace std;
class Rectangle{
public:
int l;
int b;
Rectangle(int l,int b){
    this->l=l;
    this->b=b;
}
int perimeter(){
return 2*(l+b);
}
int area(){
return l*b;
}
};
class Square:public Rectangle{
public:
Square(int side):Rectangle( side,side){  
}
};
int main(){
Square s1(6);
cout<<"area is:"<<s1.area()<<endl;
cout<<"Perimeter is:"<<s1.perimeter();
return 0;
}