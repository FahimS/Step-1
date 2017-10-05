#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the nub n1:\n");
    scanf("%d",&n1);
    printf("Enter the nub n2:\n");
    scanf("%d",&n2);


    if(n1>n2)
    {
        printf("%d Big\n",n1);
        printf("%d Small\n",n2);
    }
    else
    {
        printf("%d Big\n",n2);
        printf("%d Small\n",n1);

    }

    return 0;
}
