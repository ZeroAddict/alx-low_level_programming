#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add - adds a and b
*@a: integer a num1
*@b: integer b num2
*
*Return: sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - subtracts b from a
*@a: integer a num1
*@b: integer b num2
*
*Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
} 
/**
*op_mul - multiplies a and b
*@a: integer a  num1
*@b: integer b  num2
*
*Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
**op_div - divides a by b
*@a: integer a - num1
*@b: integer b - num2
*
*Return: division of a by b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod - returns remainder of a by b division
*@a: integer a - num1 
*@b: integer b - num2
*
*Return: modulus remainder of a / b
*/
int op_mod(int a, int b)
{
	return (a % b);
}

