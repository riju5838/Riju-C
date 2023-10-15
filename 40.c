#include<stdio.h>
#include<string.h>
char*replaceword(const char*str,const char*oldword,const char *newword){
char*resultstring;
int i;count=0;
int newwordlength=strlen(newword);
int oldwordlength=strlen(oldword);
for(int i=0;str[i]!='\0',i++){
    if(strstr(str[i],oldword==&str[i])){
        count+;

    }i=i+oldwordlength-1;
    resultstring=(char*)maloc(i+count *(newwordlength-oldwordlength));
    i=0;
    while(*str){
        if(strstr(str,oldword)=str){
            strcpy(resultstring[i],newword);
            i+=newordlength;
            str+=oldwordlength;

        }
        else{
            resultstring[i]=*str;
            i+1;
            s+1;
        }
    }
    resultstring[i]='\0';return resultstring;
}}
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("6.txt","r");
    ptr2=fopen("5.txt","w");
    char str[200];
    fgets(str,200,ptr);
    printf("given bil%s,str");
    newstr=replaceword(str,"h","riju");
    char*newstr=str;
    printf("the given bill was%s\n",str);
    fprintf(ptr2,"%s",newstr);
    fclose(ptr);
    fclose(ptr2);
    +    return 0;
}