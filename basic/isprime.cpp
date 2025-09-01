#include<iostream>
using namespace std;
bool isprime(int n){
       if (n <= 1) return false; 
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            return false;
        }
        
    }
     return true;
}
int main(){
    bool prime=isprime(50);
    if(prime){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}