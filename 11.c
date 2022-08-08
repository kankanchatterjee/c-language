#include<stdio.h>
#include<conio.h>
int main()
{
    int h,m;
    printf("enter time in HH:MM format");
    scanf("%d:%d",&h,&m);
    printf("%d hour and %d minute",h,m);
    getch();
    return 0;
}
