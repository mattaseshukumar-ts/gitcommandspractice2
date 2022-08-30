
#include<stdio.h>
#include<stdlib.h>

int str_cat(char s1[20],char s2[20])
{
	int i=0,j=0;
	char s3[50];
	while(s1[i] !='\0'){
	s3[j]=s1[i];
	i++;
	j++;
}
i=0;
	while(s2[i] !='\0'){
	s3[j]=s2[i];
	i++;
	j++;
}
s3[j]= '\0';
printf("%s",s3);
}



int main(){
    char s1[20];
    char s2[20];
	printf("Enter the first string:\t");  
    scanf("%s",s1);  
    printf("\nEnter the second string:\t");  
    scanf("%s",s2);
	printf("The concatinated string is : ");
	str_cat(s1,s2);
}
