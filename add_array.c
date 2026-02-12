#include<stdio.h>
void main()
{   int i,a[3],b[3],c[3];
    printf("Ernter Array element  :");
    for(i=0;i<3;i++)
    {
      scanf("%d",&a[i]);
    }
     for(i=0;i<3;i++)
     {
        scanf("%d",&b[i]);
     }
    for(i=0;i<3;i++)
    {
        c[i]=a[i]+b[i];
       

    }
    for(i=0;i<3;i++)
    {
    printf("Addition of two array is :");
    printf("\n%d\n",c[i]);
    }
    
}