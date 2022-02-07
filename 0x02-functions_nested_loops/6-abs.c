#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - absolute value
 * @r : int
 * Return: abs
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
		else
		{
			r = (r * (-1));
			return (r);
		}
	}
