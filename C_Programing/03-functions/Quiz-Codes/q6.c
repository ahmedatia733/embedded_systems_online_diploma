#include <stdio.h>
#include <stdlib.h>
int check(int num);
int main()
{
	int num ;
	printf("\n input an int to check :");
	scanf("%d",&num);
	getchar();
	printf("the 4th lest siginficate bit is %d",check(num));
	getchar();
	return 0;
}

int check(int num)
{
	if (num & (0x00000008))
		return 1;
	else
		return 0;
}

