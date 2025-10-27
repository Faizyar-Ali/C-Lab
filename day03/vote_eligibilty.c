#include <stdio.h>
void main(void){
    int age;
    printf("-------- Vote Bank --------\n");
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if(age<18){
        printf("you are not eligile to vote");
    }
    else{
        printf("you are eligible to vote");
    }

}