#include<stdio.h>

    void gh(int n){
   
  
   int i=0;
   int octal[100];
   while(i!=0){
    octal[i]=n%8;
   }
   for(int j=i-1;j>=0;j++){
    printf("%d",octal[j]);
   }
    }
    int main()
{
int n=45;
gh(n);
     return 0;
}