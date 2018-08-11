#include<stdio.h>
int main()
{
    int a,b,c,d;
    double x,y,i,k,z;
    scanf("%d %d %lf",&a,&b,&x);
    scanf("%d %d %lf",&c,&d,&y);
    i=b*x;
    k=d*y;
    z=i+k;
    printf("VALOR A PAGAR: R$ %.2lf\n",z);
    return 0;
}
