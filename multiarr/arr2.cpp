#include<iostream>
using namespace std;//transpose
int main(){
int r,c;
cout<<"enter rows of an array"<<endl;
cin>>r;
cout<<"enter columns of an array"<<endl;
cin>>c;
int arr[r][c];
cout<<"enter elements of an array"<<endl;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
}
cout<<"original array"<<endl;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"transpose"<<endl;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}
return 0;
}