#include <stdio.h>
#include <Windows.h>
#define N 8

int func(int a[])
{
	int z;
	z = ((a[N - 5]) * (a[N - 4]) * (a[N - 3]) * (a[N - 2]) * (a[N - 1]));
		return z;
}

int main()
{
	system("chcp 65001");
	system("cls");

	int a[N] = {1, 3, 4, 6, -2, -5, 3, 1};
	int x = func(a);

	printf("%d\n", x);	
	

system("pause");
return 0;
}