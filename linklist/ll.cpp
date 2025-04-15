#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node *next;
    public:
    node(int data1,node *next1){
        data=data1;
        next=next1;
    }
    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }
};
node *deletehead(node *head){
if(head==NULL)return head;
node *temp=head;
head=head->next;
delete temp;
return head;
}
node *inserthead(node *head,int val){
    node *temp=new node(val,head);
    return temp;
}
void printLL(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
node *inserttail(int val,node *head){
    if(head==NULL){
        return new node(val);
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node * newnode= new node(val);
    temp->next=newnode;
    return head;

}
node *insertatpos(node *head,int k,int el){
    if(head==NULL){
        if(k==1){
            return new node(el);
        }
        else{
            return head;
        }
    }
    if(k==1){
return new node(el,head);
    }
    int cnt=0;
    node *temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            node *x=new node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {12, 8, 5, 7};

    node* head = new node(arr[0]);
    head->next = new node(arr[1]);
    head=inserthead(head,70);
    //printLL(head);
    head=deletehead(head);
    head=inserttail(50,head);
    head=insertatpos(head,3,4);
    printLL(head);

}