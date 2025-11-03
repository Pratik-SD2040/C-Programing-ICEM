#include<stdio.h>

int main(){
    int N,i=0;
    printf("Let's print every even number less than N.\n");
    printf("Enter the value of N :");
    scanf("%d",&N);
    
    while(i<=N){
        printf("%d,",i);
        i+=2;
    }
    
    return 0;
}