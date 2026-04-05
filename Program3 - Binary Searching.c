

//C Program to implement Binary Searching
#include <stdio.h>

int BinarySearch(int arr[],int n,int x)
{
	int low = 0;
	int high = n-1;
	while (low <= high)
	{
		int mid = low+(high-low)/2;	
		// check if x is present at mid
		if(arr[mid]==x)
			return mid;
			
		//if x is greater than mid, then ignore left half
		if(arr[mid]<x)
			low=mid+1;
			
		//if x is smaller than mid, then ignore right half
		else
			high=mid-1;
	}
	return -1;
}


int main()
{
	int arr[] = {2,3,4,10,40};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("\nGiven Array :\n");
	int i;
	for (i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	int x;
	printf("\nEnter the number to be searched in the array :");
	scanf("%d",&x);
	int result = BinarySearch(arr,n,x);
	if(result == -1)
		printf("\nThe number %d is not found in the array",x);
	else 
		printf("\nThe number %d is present at Index %d",x,result);
	return 0;
}


