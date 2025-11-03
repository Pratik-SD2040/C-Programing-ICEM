#include<stdio.h>

int main(){
    int N,i=1,sum=0;

    printf("Enter the value of N :");
    scanf("%d",&N);

    while(i<=N){
        sum+=i;
        ++i;
    }
    printf("Total sum till N=%d is %d",N,sum);

    return 0;
}