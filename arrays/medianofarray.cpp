#include <iostream>
using namespace std; 
int main(){
int n;
cout<<"enter number of elements"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
double ans;
if(n%2==0){
ans=double(arr[n/2-1]+arr[n/2])/2;
}
else{
    ans=arr[n/2];
}
cout<<"median:"<<ans;
return 0;

}
