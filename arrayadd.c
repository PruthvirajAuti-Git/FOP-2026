#include<stdio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j;
 printf("Enter Element:");
    

    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)

        {
             scanf("%d",&a[i][j]);
        }
    }
     
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)

        {
             scanf("%d",&b[i][j]);
        }
    }
       
     

    printf("Matrix is :\n");
    for(i=1;i<=2;i++)
    {
       for(j=1;j<=2;j++)
       { 
        c[i][j]=a[i][j]+b[i][j];
        printf("%d",c[i][j]);
       } 
     printf("\n");
    }

}