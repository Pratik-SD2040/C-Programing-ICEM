#include <stdio.h>

int main(){
    float num1,num2,num3,Max;
    
    //taking values 
    
    printf("Enter number1 :");
    scanf("%f",&num1);
    printf("Enter number2 :");
    scanf("%f",&num2);
    printf("Enter number3 :");
    scanf("%f",&num2);
    
    //Logic to find the greatest:
    
    if(num1>num2 & num1>num3){
        printf("%.2f is the greatest number",num1);
    }else if(num2>num1 & num2>num3){
        printf("%.2f is the greatest number",num2);
    }else if(num3>num1 & num3>num2){
        printf("%.2f if the greatest number",num3);
    }else{
        printf("All the numbers are same.");
        
    }
    
return 0;
}