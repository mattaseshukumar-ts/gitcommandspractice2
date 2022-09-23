#include <stdio.h>

int main()
{
    /* pointer to a constant */
    
   /* const int *ptr;
    const int a=10;
    ptr=&a;
    
    a=15; //error: assignment of read-only variable ‘a’
    printf("%d",a); */
    
    /*pointer constant*/
    int a;
    int *const ptr=&a;
    int b;
    ptr=&b; //error: assignment of read-only variable ‘ptr
}

