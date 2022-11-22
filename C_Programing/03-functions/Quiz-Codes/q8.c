#include <stdio.h>
#include <stdlib.h>
int indexOf(int *arr, int num, int arrSize);
int main()
{
	int arr[]={1,2,3,4,5,6,4};
	int num ;
	printf("enter a number to scan : ");
	scanf("%d",&num);
	getchar();
	printf("index of %d is %d",num , indexOf(arr , num , sizeof(arr)));
	return 0;
}

int indexOf(int *arr, int num, int arrSize)
{
	int n = arrSize / sizeof(int);
	int index = -1;
	for (int i = 0; i < n; i++)
	{
		if (num == arr[i])
			index = i;
	}
	return index;
}
