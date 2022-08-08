#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,p;
    printf("enter two numbers");
    scanf("%d%d",&n,&m);
    p=m;
    m=n;
    n=p;
    printf("%d  %d",n,m);
    getch();
    return 0;


}

