#include<stdio.h>
#include<math.h>
int main()
{
    int R;
    float area,Pi=3.14159;
    printf ("R=");
    scanf("%.2f",&R);
    area=Pi*R*R;
    printf("A=%.2f\n",area);
    return 0;
}
