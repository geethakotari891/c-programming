#include<stdio.h>
struct Rectangle {
    float len;
    float wid;
    float area;
    float peri;
};
// giving alias names to data types -----> typedef
typedef struct Rectangle REC;
int main (){
    REC r1;
    REC r2;
    scanf("%f ",&r1.len);
    scanf("%f\n",&r1.wid);
    scanf("%f %f",&r2.len,&r2.wid);
    r1.area = r1.len * r1.wid;
    r1.peri = 2 * (r1.len + r1.wid);
    printf("area of R1 = %.2f\n",r1.area);
    printf("peri of R1 = %.2f\n",r1.peri);
    printf("area of R2 = %.2f\n",r2.len*r2.wid);
    printf("peri of R2 = %.2f",2*(r2.wid+r2.len));
}