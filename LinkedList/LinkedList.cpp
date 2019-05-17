#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void deleteNode(Node** head_ref, int pos){
    Node* curr = *head_ref;
    Node* prev = NULL;
    if(pos==1){
        *head_ref = curr->next;
        return;
    }
    while(pos>1){
        prev=curr;
        curr=curr->next;
        pos--;
    }
    prev->next = curr->next;
}
void insertAtHead(Node** head_ref, int data){
     
     Node* newNode = new Node;
     newNode->data = data;
     newNode->next = *head_ref;
     *head_ref = newNode;
}

void insertAtTail(Node** head_ref,int data){
    Node* last = *head_ref;
    Node* newNode = new Node;
    if(*head_ref == NULL){
       newNode->data=data;
       newNode->next=NULL; 
       *head_ref=newNode;
       return;
    }
    while(last->next != NULL){
        last=last->next;
    }
    
    newNode->data=data;
    newNode->next=NULL;
    last->next = newNode;
}
void printList(Node* head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
     insertAtHead(&head,6);
    insertAtHead(&head,8);
    insertAtHead(&head,7);
    insertAtHead(&head,9);
    
    insertAtTail(&head,1);
    insertAtTail(&head,2);
    insertAtTail(&head,4);
    insertAtTail(&head,3);
    printList(head);
    deleteNode(&head,1);
    printList(head);
    
}