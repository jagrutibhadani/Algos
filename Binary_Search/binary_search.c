#include <stdio.h>

void binarySearch(int * sub, int low, int high, int key)
{

    /*single element in sub array*/
    if(low==high)
    {
        if(sub[low]==key)
            printf("Key is at position %d. \n", low+1);
        else
            printf("Key not found. \n");

        return;

    }    

    /*more than one element in subarray*/

    int mid=(high+low)/2;

    if(sub[mid]==key)
    {
        printf("Key is at position %d. \n", mid+1);
        return;
    }
    else if(key<sub[mid])
    {
        binarySearch(sub, low, mid-1, key);
    }
    else if(key>sub[mid])
    {
        binarySearch(sub, mid+1, high, key);
    }


}


int main()
{

    int n,k,i;

    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);

    int input[n];

    printf("Enter the elements\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d",&input[i]);
    }

    printf("Enter the key to search for\n");
    scanf("%d",&k);

    binarySearch(input,0,n-1,k);

}

