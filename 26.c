#include<stdio.h>
#include<string.h>

void parser(char*string){
int in=0;
int index=0;
for(int i=0;i<strlen(string);i++){
    if(string[i]=='<'){
        in=1;
        continue;
    }
    if(in==0){
        string[index]=string[i];
        index++;
      
    }
} 
while(string[0]==' '){
    for(int j=0;j<strlen(string);j++){
string[j]=string[j+1];
    }
}

}

int main()
{
    char string[]="<h1>  this is a heading</h1>";
    parser(string);
    printf("the parser string is ~~%s~~",string);
}