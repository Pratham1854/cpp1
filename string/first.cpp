#include<iostream>
using namespace std;
int main(){
string a="abcd abc abd";
//cin>>a;
char target='a';
int l=a.length();
for(int i=0;i<=l;i++){
if(a[i]==target){
    cout<<i<<" ";
}
}
return 0;
}