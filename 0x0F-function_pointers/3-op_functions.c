#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *op_add - addition
 *@a : int one
 *@b : int two
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - substraction
 *@a : int one
 *@b : int two
 *Return: substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplication
 *@a : int one
 *@b : int two
 *Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - division
 *@a : int one
 *@b : int two
 *Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - modula
 *@a : int one
 *@b : int two
 *Return: a modula b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
