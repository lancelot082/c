#include <stdio.h>
#include <Windows.h>
#define N 6

int func(int a[])
{
	int count = 0;
	for(int i=0; i<N;i++)
	{
		if(a[i] % 2 == 0)
		{
			count = count +1;
		}
		
	}
	return count;
}

int main()
{
	system("chcp 65001");
	system("cls");

	int a[N] = {1, 3, 4, 6, -2, -5};
	int x = func(a);

	printf("%d\n", x);	
	

system("pause");
return 0;
}