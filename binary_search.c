//binary search of elements 
#include<stdio.h>
#include<math.h>


//recursion
int binary_search( int *A, int n, int key, int low, int high){
    int mid;
    if(low > high) return -1;
        mid = (low + high)/2;
        if(A[mid] == key){
            return mid;
        }
        if(A[mid] > key){
            return binary_search(A, n, key, low, mid-1);
        }
        if(A[mid] < key){
            return binary_search(A, n, key, mid+1, high);
        }
}


//iteration
int bin_ite( int *A, int n, int key, int low, int high){
    int mid;
    while(low <= high){
        mid = (low + high)/2;
        if(A[mid] == key){
            return mid;
        }
        if(A[mid] > key){
            high = mid-1;
        }
        if(A[mid] < key){
            low = mid+1;
        }
        
    }
    return -1;
}

//main
int main (){
    int n;
    scanf("%d",&n);
    int A[n];
    for ( int i=0; i<n; i++){
        scanf("%d ",&A[i]);
    }
    int key;
    scanf("%d ",&key);
    
    int ans = binary_search( A, n, key, 0, n-1);
    printf("%d\n",ans);
    
    int res = bin_ite(A, n, key, 0, n-1);
    printf("%d",res);
}