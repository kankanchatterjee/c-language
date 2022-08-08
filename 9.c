#include<stdio.h>
int main()
{
    int m;
    char ch;
    float f;
    double db;
    printf("enter a int ,char,float,double type variable consecutively");
    scanf("%d%c%f%ld",&m,&ch,&f,&db);
    printf("%d\n%d\n%d\n%d",sizeof(m),sizeof(ch),sizeof(f),sizeof(db));
    return 0;
}
