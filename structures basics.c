#include<stdio.h>
struct student {
    char name[10];
    int age;
};
int main (){
    struct student s1 ;
    scanf("%[^\n]s\n",&s1.name);
    scanf("%d",&s1.age);
    printf("Name\tAge\n---------\n");
    printf("%s\t%d",s1.name, s1.age);
    return 0;
    
}