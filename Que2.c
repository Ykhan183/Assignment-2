#include<stdio.h>
int main()
{
    int x;
    printf("enter a value");
    scanf("%d",&x);
    printf("%d without last digit is = %d",x,x/10);
    return 0;

}