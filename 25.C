#include<stdio.h>
int b=34;
int func1(int b1)
{
    static int myvar=40;
    printf("%d\n",myvar);
    myvar++;

}

int main(){
    int b=334;
    
    int val=func1(b1);
      val=func1(b1);
       val=func1(b1);

    int*ptr=&val;
    printf("the value of func1 is %d ",val);
    return 0;
}