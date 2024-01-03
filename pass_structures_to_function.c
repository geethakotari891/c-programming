#include<stdio.h>
//passing structures to funcction
struct rectangle {
    float len, wid;
};
void print_area_peri ( struct rectangle r ){
    printf("area : %.2f\tperimeter : %.2f\n",r.len*r.wid, 2*(r.len+r.wid));
}
int main (){
    struct rectangle r1 = {4.5, 6.5};
    struct rectangle r2 = {7.5, 9.5};
    struct rectangle r3 = {14.7, 19.6};
    struct rectangle r4 = {19.5, 14.5};
    print_area_peri(r1);
    print_area_peri(r2);
    print_area_peri(r3);
    print_area_peri(r4);
}