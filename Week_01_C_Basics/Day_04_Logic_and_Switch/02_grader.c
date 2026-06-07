#include<stdio.h>
int main(){
    float score;
    printf("Enter your test score :");
    scanf("%f",&score);
    //char grade;
    if(score>=90 && score<=100){
        printf("Your grade is A!");
        return 0;
    }
    else if(score>=80 && score<=89){
        printf("Your grade is B!");
        return 0;
    }
    else if(score>=70 && score<=79){
        printf("Your grade is C!");
        return 0;
    }
    else if(score>=0 && score<70){
        printf("Your grade is F!");
        return 0;
    }
    else{
        printf("Your grade is invalid!");
    }
}