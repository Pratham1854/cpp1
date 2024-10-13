#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cout<<"enter no of rows and columns";
    cin>>n;
    while( i<=n){//rows
        int j=1;
        while (j<=n-1)//columns
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
  
    
    }
