#include<stdio.h>
#include<string.h>
char *mem_cpy(char *dest,char *src,int n)
{
    if(dest==NULL)
        return NULL;
    else
    {
        char *char_dest=(char *)dest;
        char *char_src=(char *)src;
        for(int i=0;i<n;i++)
        {
            char_dest[i]=char_src[i];
        }
    }
    return dest;
}
int main()
{
   char src[50] = "this is memcpy implementation";
   char dest[50];
   char (*fp)(char[],char[],int);
    fp=mem_cpy;
    fp(dest, src,sizeof(src));
    int len=strlen(src);
    for(int i=0;i<len;i++)
   {
        printf("%c",dest[i]);
   }
   dest[len]='\0';
}