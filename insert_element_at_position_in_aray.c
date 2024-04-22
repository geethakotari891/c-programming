#include<stdio.h>
int main (){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for ( int i=0; i<n; i++ ){
        scanf("%d ",&arr[i]);
    }
    n++;
    int pos, x;
    scanf("\n%d %d",&pos,&x);
   for (int i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos
    arr[pos - 1] = x;
 
    // print the updated array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}