#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
        return 1;
    else
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"enter the element to do factorial"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"factorial is "<<ans<<endl;
}