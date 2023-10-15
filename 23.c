#include<stdio.h>
#include<string.h>
typedef struct Student
{
    char name[100];
    int marks;
    int id;
    /* data */
}Riju;

int main()
{
    Riju s1,s2,s3;
   s1.id=56;
   s2.id=46;
   strcpy(s1.name,"SaumojyotiDas");
   strcpy(s2.name,"Priyanka");
   strcpy(s3.name,"BAbu");

    printf("all information of s1 %d\n",s1.id);
    printf("all information of s1 %d\n",s2.id);
    printf("all information of s1 %s\n",s1.name);
    printf("all information of s1 %s\n",s2.name);
    printf("all information of s1 %s\n",s3.name);

    
     return 0;
}