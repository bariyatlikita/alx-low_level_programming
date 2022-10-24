#include "main.h"

/**
*swap_int - function that swaps the value of two integers.
*@a: an input integer pointer
*@b: an input integer pointer
*Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
