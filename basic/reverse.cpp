#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;

    int b=0;
    while(n!=0){
    a=n%10;
    b=b*10+a;
    n=n/10;

    }
    cout<<b;
    return 0;
}