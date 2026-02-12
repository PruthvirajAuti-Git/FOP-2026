#include<stdio.h>
void main()
{
    int i, a[10];
    printf("enter array element ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("\n a[%d]=%d",i,a[i]);

    }
}