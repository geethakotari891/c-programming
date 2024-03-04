//bubble sort


#include <stdio.h>
#include <string.h>
#include <math.h>
int bubble_sort( int *A, int n){
    int temp;
    for ( int i=0; i<n; i++){
        for ( int j=0; j<n-1; j++){
           if(A[j] > A[j+1]){
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
           }
        }
    }
    int *dup;
    dup = (int*)malloc(n*sizeof(int));
    for ( int i=0; i<n; i++){
        dup[i] = A[i];
    }
    return dup;
}
int main (){
    int n;
    scanf("%d\n",&n);
    int A[n];
    for ( int i=0; i<n; i++){
        scanf("%d ",&A[i]);
    }
    int *ans;
    ans = bubble_sort(A, n);
    for ( int i=0; i<n; i++){
        printf("%d ",ans[i]);
    }
}