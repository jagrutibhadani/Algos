#include <stdio.h>

int count;

int partition(int* arr, int p, int r)
{
    int i,j,k,temp;

    //first element is pivot
    int x=arr[p];

    i=p;

    for(j=p+1;j<=r;j++)
    {
        if(arr[j]<x)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    temp=arr[i];
    arr[i]=arr[p];
    arr[p]=temp;

    return i;
}

//Quick sort
void QuickSort(int* arr, int p, int r)
{
    if(p==r)
        return;

    int q = partition(arr,p,r);

    QuickSort(arr,p,q);
    QuickSort(arr,q+1,r);
}

int main()
{
    int i, j , key;

    printf("Enter the number of elements (greater than 0):\n");

    scanf("%d",&count);

    int a[count];

    printf("Enter the integer elements:\n");

    for(i=0;i<count;i++)
        scanf("%d",&a[i]);

    printf("\nInput:\n");

    for(i=0;i<count;i++)
        printf("%d ",a[i]);

    //begin quick sort
    QuickSort(a,0,count-1);

    //print results
    printf("\n\nOutput:\n");
    for(i=0;i<count;i++)
        printf("%d ",a[i]);

    printf("\n\n");


}




