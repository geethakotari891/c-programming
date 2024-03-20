//sparce matrix representation using linked list

#include<stdio.h>
#include<stdlib.h>
struct node{
    int row, col, data;
    struct node *next;
};
typedef struct node Node;
Node *head = NULL;

void insert_at_tail(int r, int c, int val){
    Node *newNode  = (Node *)malloc(sizeof(Node));
    newNode->row = r;
    newNode->col = c;
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else {
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(){
    printf("Non-zero elemennts of the given sparse matrix: \n");
    printf("Row\tCol\tVal\n");
    Node *temp = head;
    while(temp != NULL){
        printf("%d\t%d\t%d\n", temp->row, temp->col, temp->data);
        temp = temp->next;
    }
}

int main (){
    int r, c;
    scanf("%d %d",&r, &c);
    int mat[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d ",&mat[i][j]);
        }
    }
    //running a loop on it
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(mat[i][j] != 0){
                insert_at_tail(i, j, mat[i][j]);
            }
        }
    }
    display();
}