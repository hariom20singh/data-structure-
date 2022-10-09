#include<stdio.h>

	int factorial(int n)
	{
		int i,fact=1;
		for(i=1;i<=n;i++)
		fact=fact*i;
	
	return fact;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("THE FACTORIAL ::%d",factorial(n));
}
