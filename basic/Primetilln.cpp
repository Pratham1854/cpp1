#include<iostream>
using namespace std;
 bool isprime(int n){
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}
void primetilln(int low,int high){
for(int i=low;i<high;i++){
    bool p=isprime(i);
    if(p){
        cout<<i<<" ";
    }
}
}
int main(){
    primetilln(5,50);
    return 0;
}