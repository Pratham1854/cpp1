#include<iostream>
using namespace std;
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a,b;
    cout << "Type a number: ";
  cin >> a;
  cout << "Type another number: ";
  cin >> b;
 
  cout << "Sum is: " <<add(a,b);
  return 0;
}