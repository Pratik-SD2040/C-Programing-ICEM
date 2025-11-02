#include <stdio.h>
#include <math.h>

int main(){

    float Number;
    
    
    //taking values
    
    printf("Enter a number :");
    scanf("%f",&Number);
    
    //logic
    
    if(fmod(Number,5)==0 & fmod(Number,11)==0){
        printf("%.2f is divisible by both 5 and 11 simultaneously",Number);
    }else{
        printf("%.2f is not divisible by 5 and 11 simultaneously",Number);
    }
    
return 0;
}