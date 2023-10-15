#include<stdio.h>

int main(){
    int chars,i=0;
    char*ptr;

    while(i<3){
        printf("enter number\n");
        scanf("%d",&chars);
        ptr=(char*)malloc((chars+1)*sizeof(char));
        printf("enter your id");
        scanf("%d",ptr);
        free(ptr);
        i=i+1;
    }
    return 0;
}