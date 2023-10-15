#include <stdio.h>

int main(){
     int num;
     for (int i = 0; i < 10; i++)
     {
         printf("%d",i);
        
     for(int j=0;j<10;j++){
         printf("enter a number.for 0 to exit ");
         scanf("%d",&num);

         if(num==0){
             printf("you are done");
            goto end;
    }
     }
    
     }
     end:
     printf("all set");
     return 0;
    
}