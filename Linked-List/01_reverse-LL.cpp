#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void insert_back(Node** head, int value){
    Node* temp = new Node();
    temp->data = value;
    temp->next = NULL;

    if(*head == NULL){
        *head = temp;
        return;
    }
    else{
        Node* last_node = *head;
        while(last_node->next !=NULL){
            last_node = last_node->next;
        }
        last_node->next = temp;
        return;
    }
}

void print_LL(Node* temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

// new method to reverse the LL
Node* reverse(Node* head){
        Node* next = NULL;
        Node* prev = NULL;
        Node* cur = head;
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }

void reverse_LL(Node** head){
    stack<Node*> s;
    Node* temp = *head;
    while(temp->next!=NULL){
        s.push(temp);
        temp = temp->next;
    }
    *head = temp;

    while(!s.empty()){
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}

int main(){
    Node* head = NULL;

    insert_back(&head, 1);
    insert_back(&head, 2);
    insert_back(&head, 3);
    insert_back(&head, 4);
    insert_back(&head, 5);
    print_LL(head);
    reverse_LL(&head);
    print_LL(head);
    return 0;
}