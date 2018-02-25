#include <stdio.h> //2 Отрицательное
#define N 5

int func(int a[])
{
	int count = 0;

	for(int i = 0; i < N; i++)
	{
		if(a[i] < 0)
		{
			count++;
		}
		if(count == 2)
		{
			return i;
		}
	}
}

int main()
{
	int a[N] = {2, -3, 5, -1, 9};
	int x = func(a); 
	printf("%d\n", x);

	return 0;
} 
