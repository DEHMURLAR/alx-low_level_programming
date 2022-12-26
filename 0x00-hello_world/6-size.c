#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code written by yours truly DEHMURLAR
 * Return: 0
*/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %1u bytes(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %1u bytes(S)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %1u bytes(S)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %1u bytes(S)\n", (unsigned long)sizeof(d));
	printf("size of a float: %1u bytes(S)\n", (unsigned long)sizeof(f));
	return (0);



