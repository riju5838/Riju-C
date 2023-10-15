#include<stdio.h>
int main()
{
    int arr[]={2,9,8,10,12};
    printf("%d\n",arr[0]);//will print the index value of array
    printf("%d",&(arr[0]));//will print the address value of array
    printf("%d\n",arr);//printing the addresss 0f first element
    printf("%d",arr+1);//this will print the address of index no 2nd
    
     return 0;
}