#include <iostream>
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
void firstOccurence(int arr[],int size,int target){
    int found=false;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"element found at index"<<i<<endl;
            found=true;
            break;
        } 
    }
    if(!found){
        cout<<"not found"<<endl;
    }
}
void allOccurence(int arr[],int size,int target){
    int found=0;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            found=1;
            cout<<"element found at index"<<i<<endl;
        }
        
    }
    if(!found){
        cout<<"not found"<<endl;
    }
}


 
int main(){
int arr[10],size;
cout<<"enter size"<<endl;
cin>>size;
input(arr,size);
output(arr,size);
int target;
cout<<"enter target"<<endl;
cin>>target;
firstOccurence(arr,size,target);
allOccurence(arr,size,target);
}