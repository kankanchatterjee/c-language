#include<stdio.h>
int main()
{
    int n,m,p;
    printf("enter a 3 digit number");
    scanf("%d",&n);
    m=n%10;
    p=n/10;
    printf("resultant number is %d",m*100+p);
    return 0;
}

