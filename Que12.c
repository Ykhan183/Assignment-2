#include<stdio.h>
int main()
{
    int usd,convert;
    float inr=76.23;
    printf("enter usd");
    scanf("%d",&usd);
    convert= usd * inr;
    printf("converted usd %d in inr is = %f",usd,usd*inr);
    return 0;
}