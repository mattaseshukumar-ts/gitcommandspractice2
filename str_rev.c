#include<stdio.h>
#include<string.h>

int rev_str(char s1[20])
{
	int i;
	for(i=strlen(s1)+1;i>=0;i--)
	printf("%c",s1[i]);
}

int main(){
	char s1[20];
	printf("enter string: ");
	scanf("%s",s1);
	rev_str(s1);


}