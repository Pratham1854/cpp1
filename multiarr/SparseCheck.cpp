#include<iostream>
using namespace std;
int main(){
    int sparse[10][10],col1,row1;
    cout<<"enter size of array (rol and col):"<<endl;
    cin>>row1>>col1;
    cout<<"enter elements of array "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>sparse[i][j];
        }
    }
    int count=0;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
           if(sparse[i][j]==0){
            count++;
           }
        }
    }
    if(count>(row1*col1)/2)
    cout<<"sparse matrix"<<endl;
    else{
        cout<<"not a sparse matrix"<<endl;
    }
}