#include<stdio.h>
int main(){
    printf(" --Menu-- \n1. Water \n2. Cola \n3.Snack \n");
    int choice;
    printf("Enter your choice :");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Dispensing Water. That will be $1.\n");
        break;
        case 2:
        printf("Dispensing Cola. That will be $2.\n");
        break;
        case 3:
        printf("Dispensing Snack. That will be $3.\n");
        break;
        default:
        printf("Invalid input!");
    }
    return 0;
}