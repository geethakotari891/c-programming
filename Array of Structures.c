#include<stdio.h>
struct Student {
    char name [20];
    int age;
};
typedef struct Student STU;
int main (){
    //Array of structures;
    int n;
    scanf("%d\n",&n);
    STU arr[n];
    for ( int i=0; i<n; i++ ){
        scanf("%s %d\n",&arr[i].name,&arr[i].age);
        
    }
    printf("Name\tAge\n-----------\n");
    for ( int i=0; i<n; i++ ){
        printf("%s\t%d\n",arr[i].name, arr[i].age);
    }
}