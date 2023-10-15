#include<stdio.h>
#include "30.c"
#define PI 3.14
#define square(r) r*r
int main()
{
    float var=PI;
    int r=4;
printf("the values is%f",var*square(r));
     return 0;
}
int main2(){
    printf("File name is %s\n",_FILE_);
    printf("Date name is %s\n",_DATE_);
    printf("line no %d",_LINE_);
  
}