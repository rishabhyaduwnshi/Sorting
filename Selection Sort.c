#include<stdio.h>

void swap(int *a,int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int A[],int n)
{
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		for(j=k=i;j<n;j++)
		{
			if(A[j] < A[k] )
			k = j;
		}
		swap(&A[i],&A[k]);
	}
}

int main()
{
	int i;
	int a[] = {10,1,8,2,3,7,6,4,5,9};
	int n = sizeof(a)/sizeof(int);
	selectionSort(a,n);
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
