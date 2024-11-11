//prime number with factors
#include <iostream>
using namespace std;
int main()
{
    int count=0;
    int n;
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
 
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}