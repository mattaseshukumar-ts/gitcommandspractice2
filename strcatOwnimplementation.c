#include <stdio.h>
void str_cat(char str1[],char str2[])
{
    int i=0,j=0,k=0;
    char str3[30];
    while(str1[i]!='\0')
    {
        str3[k]=str1[i];
        i++;
        k++;
    }
    while(str2[j]!='\0')
    {
        str3[k]=str2[j];
        j++;
        k++;
    }
    str3[k]='\0';
    printf("%s",str3);
}
int main()
{
    char str1[30]="thunder";
    char str2[10]="soft";
    void (*fp) (char[],char[]);
    fp=str_cat;
    fp(str1,str2);

    return 0;
}