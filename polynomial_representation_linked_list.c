//polynomial representation using linked list

#include<stdio.h>
#include<stdlib.h>
struct node{
    float coeff;
    int expo;
    struct node *next;
};
typedef struct node Node;

Node *insert_term(Node *head, float c, int e){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->coeff = c;
    newNode->expo = e;
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
    return head;
}

void display_polynomial(Node *head){
    Node *temp = head;
    while(temp != NULL){
        printf("(%.2f)x^%d%c", temp->coeff, temp->expo, (temp->next == NULL) ? '\n' : '+');
        temp = temp->next;
    }
}

Node *create_polynomial(){
    Node *head = NULL;
    int n; // number of terms in the  polynomial
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        float co; //coefficient
        int ex; //exponent
        scanf("%f %d",&co, &ex);
        head = insert_term(head, co, ex);
    }
    return head;
}

int main (){
    Node  *poly = create_polynomial();
    display_polynomial(poly);
    return 0;
}