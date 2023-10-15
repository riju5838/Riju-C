#include<stdio.h>
int main()
{
    FILE*ptr=NULL;
    ptr=fopen("5.txt","w");
    char c=fgetc(ptr);
    printf("the character%c\n",c);
    c=fgetc(ptr);
    printf("the character %c\n",c);
 //   char str[4];
   // fgets(str,5,ptr);
    fputc("o",ptr);
char str[34];
    fclose(ptr);
     return 0;
}