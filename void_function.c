#include <stdio.h>
#include <math.h>
#define N 3

void func(int i)
{
	printf("Number:%d\n",i*i);
}

void core(int i)
{
	int b = sqrt(i);
	printf("Root: %d\n",b);
}

void hard(int i)
{
	if(i > 0)
	{
		printf("Answer +: \n");
	}
	else
	{
		printf("Answer -: \n");
	}
}

void plus10(int i)
{
	int a = i + 10;
	printf("Answer: %d\n",a);
}

void output(int w[])
{
	for(int i = 0; i < N; i++)
	{
		printf("%d = %d\n",i++, w[i]);
	}
}




int main()
{
	func(9);
	core(9);
	hard(-4);
	plus10(5);

	int A[N];
	printf("Enter Array: \n");
	for(int i = 0; i < N; i++)
	{
		scanf("%d",&A[i]); 
	}
	output(A);
	return 0;
}



