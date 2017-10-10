#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float Result1,Result2,Result3,x;
    scanf("%d %d %d",&a,&b,&c);
    x=(((b*b)+(c*c)-(a*a))/2*b*c);
    Result1=acos(x);
    printf("Inverse of cos = %f in radians\n", Result1);
    return 0;

}

