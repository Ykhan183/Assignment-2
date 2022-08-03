#include<stdio.h>
int main()
{
    int x,rem,y;
    printf("Enter the number : ");
    scanf("%d",&y);
     rem= x % 10;
    x =  x/10;
    rem = x % 10;
    x = x/10;
    rem = x% 10;
    x= x/10;
    printf("result of %d = %d",x,y);
    return 0;
}