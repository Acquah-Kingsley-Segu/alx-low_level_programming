/**
 * swap_int - takes two int pointer and swaps their content
 * @a: one of integer pointer
 * @b: other integer pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
