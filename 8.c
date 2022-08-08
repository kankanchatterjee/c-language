#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x&1)
        printf("odd");
    else
        printf("even");
    getch();
    return 0;
}
