#include <iostream>
using namespace std; 
int main(){
int n;
cout<<"enter number of elemnts in array :"<<endl;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
cout<<"elements of array are:"<<arr[i]<<endl;
}
int a=0,b=n-1;
while(a<b){
    swap(arr[a],arr[b]);
    a++;
    b--;

}
for (int i = 0; i < n; i++)
{
cout<<"elements of reversed array are:"<<arr[i]<<endl;
}

return 0;
}
