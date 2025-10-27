#include <ctype.h>
#include <stdio.h>
void main(void){
    char grade;
    printf("----- Celebrate Your Grade with us ----");
    printf("Enter your grade (A, B, C, D,F) : ");
    scanf("%c",&grade);
    grade=tolower(grade);
    switch(grade){
        case 'a':
           printf("🎉Execellent😊");
           break;
        case 'b':
           printf("Awesome😊");
           break;
        case 'c':
           printf("Not Bad😉");
           break;
        case 'd':
           printf("Wish you Next Time Better🥲");
           break;
        case 'e':
           printf("Same Same (mine)😁");
           break;
        case 'f':
           printf("Kia bolun bhai tuja🥲");
           break;
        default:
           printf("Please Try Between (A-F)😵‍💫");
           break;
    }

}
