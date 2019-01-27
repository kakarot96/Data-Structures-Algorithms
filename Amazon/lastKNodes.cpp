#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* addNode(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void printLastKNodes(Node* head,int k,int& visited){
        if(head==NULL)return;
        printLastKNodes(head->next,k,visited);
        visited++;
        if(visited<=k)
        cout<<head->data<<endl;
}
int main(){
int k;cin>>k;
int visited=0;
Node* head = addNode(1);
head->next = addNode(2);
head->next->next = addNode(3); 
head->next->next->next = addNode(4); 
head->next->next->next->next = addNode(5); 
//cout<<head<<endl;
printLastKNodes(head,k,visited);
// while(head!=NULL){
//     //cout<<"in while"<<endl;
//     cout<<head->data<<endl;
//     head=head->next;
// }
    return 0;
}