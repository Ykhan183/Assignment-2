#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter int value");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping value of \n a is =%d \n b is =%d",a,b);
    return 0;
}