#include<iostream>
using namespace std;
class instrument{
public:
void MakeSound(){
cout<<"the instrument makes beautiful sound"<<endl;
}
};
class Erhu:public instrument{
public:
void MakeSound(){
cout<<"erhu is good to hear"<<endl;
}
};
class piano:public instrument{
public:
void MakeSound(){
cout<<"piano is pleasing"<<endl;
}
};
class violin :public instrument{
public:
void MakeSound(){
cout<<"voilin is shoking"<<endl;
}
};
int main(){
piano obj1;
obj1.MakeSound();
Erhu obj2;
obj2.MakeSound();
violin obj3;
obj3.MakeSound();
return 0;
}