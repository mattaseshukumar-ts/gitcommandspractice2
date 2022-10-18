#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int arr[],int size);
void Display(int arr[],int size);
 
int main()
{
    int ch,size,arr[20];
        printf("Enter the no. of elements into the array:\n");
        scanf("%d",&size);
        printf("Enter elements to be sorted:\n");
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
    while(1)    
    {
        printf("\nOperations performed by Stack");
        printf("\n1.BubbleSort \n2.Display\n");
        printf("\n\nEnter the choice:");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: BubbleSort(arr,size);
                    break;
            case 2: Display(arr,size);
        }
    }
}
 
void BubbleSort(int arr[20],int size)
{
    int j,k,flag;
    
    for(j=0;j<size-1;j++)
    {
        int temp,flag=0;
        for(k=0;k<size-1-j;k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
                
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}

void Display(int arr[20],int size)
{
    for(int l=0;l<size;l++)
    {
        printf("%d\t",arr[l]);
    }
}
