#include "main.h"

void reverse_array(int *a, int n)
{

	int len = n / 2;

	int i = 0, temp;

	while (i < len)
	{
		temp = a[n - 1];
		a[n-1] = a[i];
		a[i] = temp;
		
		n--;
		i++;
	}
}
