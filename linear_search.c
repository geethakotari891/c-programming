//linear search of elements using recursion
#include<stdio.h>
#include<math.h>
int linear_search(int *A, int n, int i, int key){
    if(i == n){
        return -1;
    }
    if(A[i] == key){
        return i;
    }
    return linear_search(A, n, i+1, key);
}
int main (){
    int n;
    scanf("%d",&n);
    int A[n];
    for ( int i=0; i<n; i++){
        scanf("%d ",&A[i]);
    }
    int key;
    scanf("%d ",&key);
    printf("%d",linear_search(A, n, 0, key));
}