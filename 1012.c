#include<stdio.h>
int main()
{
    float A,B,C,a,b,c,d,e;

    scanf("%f %f %f",&A,&B,&C);
    a=(1.0/2)*A*C;
    b=3.14159*C*C;
    c=(A+B)/2*C;
    d=B*B;
    e=A*B;

    printf("TRIANGULO: %.3f\n",a);
    printf("CIRCULO: %.3f\n",b);
    printf("TRAPEZIO: %.3f\n",c);
    printf("QUADRADO: %.3f\n",d);
    printf("RETANGULO: %.3f\n",e);
    return 0;
}
