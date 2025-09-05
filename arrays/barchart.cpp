#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements"<<endl;
    cin>>n;
    int arr[20];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int f=max;f>=1;f--){
        for(int i=0;i<n;i++){
            if(arr[i]>=f){
                cout<<"*";
            }else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}