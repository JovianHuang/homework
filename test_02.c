#include <stdio.h>

int main()
{
	int x, i;
	int flag = 1;

	scanf("%d", &x);

	for (i = 2; i < x; i++)
	{
		if (!(x % i))
			flag = 0;

		if (!flag)
			break;
	}

	printf("%d\n", flag);

	return 0;
}