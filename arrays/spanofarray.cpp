#include<iostream>
using namespace std;//span=difference bw largest and smallest element of array
int maxel(int arr[]){
    int mx=arr[0];
    for(int i=0;i<5;i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    return mx;
}
int minel(int arr[]){
   int mn=arr[0];
    for(int i=0;i<5;i++){
        if(mn>arr[i]){
            mn=arr[i];
        }
    }
    return mn;   
}
int main(){
    int arr[5];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
int min=minel(arr);
int max=maxel(arr);
int span =max-min;
cout<<span;

    return 0;
}