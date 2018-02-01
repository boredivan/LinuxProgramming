#include<stdio.h>
int test(void)
{
	return 1;
}
int main(void)
{
	int errno;
	errno = 1;
	test();
	perror("");
	return 0;
}

