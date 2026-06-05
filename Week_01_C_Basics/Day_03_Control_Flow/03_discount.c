#include<stdio.h>
int main(){
    float amt,dis;
    printf("Enter your total bill :");
    scanf("%f" , &amt);
    if(amt >= 1000){
        dis = amt-amt*0.1;
        printf("You get a 10%% discount! Your final amount is: %f ", dis);
    }
    else{
        printf("No discount applied. Your final amount is: %f" ,amt);
    }
}