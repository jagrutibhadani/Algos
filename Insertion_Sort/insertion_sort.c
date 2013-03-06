//Best case is when array is already sorted. Worst case is when array is reverse sorted.

#include <stdio.h>

int main()
{
	int n, i, j , key; 

	printf("Enter the number of elements:\n");

	scanf("%d",&n);

	int a[n];

   	printf("Enter the elements:\n");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Input:\n");

	for(i=0;i<n;i++)
		printf("%d ",a[i]);


    /****************Insertion Sort****************/

	for(i=1;i<n;i++)
	{
		key=a[i];

		j=i-1;

		while(j>=0 && a[j]>=key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;

	}

    //print results	
    printf("\n\nOutput:\n");
    for(i=0;i<n;i++)
	  printf("%d ",a[i]);	
       

}

