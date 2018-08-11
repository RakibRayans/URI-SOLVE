#include<stdio.h>
int main()
{
    int x,y;
    float R;
    float a[5]={4.00,4.50,5.00,2.00,1.50};
    scanf("%d %d",&x,&y);
    R = a[x-1]*y;
    printf("Total: R$ %.2f\n",R);
    return 0;
}
