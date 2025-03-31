#include<bits/stdc++.h>
using namespace std;
void TkInput(int arr[],int size){
     cout<<"enter element"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void ArrPrint(int arr[],int size){
     cout<<"element of array are:";
      for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void LargestElement(int arr[],int size){
    int larg=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>larg){
            larg=arr[i];
        }
    }
    cout<<"largest element in array is:"<<larg<<endl;
}
void SmallestElemnt(int arr[],int size){
    int small=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
     cout<<"Smallest element in array is:"<<small<<endl;
}
void SumOfallElements(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=arr[i]+sum;
    }
    cout<<"sum of all elements in array is"<<sum<<endl;
}
int CheckIsSorted(int arr[],int size){
    for(int i=1;i<size;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
        return true;
    }
}
int main(){
    int arr1[10],n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    TkInput(arr1,n);
    ArrPrint(arr1,n);
    LargestElement(arr1,n);
    SmallestElemnt(arr1,n);
    SumOfallElements(arr1,n);
  cout<<CheckIsSorted(arr1,n);
    return 0;
}