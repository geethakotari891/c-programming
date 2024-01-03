#include<stdio.h>
struct Employee {
    char name [20];
    char org [10];
    int year_of_join;
    long  salary;
};
typedef struct Employee SE;
int main (){
    SE arr[6];
    for ( int i=0; i<6; i++ ){
        scanf ("%s %s %d %ld\n",&arr[i].name, &arr[i].org, &arr[i].year_of_join, &arr[i].salary);
    }
    printf("Name\tOrganisation\tyear_of_join\tsalary\n------------\n");
    for ( int i=0; i<6; i++ ){
        printf("%s\t%s\t\t%d\t\t%ld\n",arr[i].name, arr[i].org, arr[i].year_of_join, arr[i].salary);
    }
}