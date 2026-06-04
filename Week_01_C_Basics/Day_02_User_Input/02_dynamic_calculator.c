#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int c = num1 + num2;
    printf("Sum : %d \n" ,c);
    int d = num1 - num2;
    printf("Difference : %d" , d);

}