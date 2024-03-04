//Insertion sorting
#include<stdio.h>
#include<math.h>
int *insert_sort( int *A, int n){
   
    for ( int i=1; i<n; i++){
        int key = A[i];
        int j = i-1;
        while (  j >= 0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
     int *temp;
    temp = (int*)malloc(n*sizeof(int));
    for ( int i=0; i<n; i++){
        temp[i] = A[i];
    }
    return temp;
}
int main (){
    int n;
    scanf("%d\n",&n);
    int A[n];
    for ( int i=0; i<n; i++){
        scanf("%d ",&A[i]);
    }
    int *ans;
    ans = insert_sort(A, n);
    for ( int i=0; i<n; i++){
        printf("%d ",ans[i]);
    }
    
}