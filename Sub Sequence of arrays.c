#include<stdio.h>
void ss(int a[],int b[],int i,int j){
	if(i==3){
    for(int k=0;k<j;k++)
    {
    	printf("%d ",b[k]);	
	}
	printf("\n");
	return ;}
    b[j]=a[i];
		 ss(a,b,i+1,j+1);
	ss(a,b,i+1,j);
}
int main()
{
	int a[]={1,2,3},b[3]={0};
ss(a,b,0,0);
}