#include<iostream>
using namespace std;
bool isprime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        
        if(n%i==0){
            count++;
        } 
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}
void PrimeN(int start,int end){
    for(int i=start;i<=end;i++){
        if(isprime(i)==true){
            cout<<i<<" ";
        }
    }
}

int main(){
int a,n;
cout<<"enter start and end"<<endl;
cin>>a>>n;
PrimeN(a,n);
return 0;
}
