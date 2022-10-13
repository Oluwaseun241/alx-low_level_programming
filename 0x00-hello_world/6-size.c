#include "stdio.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
printf("size of a char: %Id byte(s)\n", size(char));
printf("size of an int: %Id byte(s)\n", size(int));
printf("size of a long int: %Id byte(s)\n", sizeof(long int));
printf("size of a long long  int: %Id byte(s)\n", sizeof(long long int));
printf("size of a fload: %Id byte(s)\n", sizeof(float));
return (0);
}
