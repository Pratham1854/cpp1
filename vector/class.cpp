#include<iostream>
#include <vector>
using namespace std;
int main(){
vector <int> v;
for(int i=0;i<100;i++){
v.push_back(i);
}
cout<<v.size()<<" "<<v.capacity()<<endl;
cout<<v.empty()<<endl;
cout<<v.front()<<"  "<<v.back()<<endl;
v.clear();
cout<<v.empty()<<" "<<v.capacity();
return 0;
}