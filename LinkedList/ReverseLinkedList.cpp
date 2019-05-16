#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct Node{
    int data;
    Node* next;
};
void addNode(Node** head_ref,int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next= *head_ref;
    *head_ref = newNode;    
    
}
void reverseList(Node** head){
    Node* prev=NULL;
    Node* curr = *head;
    Node* next=NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr=next;
        
    }
   *head=prev;
}
void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
   Node* head=NULL;
   addNode(&head,1);addNode(&head,2);addNode(&head,3);addNode(&head,4);addNode(&head,5);
   printList(head);
   reverseList(&head);
   printList(head);

}