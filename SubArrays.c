#include<stdio.h>
int main (){
    int n = 5;
    int A[5] = {1,2,3,4,5};
    for ( int i=0; i<5; i++ ){
        for ( int j=i; j<n; j++ ){
            for ( int k=i; k<=j; k++ ){
                printf("%d ",A[k]);
            }
            printf("\n");
        }
    }
}