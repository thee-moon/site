#include<stdio.h>
int main()
{
	int n,k;
	printf("enter no of elements:\n");
	scanf("%d",&n);
	printf("enter number to be searched:\n");
	scanf("%d",&k);
	int arr[n];
	int i;
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int high=n-1;
	int low=0;
	int mid=n/2;
	int pos=0;
	while(high>=low)
	{
		if(arr[high]==k)
		{pos=high+1;break;} 
		if(arr[low]==k)
		{pos=low+1;break;}
		if(arr[mid]==k)
		{pos=mid+1;break;}
		else if(arr[mid]>k)
		{high=mid-1;mid=(low+high)/2;}
		else
		{low=mid+1;mid=(low+high)/2;}
	}
	if(pos!=0)
	{
		printf("position of num is %d : ",pos);
	}
	else
	{
		printf("number not found");
	}
return 0;
}