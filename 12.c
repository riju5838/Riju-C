#include <stdio.h>

int main(){
    int marks[][4]={{2,3,5,7},
                {7,8,9,10}};
    for(int i=0;i<2;i++){
        for (int j = 0; j<4; j++)
        {
            
        
        
        printf("the of %d,%dthe marks %d\n",i,j,marks[i][j]);
        }
    }
}
