#include<stdio.h>
int main()
{
    int A,B,C,D,X,Y;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    X=C+D;
    Y=A+B;
    if(B>C&&D>A)
    {
        if(X>Y&&C>=0&&D>=0&&A%2==0)
            printf("Valores aceitos\n");
        else
            printf("Valores nao aceitos\n");
    }
    else
            printf("Valores nao aceitos\n");
            return 0;

}
