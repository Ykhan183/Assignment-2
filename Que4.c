#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a value of a and b");
    scanf("%d%d",&a,&b);
    printf("a=%d\nb=%d",a,b);
    printf("\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping\na=%d\nb=%d",a,b);
    return 0;
}