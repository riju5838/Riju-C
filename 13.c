#include <stdio.h>
int main(){
    char q;
    float kmstomiles=0.621371;
     float kmstomiles=0.083333;
      float kmstomiles=0.393701;
       float kmstomiles=0.453592;
        float kmstomiles=0.0254;
        float first,second;
        while(1)
        {
            printf("press the value given and q to quit  1.float kmstomiles=0.621371\n; 2.float kmstomiles=0.083333\n;3.float kmstomiles=0.393701\n;   4.float kmstomiles=0.453592\n;  5. float kmstomiles=0.0254\n"); 
               scanf("%c",&input);

               printf("enter number");
               scanf("%f",&first);
        switch (input){

        case 'q':
        printf("quit");
        break;
        case 1:
        second=first*0.621371;
        printf("%d in kms is equal to %d in miles,first,second");
        break;

        case 2:
        second=first*0.083333;
        printf("%d in kms is equal to %d in miles,first,second");
        break;

        case 3:
        second=first*0.393701;
        printf("%d in kms is equal to %d in miles,first,second");
        break;
        
        

        }
        }
}