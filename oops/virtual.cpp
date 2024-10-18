#include<iostream>
using namespace std;
class drinks{
  public:
  virtual void getname();
  virtual void drinkfeeling();  
};
class water :public drinks{
    public:
    void getname(){
        cout<<"water"<<endl;
    }
    void drinkfeeling(){
        cout<<"water-drinkFeeling"<<endl;
    }
};
class milk :public drinks{
    public:
    void getname(){
        cout<<"Milk"<<endl;
    }
    void drinkfeeling(){
        cout<<"Milk-drinkFeeling"<<endl;
    }
};
int main(){
water obj1;
milk obj2;
obj1.getname();
obj2.getname();
obj1.drinkfeeling();
obj2.drinkfeeling();
return 0;
}