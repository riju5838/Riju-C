#include<stdio.h>
int fuctiondangling(){
    int a,b,sum;
    a=34;
    b=45;
    sum=a+b;
    return &sum;


}
int main()
{
    int*ptr=(int*)malloc(7*sizeof(int));
    ptr[0]=51;
    ptr[1]=56;
    ptr[2]=96;
    free(ptr);

    int*dang ptr=fuctiondangling();
    int *danglingptr3;
    {
        a=12;
        danglingptr3=&a;

    }
    
     return 0;
}