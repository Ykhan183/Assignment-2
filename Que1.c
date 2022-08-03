#include<stdio.h>
int main()
{
    int x;
    printf("enter a value");
    scanf("%d",&x);
    printf("unit digit of %d is = %d",x,x%10);
    return 0;
}
