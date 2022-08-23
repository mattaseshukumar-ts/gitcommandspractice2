// Online C compiler to run C program online
#include <stdio.h>
// #define size1 5
#define size2 10
int main() {
    //char a[size1]={'s','q','g','e'};
    char b[size2];
    //int i=0;
    int j,k;
  /*  printf("%d\n",&a[0]);
    printf("%d\n",&a[1]);
    printf("%d\n",&a[2]);
    printf("%d\n",&a[3]);
    printf("%d",a[4]); */
    
    /* while(i<size1)
    {
        printf("%c\t",a[i]);
        i++;
    }
    printf("%d",a[4]); */
    
    printf("Enter elements into array b:\n");
    for(j=0;j<size2;j++)
    {
        scanf("%s",&b[j]);
    }
    /* printf("Elements in array are:\n");
   while(k<size2)
    {
        printf("%c\t",b[k]);
        k++;
    }*/
    for(k=0;k<size2;k++)
    {
        if(b[k]=='a'||b[k]=='e'||b[k]=='i'||b[k]=='o'||b[k]=='u')
        {
            printf("index:%d element:%c\n",k,b[k]);
        }
    }
}

