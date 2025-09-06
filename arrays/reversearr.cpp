#include<iostream>
using namespace std;
int main(){
int arr[6]={1,2,3,4,5,6};
cout<<"og array"<<endl;
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
int start=0;
int length = sizeof(arr) / sizeof(arr[0]);
int end=length-1;
while(end>start){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    end--;
    start++;
}
cout<<endl;
cout<<"reversed array"<<endl;
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
return 0;
}