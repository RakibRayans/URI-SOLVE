#include<stdio.h>
int main()
{
    int n,T;
    double x,y;
    scanf("%d %d",&n,&T);
    scanf("%lf",&x);

    y = T*x;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2lf\n",y);
    return 0;
}
