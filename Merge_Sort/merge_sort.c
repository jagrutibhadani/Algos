#include <stdio.h>

int count;

void Merge(int* arr, int p, int r)
{
	int i,j,k,l,q;
	int temp[count];

	for(k=p;k<=r;k++)
	{
		temp[k]=arr[k];
	}

	q=(p+r)/2;
	i=p;
	j=q+1;

	for(k=p;k<=r;k++)
	{

		if(i<=q && j<=r)
		{
			if(temp[i]<=temp[j])
			{
				arr[k]=temp[i];
				i++;
			}	
			else
			{
				arr[k]=temp[j];
				j++;
			}
		}
		else if(i>q)
		{
			arr[k]=temp[j];
			j++;
		}
		else if(j>r)
		{
			arr[k]=temp[i];
			i++;
		}
			
	}

	
}

//Merge sort
void MergeSort(int* arr, int p, int r)
{
	int q = (p+r)/2;

	if(p<r)
	{
		MergeSort(arr, p, q);
		MergeSort(arr, q+1,r);
		Merge(arr,p,r);

	}
}

int main()
{
	int i, j , key; 

	printf("Enter the number of elements:\n");

	scanf("%d",&count);

	int a[count];

	printf("Enter the elements:\n");

	for(i=0;i<count;i++)
		scanf("%d",&a[i]);

	printf("Input:\n");

	for(i=0;i<count;i++)
		printf("%d ",a[i]);

	//begin merge sort
	MergeSort(a,0,count-1);

    //print results	
	printf("\n\nOutput:\n");
	for(i=0;i<count;i++)
		printf("%d ",a[i]);	


}



