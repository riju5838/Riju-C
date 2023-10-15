#include<stdio.h>

int main(){
    FILE*ptr=NULL;
    char string[64]="the content ";
    ptr=fopen("2.txt","w");
   // fscanf(ptr,"%s",string);
    printf("the content %s\n",string);

}