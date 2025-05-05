#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int last;
    int rev=0;
    while(n>0){
    last =n%10;
    n=n/10;
    rev=(rev*10+last);
    }
return rev;
}

void Fact(int n){
    int f=1;
    for(int i=n;i>=1;i--){
        f=i*f;
    }
    cout<<"factorial is:"<<f;
}
void CountDigit(int n){
    int c2,c1=0;
    while(n>0){
        n=n/10;
        c1++;
        }
cout<<"total digit in number are:"<<c1<<endl;
}
void CheckPalindrome(int n){
int c3=reverse(n);
if(c3==n){
    cout<<"palindrome"<<endl;
}
else{
    cout<<"not palindrome"<<endl;
}
}
int main(){
int a;
cout<<"enter a number"<<endl;
cin>>a;
//cout<<reverse(a)<<endl;
//Fact(a);
//CountDigit(a);
CheckPalindrome(a);
return 0;
}