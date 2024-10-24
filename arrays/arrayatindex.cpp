#include <iostream>
using namespace std; 
int main(){
int n,k;
cout<<"enter number of elements"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}cout<<"enter target"<<endl;
cin>>k;
int ans=-1;
for(int i=0;i<n;i++){
 if(arr[i]==k){
    ans =i;
    break;
 }
 
}
cout<<ans;

return 0;
}