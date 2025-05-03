#include<iostream>
using namespace std;
void input(int arr[],int n){
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
}
void output(int arr[],int n){
    cout<<"elements are:";
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
}
int main(){
int arr[10],size;
cout<<"enter size of array"<<endl;
cin>>size;
input(arr,size);
output(arr,size);
int large=arr[0], large2=arr[0];
for(int i=0;i<size;i++){
if(arr[i]>large){
    large=arr[i];
}
}
for(int i=0;i<size;i++){
    if(arr[i]!=large && arr[i]>large2){
        large2=arr[i];
}    
}

cout<<endl;
cout<<large<<"  "<<large2;
}