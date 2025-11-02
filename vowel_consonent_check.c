#include <stdio.h>
#include <stdbool.h>

int main() {

    char character;
    
    //taking values
    printf("Enter an alphabet :");
    scanf("%c",&character);
    
    //logic
    if((character>='A' && character<='Z') || (character>='a' && character<='z')){
            if((character=='A' || character=='a')||(character=='E' || character=='e')||(character=='I' || character=='i')||(character=='O' || character=='o')||(character=='U' || character=='u')){
                printf("%c is a vowel",character);
            }else{
                printf("%c is not a vowel but a consonant",character);
            }
        
        
        
    }else{
            printf("Entered character is not an alphabet.Kindly recheck your input");
        }
return 0;

}
