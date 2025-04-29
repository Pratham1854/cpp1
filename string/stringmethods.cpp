#include<iostream>
#include <string>
#include <algorithm> // Required for std::sort
using namespace std;
int main(){
    string s;
    string s2="hello";
    getline(cin,s);// takes entire line as input
    cout<<s<<endl;
    cout<<s.length()<<endl;//length
    //cout<<s.substr(1,3)<<endl;//return substring
   // cout<<s.find("lo");//Finds index of substring
    cout<<s.compare(s2);
   // s.erase(pos, length);
    s.append("abc");
    sort(s.begin(),s.end());
    cout<<s;
    return 0;   
}