
#include <stdio.h>
#include <stdlib.h>
void swap(int *arr1 , int *arr2 , int size1 , int size2);
int main()
{
	int  arr1[]={5,2,3,4,5,6};
	int arr2[]={1,3,7};
		printf("arr1 elemnts  = {");
	for(int i = 0 ; i < (sizeof(arr1)/ sizeof(int)) ; i++)
	{
		printf("%d ,",arr1[i]);
	}
	printf("}\n");

	printf("arr2 elemnts  = {");
	for(int i = 0 ; i < (sizeof(arr2)/ sizeof(int)) ; i++)
	{
		printf("%d ,",arr2[i]);
	}
	printf("}\n");
	swap(arr1 , arr2 , sizeof(arr1),sizeof(arr2));
	printf("afer swap function :\n");
	printf("arr1 elemnts  = {");
	for(int i = 0 ; i < (sizeof(arr1)/ sizeof(int)) ; i++)
	{
		printf("%d ,",arr1[i]);
	}
	printf("}\n");

	printf("arr2 elemnts  = {");
	for(int i = 0 ; i < (sizeof(arr2)/ sizeof(int)) ; i++)
	{
		printf("%d ,",arr2[i]);
	}
	printf("}\n");
	getchar();
	return 0;
}

void swap(int *arr1 , int *arr2 , int size1 , int size2)
{
	int minSize = size1 ;
	if (size2 < size1 ) minSize = size2 ;
	int buff=0;
	minSize/=sizeof(int);
	for (int i = 0 ; i < minSize ; i++)
	{
		buff=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=buff;
	}

}
