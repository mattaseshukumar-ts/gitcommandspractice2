#include <stdio.h>
int s_len(char *s)
{
	int i;
    for(i=0; s[i]!='\0'; i++);
    return i;
	
}
int main()
{
    char str[100];  
    int length;
 
    printf("Enter any string: ");
    scanf("%s",str);
    length=s_len(str);
    printf("Length of '%s' = %d",str,length);
 
    return 0;
}
