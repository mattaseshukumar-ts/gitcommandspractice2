/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,sum=0,n;
    printf("enter n value:");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
