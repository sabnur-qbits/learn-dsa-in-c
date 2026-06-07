#include<stdio.h>
int main(){
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    char vip;
    printf("Do you have a VIP pass (Y/N)? : ");
    scanf(" %c",&vip);
    //if(age<18){
        //printf("Access denied!");
        //return 0;
    //}
    //char vip;
    //printf("Do you have a VIP pass (Y/N)? : ");
    //scanf(" %c",&vip);
    if( age >= 18 && vip=='Y'){
        printf("Access Granted. Welcome to the club!");
    }
    else{
        printf("Access denied!");
    }
}