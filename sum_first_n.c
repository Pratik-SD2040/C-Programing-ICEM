#include<stdio.h>
#include<conio.h>

int main() {
    int i,n,sum;
    printf("Enter value of N :");
    scanf("%d",&n);

    for (i=0;i<=n;i++){
        sum+=i;
    }
    printf("Total sum of n natural numbers is :%d",sum);
}
