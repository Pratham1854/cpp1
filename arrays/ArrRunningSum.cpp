#include<iostream>
using namespace std;
int main(){
int arr[10],Size;
cout<<"enter Size of array"<<endl;
cin>>Size;
cout<<"Enter elements in array"<<endl;
for(int i=0;i<Size;i++){
   cin>>arr[i];
}
cout<<"elements of array are"<<endl;
for(int i=0;i<Size;i++){
   cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=1;i<Size;i++){
    arr[i]=arr[i]+arr[i-1];
}
cout<<"running sum of array:";
for(int i=0;i<Size;i++){
   cout<<arr[i]<<" ";
}

}