#include <stdio.h>
#include <stdlib.h>

int s(int y);

int main(void)
{
	int x;
	for (x = 1; x <= 10; x++)
	{
		printf("%d  ", s(x));
	}
	printf("\n");
	system("pause");
	return 0;
}

int s(int y)
{
	return y * y;
}

