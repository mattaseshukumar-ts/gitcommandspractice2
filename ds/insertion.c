#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int arr[],int size);

void Display(int arr[],int size);

void QuickSort(int arr[],int start,int end);
int partition(int arr[],int start,int end);

void swap(int *x,int *y);

void insertionSort(int arr[],int size);



int main()
{
    int ch,size,arr[20],start,end;

        printf("Enter the no. of elements into the array:\n");
        scanf("%d",&size);
        printf("Enter elements to be sorted:\n");
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }

 start=0;
    end=size-1;

    while(1)
    {
        printf("\nSorting:\n");
        printf("\n1.BubbleSort \n2.Display\n3.QuickSort\n4.InsertionSort");
        printf("\nEnter the choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: BubbleSort(arr,size);
                    break;
            case 2: Display(arr,size);

            case 3: QuickSort(arr,start,end);
            
            case 4: insertionSort(arr,size);



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
               swap(&arr[k],&arr[k+1]);

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

void QuickSort(int arr[],int start,int end)
{
    int pIndex;
    if(start<end)
    {
        pIndex=partition(arr,start,end);
        QuickSort(arr,start,pIndex-1);
        QuickSort(arr,pIndex+1,end);
    }
}
int partition(int arr[],int start,int end)
{
    int pIndex=start;
    int pivot=arr[end];
    int q,temp1;
    for(q=start;q<end;q++)
    {
        if(arr[q]<pivot)
        {
           swap(&arr[q],&arr[pIndex]);

            pIndex++;
        }
    }
    swap(&arr[end],&arr[pIndex]);
    return pIndex;
}

void insertionSort(int arr[],int size)
{
int i,value,index;
for(i=1;i<size;i++)
{
    value=arr[i];
    index=i;
    while(index>0 && (arr[index-1]>value))
    {
        arr[index]=arr[index-1];
        index--;
    }
    arr[index]=value;
}
}


void swap(int *x,int *y)
{
    int temp2;
    temp2= *x;
    *x= *y;
    *y=temp2;

}
