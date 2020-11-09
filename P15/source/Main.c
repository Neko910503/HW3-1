#include <stdio.h>
#include <stdlib.h>

int maxi(int x, int y, int z);

int main(void)
{
	int n1;
	int n2;
	int n3;
	printf("Enter three integers :");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("Maximum is: %d\n", maxi(n1, n2, n3));
	system("pause");
	return 0;
}

int maxi(int x, int y, int z)
{
	int max = x;
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}
