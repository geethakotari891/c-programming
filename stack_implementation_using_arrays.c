//stack implementation using array

#include<stdio.h>
int st[10000];
int size;
int top = -1;
//push operation
void push(int ele){
   //overflow
   if(top == size-1){
       printf("Stack is overflown\n"); //full
   }
   else {
       st[++top] = ele;
       
   }
}
//pop operation
void pop(){
    if(top == -1){
        printf("Stack is underflow\n"); //empty
    }
    else {
        printf("deleted elment is %d\n",st[top]);
        top--;
    }
}
//display
void display (){
    if(top == -1){
        printf("nothing to display\n");
    }
    else {
        for(int i=top; i>=0; i--){
            printf("%d ",st[i]);
        }
        printf("\n");
    }
}
//peek(printing top element)
void peek(){
    if(top == -1){
        printf("stack is underflown\n");
    }
    else {
        printf("top element : %d\n",st[top]);
    }
}
//check is empty
void isEmpty(){
    if(top == -1){
        printf("stack is empty\n");
    }
    else {
        printf("stack is not empty\n");
    }
}
//check stack is full
void isFull(){
    if(top == size-1){
        printf("stack is full\n");
    }
    else {
        printf("stack is not full\n");
    }
}
//main
int main (){
    scanf("%d",&size); //enter size of stack
    int ch;
    while(1){
        scanf("%d",&ch);
        if(ch == 1){
            int ele;
            scanf("%d",&ele);
            push(ele);
        }
        else if(ch == 2){
            pop();
        }
        else if(ch == 3){
            display();
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
            printf("Thank you");
            break;
        }
    }
}