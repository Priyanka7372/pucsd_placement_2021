#include<stdio.h>
int fib(int n)
{
	if(n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}
int main(int argc, char* argv[])
{
	if(argc < 2)
		printf("No Command line argument passed");
	else
	{	
		int n = argv[1];
		printf("%d", fib(n));
	}
return 0;
}