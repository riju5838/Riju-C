#include<stdio.h>
int main()
{
    int a;
    printf("the table of");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("table =%d\n",a*i);
    }
}