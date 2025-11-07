#include<stdio.h>
#include <conio.h>

int main(){

    int n,i;
    float sum=0;

    for(i=1;i<=10;i++){
        printf("Enter number :");
        scanf("%d",&n);
        sum+=n;
}
    printf("Average of those 10 numbers is :%.2f",sum/10);

    getch();
    return 0;
}