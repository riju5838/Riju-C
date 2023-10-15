#include<stdio.h>
int main()
{
  int m,n,sum=0;

  int a[3][4],b[4][2],result[3][2]
  printf("enter first matrix\n");

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++){
        printf("enter the %d %d element",i,j );
        scanf("%d",&a[i][j]);
    }
  }  

    for(int i=0;i<4;i++)
  {
    for(int j=0;j<2;j++){
        printf("enter the %d %d element",i,j );
        scanf("%d",&b[i][j]);
    }
  }  

      for(int i=0;i<3;i++)
  {
    for(int j=0;j<2;j++){
        {
            sum+=a[i][j]=b[k][j];
        }
    }
  }  
  

       for(int i=0;i<3;i++)
  {
    for(int j=0;j<2;j++){
        {
         printf("%d",result[i][j]);
         sum=0;
    }printf("\n");
  }  


     return 0;
}