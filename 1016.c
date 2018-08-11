#include<stdio.h>
int main()
{
    int d,x;
    scanf("%d",&d);
    x=d/((90.0/60) - (60.0/60));
    printf("%d minutos\n",x);
    return 0;
}
