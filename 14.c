#include <stdio.h>

int fibonaci(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibonaci(n-1)+fibonaci(n-2);
    }
}
int main(){
     int n; // variable to store how many elements to be displayed in the series
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &n);

     for (int i = 0; i<n; i++)
    {
        printf("%d\n",fibonaci(i)); // calling fibonacci() function for each iteration and printing the returned value
    }

    return 0;
}