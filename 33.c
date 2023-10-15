#include<stdio.h>
#include<stdlib.h>
int main()
{
       printf("File name is %s\n",__FILE__);
    printf("Date name is %s\n",__DATE__);
    printf("line no %d\n",__LINE__);
        printf("line no %d\n",__STDC__);
            printf("line no %s",__TIME__);
     return 0;
}