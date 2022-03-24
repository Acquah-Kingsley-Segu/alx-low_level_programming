#include "main.h"

void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}


/*int len = n / 2;*/

	/*int i = 0, temp;*/

	/*while (i < len)*/
	/*{*/
		/*temp = a[n - 1];*/
		/*a[n-1] = a[i];*/
		/*a[i] = temp;*/
		
		/*n--;*/
		/*i++;*/
	/*}*/
