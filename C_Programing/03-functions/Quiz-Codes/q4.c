
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned int ASCIIToUnsignedInt(char *ASCIIArr, int arrSize);
int main()
{
	char ASSCINumber[10];
	printf("please enter an unsigned int ");
	gets(ASSCINumber);
	unsigned test = ASCIIToUnsignedInt(ASSCINumber, sizeof(ASSCINumber));
	printf("DECNumber is %d \n", test);
	getchar();
	return 0;
}

unsigned int ASCIIToUnsignedInt(char *ASCIIArr, int arrSize)
{
	int i;
	int n = -1;
	for (i = 0; i < arrSize; i++)
	{
		if (ASCIIArr[i] == '\0')
		{
			n = i;
			break;
		}
	}
	if (n == -1)
	{
		printf("out of the range , please enter unsigned ineger less than 2^32 \n");
		return 0;
	}
	else if (n == 0)
	{
		printf("no input : please enter an unsigned integer!\n");
	}

	else
	{

		double buffer = 0;
		for (int j = 0; j < n; j++)
		{
			double decDeget = ASCIIArr[n - j - 1] - '0';
			if ((decDeget < 0) || (decDeget > 9))
			{
				printf("wrong input : please enter an unsigned integer!\n");
				return 0;
			}
			else
			{
				buffer = buffer + (decDeget * pow(10, j));
			}
		}
		if (buffer < (pow(2, 32)))
		{
			unsigned int decNumber = buffer;
			return decNumber;
		}
		else
		{
			printf("out of the range , please enter unsigned ineger less than 2^32 \n");
			return 0;
		}
	}
}

