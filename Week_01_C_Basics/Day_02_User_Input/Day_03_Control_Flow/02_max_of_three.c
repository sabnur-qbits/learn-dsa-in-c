#include<stdio.h>
int main(){
    int a,b,c;
    printf(" Enter three numbers :");
    scanf("%d %d %d", &a,&b,&c);
    if( a == b && b == c){
        printf("The numbers are equal");
        return 0;
    }
    if( a > b && a> c){
        printf (" The largest number is %d " ,a );
    }
    else if (b > c){
    
        printf("The largest number is %d  ", b);
    }
    else{
        printf( " The largest number is %d ", c);
    } 
}
