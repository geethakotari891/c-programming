#include<stdio.h>
int sum( int a, int b);
int subract( int a, int b);
int multiply( int a, int b);
float divide( int a, int b);
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    int res1 = sum(a,b);
    int res2 = subract(a,b);
    int res3 = multiply(a,b);
    float res4 = divide(a,b);
    printf("%d\n%d\n%d\n%.2f",res1,res2,res3,res4);
    
}
int sum ( int a, int b){
    return a+b;
}
int subract ( int a, int b){
    return a-b;
}
int multiply ( int a, int b){
    return a*b;
}
float divide ( int a, int b){
    return a/b;
}
