#include<stdio.h>
int sum(int a,int b);

int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    int s=sum (a,b);
    printf("%d",s);
}
int sum ( int a,int b){
    return a+b;
}