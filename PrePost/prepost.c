#include <stdio.h>

void prepost(int pre[], int N)
{
	int pivotPoint = 0;

	for(int i = 1; i < N; i++)
	{	
		// change below line to pass all test cases
		if (pre[0] >= pre[i])
		{
			pivotPoint = i;
			break;
		}
	}
	// change below line to pass all test cases
	for(int i = pivotPoint; i > 0; i--)
	{
		printf("%d ", pre[i]);
	}
	
	for(int i = N - 1; i >= pivotPoint; i--)
	{
        printf("%d ", pre[i]);
	}
	// change below line to pass all test cases
    printf("%d", pre[i]);
}

int main()
{
	int N;
    scanf("%d",&N);
    int *pre = malloc(sizeof(int) * N);
    for(int a_i = 0; a_i < N; a_i++){
       scanf("%d",&pre[a_i]);
    }
	
	prepost(pre, N);
	
	return 0;
}