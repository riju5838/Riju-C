#include<stdio.h>
int main()
{
    int n;
    printf("enter a same =");
    scanf("%d",&n);
    int temp;
    int r;
    temp=n;
    int sum=0;
    while (n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum){
        printf("palindrome");

    }
    else{
        printf("not palindrome");
    }
     return 0;
}