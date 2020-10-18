#include<stdio.h>

void swap(int *a,int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int A[],int n)
{
	int i,j,flag;
	for(i=0;i<n-1;i++)
	{
		flag = 0;
	
		for(j=0;j<n-1-i;j++)
		{
			if(A[j] > A[j+1])
			{
			swap(&A[j],&A[j+1]);
			flag = 1;
			}	
		}
			if(flag == 0)
			break;
	}
}

int main()
{
	int i;
	int a[] = {10,1,8,2,3,7,6,4,5,9};
	int n = sizeof(a)/sizeof(int);
	bubbleSort(a,n);
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
