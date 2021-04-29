#include <iostream>
using namespace std;

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
		cout << pre[i] << " ";
	}

	for(int i = N - 1; i >= pivotPoint; i--)
	{
		cout << pre[i] << " ";
	}
	// change below line to pass all test cases
	cout << pre[i];
}

int main()
{
	int N;
    cin >> n;
    vector<int> pre(N);
    for(int a_i = 0;a_i < N; a_i++){
       cin >> pre[a_i];
    }
	prepost(pre, N);
	
	return 0;
}