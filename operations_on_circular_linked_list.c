//operations on circular linked list

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
typedef struct node Node;
Node *head = NULL;

//insert at head
void insert_at_head (int val){
    Node  *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = newNode;
    if(head == NULL){
        head = newNode;
        
    }
    else {
        Node *temp = head;
        newNode->next = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newNode;
        head = newNode;
    }
}
//insert at tail
void insert_at_tail(int val){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        newNode->next = newNode;
    }
    else {
        Node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}
//delete at head
void delete_at_head(){
    if(head == NULL){
        printf("\nno nodes to be deleted\n");
    }
    else {
        Node *temp = head;
        Node *t = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = head->next;
        head = head->next;
        free(t);
    }
}
//delete at tail
void delete_at_tail(){
    if(head == NULL){
        printf("\nno nodes to be deleted\n");
    }
    else if(head->next == head){
        Node *delnode = head;
        head = head;
        free(delnode);
    }
    else {
        Node *temp = head;
        while(temp->next->next != head){
            temp = temp->next;
        }
        Node *delnode = temp->next;
        temp->next = head;
        free(delnode);
    }
}
//display
void display (){
    if(head == NULL){
        printf("\nno nodes are present\n");
        
    }
    else {
        Node *temp = head;
        do{
            printf("%d ",temp->data);
            temp = temp->next;
        }
        while(temp != head);
        printf("\n");
        
    }
}
//diaplay n times
void n_nodes(int n){
    if(head == NULL){
        printf("\nno nodes are present\n");
    }
    else {
        Node *temp = head;
        for(int i=0; i<n; i++){
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
//main
int main (){
    int ch;
    while(1){
        scanf("%d\n",&ch);
        if(ch == 1){
            int val;
            scanf("%d\n",&val);
            insert_at_head(val);
        }
        else if(ch == 2){
            int val;
            scanf("%d\n",&val);
            insert_at_tail(val);
        }
        else if(ch == 3){
            display();
        }
        else if(ch == 4){
            delete_at_head();
        }
        else if(ch == 5){
            delete_at_tail();
        }
        else if(ch == 6){
            int n;
            scanf("%d",&n);
            n_nodes(n);
        }
        else {
            printf("\nThank you");
            break;
        }
    }
}