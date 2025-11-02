#include <stdio.h>

int main() {

    int num;
    
    //taking values
    printf("Enter a Number :");
    scanf("%d",&num);
    
    //logic
    if(num%2==0){
        printf("%d is even",num);
    }else{
        printf("%d is odd",num);
    }

return 0;
}