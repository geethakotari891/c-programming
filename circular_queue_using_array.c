//Circular queue Implementation --> using arrays
#include<stdio.h>
#include<stdlib.h>
int *q,i;
int front,capacity;
int rear;
int size;
void enqueue(int val) {
if(size==capacity){
printf("Queue is full\n");
return;
}
rear=(rear+1)%capacity;
q[rear]=val;
size++;
}
void dequeue() {
if(size==0) {
printf("Queue is empty\n");
return;
}
printf("%d is deleted\n",q[front]);
front =(front+1)%capacity;
size--;
}
void display(){
if(front==rear) {
printf("Queue is empty\n");
return;
}
for(i=0;i<rear;i++) {
printf("%d ",q[i]);
}
printf("\n");
}
int main() {
printf("Enter capacity of the queue:  ");
scanf("%d",&capacity);
q=(int *)malloc(sizeof(int)*capacity);
size=0;
front=0;
rear=capacity-1;
int ch;
while(1) {  
printf("Enter\n1/ Enqueue\n2. Dequeue\n3. Display\nAny other number to exit");
scanf("%d",&ch);
if(ch==1) {
int val;
printf("Enter a value to be inserted: ");
scanf("%d",&val);
enqueue(val);
}
else if(ch==2) {
dequeue();
       }
else if(ch==3) {
display();
}
else {
printf("Thank you!");
break;
}
}
}

