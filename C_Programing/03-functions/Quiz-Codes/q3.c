#include <stdio.h>
#include <stdlib.h>
void revArr(int* arr , int arrSize);
int main()
{
	int arr[]={1,2,3,4,5,6};
	revArr(arr,sizeof (arr));
	for (int i =0 ; i< (sizeof(arr)/sizeof (int)) ; i++)
	{
		printf("%d,",arr[i]);	
	}
	return 0 ;
}
void revArr(int* arr , int arrSize)
{
	int n = arrSize/sizeof(int);
	for (int i=0 ; i < n/2 ; i++)
	{
		int buf = arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=buf;		
	}
}
