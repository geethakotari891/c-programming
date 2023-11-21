#include<stdio.h>
void table( int a, int i){
    if ( i == 10){
        return;
    }
    printf("%d * %d = %d\n",a,i,a*i);
    table( a,i+1);
}
int main (){
    int a;
    scanf("%d",&a);
    table( a,1);
}