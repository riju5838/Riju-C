#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Saumojyoti";
    char s2[]="Riju";
    puts(strcat(s1,s2));//only s1 will not be printed //to get printed by strcat you have to print both s1 and s2
    printf("length o f string s1 %d",strlen(s1));
    puts(strrev(s1));
    
     return 0;
}