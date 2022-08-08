#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter a three digit number");
    scanf("%d",&a);
    printf("sum of digits is %d",(a%10)+((a/10)%10)+((a/10)/10));
    getch();
    return 0;
}
