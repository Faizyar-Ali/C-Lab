#include<stdio.h>
int main(){
float x1,x2,y1,y2,s;
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
s=(y2-y1)/(x2-x1);
printf("Slope = %f",s);
}
