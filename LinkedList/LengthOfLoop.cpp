#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};

void addNode(Node** head_ref,int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

Node *newNode(int key) 
{ 
    Node *temp = new Node;
    temp->data = key; 
    temp->next = NULL; 
    return temp; 
} 

int countNodes(Node* n){
    int r=1;
    Node* temp = n;
    while(n!=temp->next){
        r++;
        temp=temp->next;
    }
    return r;
}
int lengthOfLoop(Node* head){
    Node *slow_ptr=head,*fast_ptr=head;
    while(slow_ptr && fast_ptr && fast_ptr->next){
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
        if(slow_ptr == fast_ptr){
            int len=countNodes(slow_ptr);
            return len;
        }
    }
    return 0;
}
int main(){
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = head;
    cout<<lengthOfLoop(head);
}