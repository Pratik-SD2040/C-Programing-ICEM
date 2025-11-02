#include <stdio.h>

int main() {

    char character;
    
    //taking values
    printf("Enter a character :");
    scanf("%c",&character);
    
    //logic
    if((character>='A' && character<='Z') || (character>='a' && character<='z')){
        printf("Yes %c is an alphabet",character);
    }else{
        printf("Entered character is not an alphabet.");
    }

return 0;
}