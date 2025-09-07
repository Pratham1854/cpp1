//stack work on lifo
//operation 
// addel:st.push()
// remove el:st.pop()
// get elm:st.top();
// size=st.size();
#include<stack>
#include<iostream>
using namespace std;
int main(){
stack <int> s;
s.push(50);
s.push(30);
cout<<"top element"<<s.top()<<endl;
cout<<"size:"<<s.size()<<endl;
cout<<"popped:"<<s.top()<<endl;
s.pop();
if(!s.empty()){
    cout<<"new top:"<<s.top()<<endl;
}
else{
    cout<<"stack empty cannot peek"<<endl;
}
cout<<"size:"<<s.size()<<endl;
return 0;
}