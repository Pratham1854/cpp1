#include<iostream>
using namespace std;
int main(){
    int arr[10][10],arr2[10][10],sum[10][10];
    int row1,col1,row2,col2;
    cout<<"enter size of 1st array rol and col"<<endl;
    cin>>row1>>col1;
    cout<<"enter size of 2nd array rol and col"<<endl;
    cin>>row2>>col2;
    if(row1!=row2 || col1 !=col2){
        cout<<"dimension must be equal";
       return 1;
    }
    cout<<"enter elements of array 1"<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter elements of array 2"<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
          sum[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    cout<<"sum of two arrays:"<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cout<<" "<<sum[i][j];
        }
        cout<<endl;
    }
  

}