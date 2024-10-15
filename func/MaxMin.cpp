#include<iostream>
using namespace std;
int Max(int n ,int a){
    if(n>a){
        return n;
    }
    else{
        return a;
    }
}
int Min(int p ,int q){
    if(p>q){
        return q;
    }
    else{
        return p;
    }
}

int main(){
int a,n;
cout<<"enter two number"<<endl;
cin>>a>>n;
cout<<"MAX IS:"<<Max(n,a)<<endl;
cout<<"MIN IS:"<<Min(n,a)<<endl;
return 0;
}
