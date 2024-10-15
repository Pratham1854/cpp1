#include<iostream>
using namespace std;
int sumOfDigit(int n){
    int sum=0;
    while(n>0){
    int lastDigit=n%10;
    sum =sum+lastDigit;
    n=n/10;
}
return sum;
}
int main(){
int digit;
cout<<"enter a number"<<endl;
cin>>digit;
cout<<"sum of digit is :"<<sumOfDigit(digit)<<endl;
return 0;
}
