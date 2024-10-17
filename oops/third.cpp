#include<iostream>
using namespace std;
class Vehicle{
    int speed;
    int volume;
    int acceleration;
    int time;
    public:
    Vehicle(int s,int v,int a,int t){
        speed=s;
        volume=v;
        acceleration=a;
        time=t;
    }
    void move(){
        cout<<"speed:"<<speed<<endl;
        cout<<"Acceleration:"<<acceleration<<endl;
        cout<<"Time:"<<time<<endl;
    }
    void SetSpeed(int ispeed){
        speed=ispeed;
    }
    void speedup(){
        speed=speed+acceleration*time;
    }
    void speedDown(){
        speed=speed-acceleration*time;
        if(speed<0){
            speed=0;
        }
    }

};
int main(){
Vehicle obj1(5,2,2,1);
obj1.move();
obj1.SetSpeed(20);
obj1.move();
obj1.speedup();
obj1.move();
obj1.speedDown();
return 0;
}