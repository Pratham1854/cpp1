#include<iostream>
using namespace std;
int main(){
    int n,a;
    int arr[20];
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter elements to search";
    cin>>a;
    int idx=-1;
     for(int i=0;i<n;i++){
      if(arr[i]==a){
       idx=i;
        break;
      }
    }
    cout<<idx;


    return 0;
}