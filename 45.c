#include<stdio.h>
int m=0;
int func(int n){
for(int i=1;i<n;i*=2){
for(int j=0;j<=i;j++){
    m+=1;
}
}
printf("%d",m);
}
int main()
{
    func(50);
     
}