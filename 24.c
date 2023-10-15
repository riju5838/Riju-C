#include<stdio.h>

void arrayrev(int arr[]){
    int temp;

    for(int i=0;i<7/2;i++){
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6]=temp;

    } 
        
        
}

// void arraysame(int arr[]){
//     for(int i=0;i<7;i++){
//         printf("value %d",arr[i]);
//     }
// }

int main(){
    int arr[]={1,2,3,4,5,6,7};
   // arraysame(arr);
    arrayrev(arr);
   for(int i=0;i<7;i++){
    printf("value of %d  is %d\n",i,arr[i]);
   }
}