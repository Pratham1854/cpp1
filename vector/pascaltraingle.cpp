#include<vector>
#include<iostream>
using namespace std;
int main(){
int numRows;
cin>>numRows;
vector<vector<int>> answer={};
vector<int> firstrow={1};
answer.push_back(firstrow);
int midelement=0;
for(int i=1;i<numRows;i++){
    vector<int> currentrow={};
    currentrow.push_back(1);
    for(int j=1;j<=midelement;j++){
      int element=answer[i-1][j]+answer[i-1][j-1];
      currentrow.push_back(element);
    }
    midelement++;

    currentrow.push_back(1);
    answer.push_back(currentrow);
}

    for (int i = 0; i < answer.size(); i++) { 
        for (int j = 0; j < answer[i].size(); j++) {  
            cout << answer[i][j] << " ";
        }
        cout << endl;  
    }

return 0;
}
