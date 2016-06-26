#include <stdio.h>
#include "../test.h";

int add_nums(int a, int b)
{
	return a + b;
}

int mult_nums(int a, int b)
{
	return a * b;
}

int main()
{
	int x = 2;
	int y = 3;

	printf("The sum of x and y is %d\n", add_nums(x,y));

	return 0;
}
