//creating a linked list
//self-referential structures
//head = address of node 1

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main (){
    struct node *n1 = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));
    struct node *n3 = (struct node *)malloc(sizeof(struct node));
    struct node *n4 = (struct node *)malloc(sizeof(struct node));
    //inserting data
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;
    //linking
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;
    //checking if linked
    printf("%d ",n1->data);
    printf("%d ",n1->next->data);
    printf("%d ",n1->next->next->data);
    printf("%d",n1->next->next->next->data);
}