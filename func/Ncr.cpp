#include<iostream>
using namespace std;
long Fact(int n){
    long fact=1; //ncr=n!/r!(n-r)!
    for(int i=1;i<=n;i++){
         fact=fact*i;
    }
    return fact;
}
long NcR(long p,long q){
long ans =Fact(p)/(Fact(q)*Fact(p-q));
return ans;
}
int main(){
int a,n;
cout<<"enter value of N and R"<<endl;
cin>>a>>n;
cout<<NcR(a,n);
return 0;
}
