#include <iostream>
using namespace std;

int main() {
int n;
cout<<"enter n "<<endl;
cin>>n;
int arr[n];
cout<<"enter sorted array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int target;
int start=0;
cout<<"enter target"<<endl;
cin>>target;
int end=n-1;
while(start<=end){
 int mid =(start+end)/2;
    if(arr[mid]==target){
    cout<<mid<<endl;
    return 0;
 }
    else if(arr[mid]<target){
    start=mid+1;

 }
    else{
    end=mid-1;
 }
}
}