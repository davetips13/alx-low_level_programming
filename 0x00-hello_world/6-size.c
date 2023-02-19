#include<stdio.h>

/**
 * main - Entry poing
 *
 * Return: Always 0.
 */

int main(void)

{
	printf("Size of a char: %n byte(s)\n", sizeof(char));
	printf("Size of an int: %n byte(s)\n", sizeof(int));
	printf("Size of a long int: %n byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %n  byte(s)\n", sizeof(long long int));
	printf("size of a float: %n byte(s)\n", sizeof(float));
	return (0);
}
