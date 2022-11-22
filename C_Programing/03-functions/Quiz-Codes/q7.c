#include <stdio.h>
#include <stdlib.h>
int  check(int num);
int main()
{
	int num ;
	printf("enter a num : ");
	scanf("%d",&num);
	printf("%d==>%d",num , check(num));
	return 0 ;
}

int check(int num){
	if((num%3 == 0)&&(num>0)) return 0;
	else return 1 ;
}
