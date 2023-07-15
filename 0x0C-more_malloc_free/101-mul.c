#include <stdio.h>
#include <stdlib.h>

int multiply(int argc, char* argv[])
{
	int a, b, mul;
	if (argc > 2)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[0]);
	b = atoi(argv[1]);
	mul = a * b;
	return (mul);
}

int main(int argc, char* argv[])
{
	int num1, num2, mul;
	if (argc != 3)
	{
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	if (num1 >= 0 && num1 <= 9)
		{
			if (num2 >= 0 && num2 <= 9)
				printf("\nThe number is binary");
		}
	else
		{
			printf("Error\n");
			exit(98);
		}
		
	{
		int *mult = malloc(sizeof(mul));
		*mult = mul;
		free(mult);
		return (argv);
	}
	return (0);
}
