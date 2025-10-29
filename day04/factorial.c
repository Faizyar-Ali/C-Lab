#include<stdio.h>
int main(){
int a,b,s;
scanf("%d",&s);
a=0;
for(int i=(s-1);i>=1;i--){
    b=s*i;
    s=b;
}
printf("\n Factorial = %d",b);
}
