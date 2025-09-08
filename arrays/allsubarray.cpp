#include<iostream>
using namespace std;
int main(){
    int arr[]={5,42,31,34,2};
    for(int i=0;i<5;i++){// 0 to arr.len
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}