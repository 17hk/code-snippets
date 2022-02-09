#include <stdio.h>


int main()
{
	int sum = 0;
	int prev_i = 1;
	int i = 2;
	while (i < 4000000)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		int temp = prev_i;
		prev_i = i;
		i += temp;
	}
	printf("%d\n", sum);

	return 0;
}
