/*Randomized is used in order statistics. The problem is to find the kth smallest element in the given array.
O(nlogn) expected time. O(n^2) in the worst case. */

#include <stdio.h>

int count;

//Paritition procedure same as quick sort
int partition(int *a, int p, int r)
{
    int i,j;
    
    int x=a[p];

    j=p;

    int temp;

    for(i=p+1;i<=r;i++)
    {
        if(a[i]<=x)
        {
            j++;

            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }

    a[p]=a[j];
    a[j]=x;
    
    return j;

}

//Select a partition and see if it's our element.
void RandomizedSelect(int *a, int p, int r, int k)
{   
    if(r<p)
        return;

    int q=partition(a,p,r);

    if(q==k)
        printf("Required element is %d\n", a[q]);
    else if(k<q)
        RandomizedSelect(a,p,q-1,k);
    else if(k>q)
        RandomizedSelect(a,q+1,r,k);

}

int main()
{
    int i, k;

    printf("Enter the number of elements (greater than 0 and no duplicates):\n");

    scanf("%d",&count);

    int a[count];

    printf("Enter the integer elements:\n");

    for(i=0;i<count;i++)
        scanf("%d",&a[i]);

    printf("Enter the rank of the element to be found:\n");

    scanf("%d",&k);

    //k is k-1 in zero-indexed array
    k--;

    //begin randomized select
    RandomizedSelect(a,0,count-1,k);

    printf("\n\n");


}




