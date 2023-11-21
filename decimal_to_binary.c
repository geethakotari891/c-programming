#include<stdio.h>
int main (){
    int 
n,bi=0,i=1,r;
scanf("%d",&n);
while(n>0){
    r = n%2;
    n/=2;
    bi = bi+(r*i);
    i*=10;
}
printf("%d",bi);
}