#include<iostream>
using namespace std;
int main(){
    int arr[10],size;
    cout<<"enter size of array";
    cin>>size;
    cout<<"enter elements of array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"elements are"<<"  ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"using bubble sort"<<endl;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"elements are"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}