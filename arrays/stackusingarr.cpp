#include<iostream>
using namespace std;
int stack[50],top=-1;
void push(){
    int x;
    if(top==49){
        cout<<"stack overflow";
        return;
    }
    cout<<"enter value to push"<<endl;
    cin>>x;
    top++;
    stack[top]=x;
}
void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return;
    }
    cout<<"value popped:"<<stack[top]<<endl;
    top--;
}
void print(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
}

void peek(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return;
    }
    cout<<"top is:"<<stack[top]<<endl;

}
void find_min_max() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return;
    }

    int min = stack[0], max = stack[0];
    for (int i = 1; i <= top; i++) {
        if (stack[i] < min)
            min = stack[i];
        if (stack[i] > max)
            max = stack[i];
    }

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
}
void search(){
    int target;
    int found=0;
    cout<<"enter an element to search"<<endl;
    cin>>target;
    for(int i=top;i>=0;i--){
        if(stack[i]==target){
            cout<<"element found"<<endl;
            found=1;
        }
    }
    if(!found){
        cout<<"not found";
    }
}
int main(){
push();
push();
push();
push();
print();
pop();
find_min_max();
search();
return 0;
}