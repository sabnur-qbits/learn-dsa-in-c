#include<stdio.h>
int main(){
    printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n7. Sunday");
    int day;
    printf("Enter day number (1-7):");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 3:
        printf("Wednesday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        case 5:
        printf("Friday\n");
        break;
        case 6:
        printf("Saturday\n");
        break;
        case 7:
        printf("Sunday\n");
        break;
        default:
        printf("Invalid\n");
    }
    if(day == 1 || day<=5){
        printf("It's the weekday! \n");
    }
    else{
        day==6 || day==7;
        printf( "It's the Weekend! Time to relax!");
    }
}