#include "main.h"

void reverse_array(int *a, int n)
{
	int *ptr = a;

	int len = n / 2;

	int i = 0, temp;

	while (i < len)
	{
		temp = ptr[n - 1];
		ptr[n-1] = a[i];
		a[i] = temp;
		
		n--;
		i++;
	}
}
