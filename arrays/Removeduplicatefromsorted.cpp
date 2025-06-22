#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10],size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    cout<<"enter element"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"element of array are:";
    for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
  }
    int i =0;
  for(int j=0;j<size;j++){
    if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }
  }
  int size2=i+ 1;
//cout<<i+1<<endl;
cout<<"element of array are:";
for(int i=0;i<size2;i++){
 cout<<arr[i]<<" ";
}
return 0;
}