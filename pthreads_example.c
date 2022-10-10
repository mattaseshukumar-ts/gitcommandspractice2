#include<stdio.h>
#include<pthread.h>
char str[25]="this is my first thread";
int sub()
{
    printf("beginning\n ");
    int a=20;
    int b=30;
    int c=b-a;
    printf("%d\n",c);
    printf("end\n");
    
}
int main()
{
    pthread_t tid[2];
    
    printf("%d\n",tid[0]);
    printf("%d\n",tid[1]);
   int ret= pthread_create(&tid[0],NULL,sub,NULL);
   printf("%d\n",ret);
   if(ret==0)
        printf("thread is created successfully\n");
    else
        printf("thread is not created");
    int ref=pthread_join(tid[0],NULL);
    printf("%d\n",ref);
   if(ref==0)
        printf("thread is waited successfully\n");
    else
        printf("thread is not waited");
    printf("end of main");
}
