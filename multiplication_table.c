#include <stdio.h>
#include <conio.h>

int main() {
    int a,b=0,c,i;
    printf("Table will be in the formate of a x b = c \n");
    printf("Enter the value of a : ");
    scanf("%d",&a);

    for (i=1;i<=10;i++) {
        b++;
        c=a*b;
        printf("%d x %d = %d \n",a,b,c);
    }

    getch();
    return 0;
}