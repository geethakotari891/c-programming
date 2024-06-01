#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};
typedef struct node Node;
int size = 0;
Node *front = NULL;
Node *rear = NULL;
void enqueue(int val){
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = val;
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front = newnode;
        rear = newnode;
    }
    else {
        rear->next = newnode;
        rear = newnode;
    }
    size++;
}
void dequeue(){
    if(size == 0){
        printf("queue is empty\n");
        return;
    }
    else if( size == 1){
        Node *temp = front;
        printf("%d is removed\n",temp->data);
        front = front->next;
        rear = NULL;
        size--;
    }
    else {
        Node *delnode = front;
        printf("\n%d is removed\n",delnode->data);
        front = front->next;
        free(delnode);
        size--;
    }
}
void display(){
    if(size == 0){
        printf("queue is empty\n");
        return;
    }
    Node *temp = front;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void get_front(){
    if(front == NULL){
        printf("queue is empty\n");
        return;
    }
    printf("front : %d\n",front->data);
}
void get_rear(){
    if(size == 0){
        printf("queue is empty\n");
        return;
    }
    printf("rear : %d\n",rear->data);
}
void get_size(){
    printf("size : %d\n",size);
}
int main (){
    int ch;
    while(1){
        scanf("%d",&ch);
        if(ch == 1){
            int val;
            scanf("%d",&val);
            enqueue(val);
        }
        else if(ch == 2){
            dequeue();
        }
        else if (ch == 3){
            display();
        }
        else if(ch == 4){
            get_front();
        }
        else if(ch == 5){
            get_rear();
        }
        else if(ch == 6){
            get_size();
        }
        else {
            break;
        }
    }
}