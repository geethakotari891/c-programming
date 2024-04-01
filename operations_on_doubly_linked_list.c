//operations on doubly linked list

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node Node;
Node *head = NULL;
Node *tail = NULL;
//insert at head
void insert_at_head(int val){
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = val;
    newnode->prev = NULL;
    newnode->next = NULL;
    if(head == NULL && tail == NULL){
        head = newnode;
        tail = newnode;
    }
    else {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        newnode->prev = NULL;
    }
}
//insert at tail
void insert_at_tail(int val){
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = val;
    newnode->prev = NULL;
    newnode->next = NULL;
    if(tail == NULL && head == NULL){
        tail = newnode;
        head = newnode;
    }
    else {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
        newnode->next = NULL;
    }
}
//delete at head
void delete_at_head(){
    if(head == NULL && tail == NULL){
        printf("no nodes\n");
    }
    else if(head == tail){
        Node *delnode = head;
        head = NULL;
        tail = NULL;
        free(delnode);
    }
    else {
        Node *delnode = head;
        Node *temp = head->next;
        temp->prev = NULL;
        head = head->next;
        free(delnode);
    }
}
//delete at tail
void delete_at_tail (){
    if(head == NULL && tail == NULL){
        printf("no nodes\n");
    }
    else if(head == tail){
        Node *delnode = tail;
        head = NULL;
        tail = NULL;
        free(delnode);
    }
    else {
        Node *delnode = tail;
        tail->prev->next = NULL;
        tail = tail->prev;
        free(delnode);
    }
}
//display from left
void display_forward (){
    if(head == NULL && tail == NULL){
        printf("no nodes\n");
    }
    else {
        Node  *temp = head;
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
//display from right
void display_backward (){
    if(head == NULL && tail == NULL){
        printf("no nodes\n");
    }
    else {
        Node *temp = tail;
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->prev;
        }
        printf("\n");
    }
}
//main
int main (){
    int ch;
    while(1){
        scanf("%d",&ch);
        if(ch == 1){
            int val;
            scanf("%d",&val);
            insert_at_head(val);
        }
        else if(ch == 2){
            int val;
            scanf("%d",&val);
            insert_at_tail(val);
        }
        else if(ch == 3){
            delete_at_head();
        }
        else if(ch == 4){
            delete_at_tail();
        }
        else if(ch == 5){
            display_forward();
        }
        else if(ch == 6){
            display_backward();
        }
        else {
            printf("Thank you\n");
            break;
        }
    }
}