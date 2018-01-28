#include<stdio.h>
/*cooy from stdin to stdout */
int main(void)
{
	int c;
	while( ( c = getchar() ) != EOF)
		putchar(c);
}
