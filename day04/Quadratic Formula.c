#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,d,r1,r2;
scanf("%f%f%f",&a,&b,&c);
d=sqrt(b*b-4*a*c);
r1=(-b+d)/(2*a);
r2=(-b-d)/(2*a);
printf("Roots = %f and %f",r1,r2);
}
