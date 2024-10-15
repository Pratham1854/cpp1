#include<iostream>
using namespace std;
long Fact(int n){//permutation
    long fact=1; //Npr=n!/n-r!
    for(int i=1;i<=n;i++){
         fact=fact*i;
    }
    return fact;
}
long NpR(long p,long q){
long ans =Fact(p)/(Fact(p-q));
return ans;
}
int main(){
int a,n;
cout<<"enter value of N and R"<<endl;
cin>>a>>n;
cout<<NpR(a,n);
return 0;
}
