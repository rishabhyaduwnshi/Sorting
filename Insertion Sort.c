#include<stdio.h>

void insertionSort(int A[],int n)
{
	int i,j,x;
	for(i=1;i<n;i++)
	{
		j = i-1;
		x = A[i];
		
		while(j>-1 && A[j]>x)
		{
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = x;
	}
	
}

int main()
{
	int i;
	int a[] = {10,1,8,2,3,7,6,4,5,9};
	int n = sizeof(a)/sizeof(int);
	insertionSort(a,n);
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
