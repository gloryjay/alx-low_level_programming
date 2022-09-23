#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * You can only write one statement
	 * You are allowed to use the standard library
	 * Your code should be written at line 19, before the
	 * You are not allowed to modify the variable p
	 * You are not allowed to use the variable a in your new line of code
	 * Do not remove anything from the initial code
	 */
	p[5] = 98;
	/*..... so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
