#include<stdio.h>
int main()
{
    int h,d;
    float x;
    scanf("%d %d",&h,&d);
    x=(d/12.0)*h;
    printf("%.3f\n",x);
    return 0;
}
