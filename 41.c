#include<stdio.h>
 int main()
{ 
   int n;
   printf("enter value");
   scanf("%d",&n);
   int i=0;
   int octal[100];
   while(n!=0){
    octal[i]=n%8;
    n=n/8;
   }
   for(int j=i-1;j>=0;j--){
    printf("%d",octal[j]);
   }

     return 0;
}