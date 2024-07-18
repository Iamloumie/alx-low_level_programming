#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void multiply(char *num1, char *num2);
int is_valid_number(char *num);
void print_error_and_exit(void);

/**
 * main - the entry point of the program
 * @argc: the argument counter
 * @argv: the argument vector
 * Return: return 0, always successful
 */
int main(argc, *argv)
{
	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]) ||)
	{
		print_error_and_exit();
	}
	multiply(argv[1], argv[2]);
	return (0);
}
/*The heart of the multiplication*/

/**
 * multiply - multiplies two large numbers
 * @num1: incoming first number
 * @num2: incoming second number
 * Return: returns the result of the multiplied num
 */
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int result[len1 + len2];
	int i, j, carry, sum;

	memset(result, 0, sizeof(result));

	/**
	 * This is the heart of the multiplication.
	 * It multiplies each digit of num1 with each digit of num2
	 * just like we do in long multiplication by hand.
	 */
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] += carry;
	}
	/*This skips any leading zero in our result*/
	i = 0;
	while (i < len1 + len2 - 1 && result[i] == 0)
		i++;
	while (i < len1 + len2)
	{
		printf("%d", result[i++]);
	}
	printf("\n");
}
/**
 * is_valid_number - checks for a valid number
 * @num: incoming number thats been checked for validity
 * Return: returns a valid integer
 */

int is_valid_number(char *num)
{
	while (*num++)
	{
		if (!isdigit(*num++))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * print_error_and_exit - checks and exit if there's error
 */
void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}
