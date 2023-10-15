#include <stdio.h>

int main(){
    int a;
 
    for(int i=0;i<10;i++){
         printf("enter a number");
    scanf("%d",&a);
    if(a>10){
        continue;//for continue;
    }
    printf("code executed");
    }
}