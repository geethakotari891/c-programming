#include<stdio.h>
int *FindLadders( int A[], int n, int* rs ){
    int j=1; 
    static int B[1000];
    B[0] = A[n-1];
    for ( int i=n-2; i>=0; i-- ){
        if (A[i] > B[j-1] ){
            B[j++] = A[i];
            
        }
    }
     *rs = j;
    return B;
    
}
int main (){
    int n;
    scanf("%d\n",&n);
    int A[n];
    for ( int i=0; i<n; i++ ){
        scanf("%d ",&A[i]);
        
    }
    int j=0;
    int *returnSize=&j;

    int *ptr = FindLadders(A,n,returnSize);
    
    for ( int i=j-1; i>=0; i-- ){
        printf("%d ",ptr[i]);
    }
}