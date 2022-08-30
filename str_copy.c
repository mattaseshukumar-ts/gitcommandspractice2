#include <stdio.h>
#include <string.h>
#include <conio.h>
int main ()
{
    char s1[10];
    char s2[10];
    int i;
    int strcopy(char s2 [10], char s1 [10]);
    printf ("Enter String 1 :");
    scanf("%s",s1);
    strcopy (s2, s1);
    printf("String2=%s",s2);
    
}
int strcopy(char s2[10], char s1[10])
{
    int i= 0;
    while(s1[i] !='\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i]='\0';
}