#include <stdio.h>

int main()
{
	int n, k,i; 

	printf("Enter the maximum value of the integer:\n");

	scanf("%d",&k);

	int c[k];

        //initiliaze c to an empty array
	for(i=0;i<k;i++)
		c[i]=0;

	printf("Enter the number of elements:\n");

	scanf("%d",&n);

	int a[n], b[n];

       //initiliaze b to an empty array
	for(i=0;i<n;i++)
		b[i]=0;

	printf("Enter the elements between 1 and %d (algorithm won't work with zeros):\n", k);

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Input:\n");

	for(i=0;i<n;i++)
		printf("%d ",a[i]);


       /****************Counting Sort****************/

	for(i=0;i<n;i++)
    	 c[a[i]-1]=c[a[i]-1]+1;  //count number of elements equal to i


       for(i=1;i<k;i++)
    	 c[i]=c[i]+c[i-1];  //count number of elements less than or equal to i


       for(i=n-1;i>=0;i--)
    	{
    	    b[c[a[i]-1]-1]=a[i];  //assign element to it's final position
    	    c[a[i]-1]=c[a[i]-1]-1;
    	}

       //print results	
       printf("\n\nOutput:\n");
       for(i=0;i<n;i++)
		printf("%d ",b[i]);	
       
}