// selection_sort

#include<stdio.h>
void selection_sort(int *A, int n){
    int temp;
    for ( int i=0; i<n-1; i++){
        int min = i;
        for ( int j=i+1; j<n; j++){
            
            if (A[j] < A[min]){
                min = j;
            }
        }
        if(min != i){
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
        }
    }
    for ( int k=0; k<n; k++){
        printf("%d ",A[k]);
    }
}
int main (){
    int n;
    scanf("%d\n",&n);
    int A[n];
    for ( int i=0; i<n; i++){
        scanf("%d ",&A[i]);
    }
    selection_sort(A, n);
}