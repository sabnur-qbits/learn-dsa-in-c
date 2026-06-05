#include<stdio.h>
int main(){
    char charr , vowel;
    printf("Enter a lower case letter :");
    scanf("%c", &charr);
    vowel = 'a','e','i','o','u';
    if( charr == vowel){
        printf("%c is a vowel", charr);
    }
    else{
        printf("%c is a consonant", charr);
    }
}
 