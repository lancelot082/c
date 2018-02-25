#include <stdio.h>
#define N 6

int main() 
{
	int A[N] = {1, 2, 3, 4, 5, 6};
	int x;
	printf("Enter Your Number:\r\n");
	scanf("%d",&x);

	for ( int i = 0; i < N; i++) 
	{
		if (A[i] == x)
		{
			printf("Found %d, %d\r\n",x,i);
		}
	}

	return 0;

}