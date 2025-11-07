#include<stdio.h>
#include <conio.h>

void main(){

    int n,i,sum=0;
    printf("Enter the value of n :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        printf("%d ",i);
        sum+=i;
    }
        printf("\n total sum of first %d natural numbers is :%d", n , sum);
    getch();
}