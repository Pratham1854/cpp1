#include <iostream>
using namespace std;
int min(int roll[]){
 int min=roll[0];
for (int i = 0; i < 5; i++)
{
    if(roll[i]<min){
        min=roll[i];
    }
    return min;
}


}

int main(){
int n;
cin>>n;
int arr1[n];
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
int pos,val,j=0;
cin>>pos >>val;
int answer[n+1];
for(int i=0;i<n+1;i++){
if(i==pos-1){
    answer[i]=val;
}
else{
answer[i]=arr1[j];
    j++;
}
}
for(int i=0;i<n+1;i++){
    cout<<answer[i]<<"  ";
}
return 0;
}