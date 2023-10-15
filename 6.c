#include <stdio.h>

int main(){
    int a;
    printf("enter value");
    scanf("%d",&a);

    switch (a)  
    {
    case 0:
    printf("come in morning");
       break;
    case 10:
    printf("come in evening");
    break;
    default:
    printf("come at night");
        break;
    }
}