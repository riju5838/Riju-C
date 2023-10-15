#include<stdio.h>
int fibonacci_recursive(int n)
{
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
    }
}
int fibonacci_lterative(int n){
    int a=0; //iterative means while using loops
    int b=1;
    for(int i=0;i<n;i++){
        b=a+b;
        a=b-a;
    }
    return a;
}


int main()
{
    int number;
    printf("for index number");
    scanf("%d",&number);
    printf("the lterative value %d\n",fibonacci_lterative(number));
    printf("the recursion value %d\n",fibonacci_recursive(number));
     
     return 0;
}