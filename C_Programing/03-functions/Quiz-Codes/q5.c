#include <stdio.h>
#include <stdlib.h>

int main()
{
	int clearBit(int number, int bitPostion);

	int number, bitPostion;
	printf("\n input number is :  ");
	scanf("%d", &number);
	getchar();
	printf("\n Bit postion :  ");
	scanf("%d", &bitPostion);
	getchar();
	printf("DECNumber is %d \n", clearBit(number, bitPostion));
	getchar();
	return 0;
}
int clearBit(int number, int bitPostion)
{
	int x = (1 << bitPostion);
	x = (x ^ (0xffffff));
	number = (number & x);
	return number;
}

