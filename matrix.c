#include<stdio.h>
  void main()
  {
    int a[2][2],i,j;

    printf("Enter Element:");
    

    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)

        {
             scanf("%d",&a[i][j]);
        }
    }
       
     

    printf("Matrix is :\n");
    for(i=1;i<=2;i++)
    {
       for(j=1;j<=2;j++)
       {
        printf("%d",a[i][j]);
       } 
     printf("\n");
    }


  }