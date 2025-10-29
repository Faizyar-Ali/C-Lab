#include<stdio.h>
int main(){
    int fh;
    float cl;
    printf("Enter temperatur in farenhiet : ");
    scanf("%d",&fh);
    cl=(5.0/9.0)*(fh-32);
    printf("%f",cl);
}