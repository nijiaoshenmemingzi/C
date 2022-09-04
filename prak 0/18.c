#include <stdio.h>

#include <stdio.h>

int main()
{
	int a, total,i;

	scanf("%d", &a);
	total = 0;

	for (i = 1; i <= a; i++)
	{
		total += i;
	}

	printf("%d\n", total);
	return 0;
}
