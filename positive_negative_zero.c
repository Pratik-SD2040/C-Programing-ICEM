#include <stdio.h>

int main(){

    float Number;
    printf("Enter a number :");
    scanf("%f",&Number);
    
    //Logic
    
    if(Number>0){
        printf("%.2f is positive",Number);
    }else if(Number==0){
        printf("%.2f is zero");
    }else{
        printf("Number is negative");
    }
    
return 0;
}