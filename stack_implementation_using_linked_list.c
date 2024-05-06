#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node Node;
Node *head = NULL;
int size;
int top = -1;
//push
void stack_push(int val){
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = val;
    newnode->next = NULL;
    if(top == size-1){
        printf("stack is overflown\n");
        return;
    }
    if(head == NULL){
        head = newnode;
    }
    else {
        newnode->next = head;
        head = newnode;
    }
    top++;
}
//pop
void stack_pop(){
    if(head == NULL){
        printf("stack is underflown\n");
        return;
    }
    else {
        Node *delnode = head;
        head = head->next;
        free(delnode);
    }
    top--;
}
//display
void display_stack(){
    if (head == NULL){
        printf("stack is empty\n");
    }
    else {
    Node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
  }
}
//stack top
void peek(){
    if(head == NULL){
        printf("stack is empty\n");
    }
    else {
    printf("top = %d\n",head->data);
    }
    printf("\n");
}
//is empty
void isEmpty(){
    if(top == -1){
        printf("stack is empty\n");
    }
    else {
        printf("stack is not empty\n");
    }
}
//is full
void isFull(){
    if(top == size-1){
        printf("stack is full\n");
    }
    else {
        printf("stack is not full\n");
    }
}
//main function
int main (){
    scanf("%d",&size); // size of the stack
    int ch;
    while(1){
        scanf("%d",&ch);
        if(ch == 1){
            int val;
            scanf("%d",&val);
            stack_push(val);
        }
        else if(ch == 2){
            stack_pop();
        }
        else if(ch == 3){
            display_stack();
        }
        else if(ch == 4){
            peek();
        }
        else if(ch == 5){
            isEmpty();
        }
        else if(ch == 6){
            isFull();
        }
        else {
            break;
        }
    }
    
}