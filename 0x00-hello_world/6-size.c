#include<stdio.h>

/**
 * main - Entry poing
 *
 * Return: Always 0.
 */

int main(void)

{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(long long int));
	printf("size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
