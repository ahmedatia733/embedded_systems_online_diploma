#include <stdio.h>
#include <stdlib.h>
int check(char *userName, char *userInput);
int main()
{
	char buf[100];
	char userName[] = "ahmedatia";
	gets(buf);
	if (check(userName, buf))
		printf("correcet userName");
	else
		printf("wrong userName");
	return 0;
}

int check(char *userName, char *userInput)
{
	int n = sizeof(userName);
	for (int i = 0; i < n; i++)
	{
		if (userName[i] != userInput[i])
			return 0;
	}
	return 1;
}

