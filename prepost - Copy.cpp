oint = i;
			break;
		}
	}
	// change below line to pass all test cases
	for(int i = pivotPoint-1; i >0; i--)
	{
		cout << pre[i] << " ";
	}

	for(int i = N - 1; i >= pivotPoint; i--)
	{
		cout << pre[i] << " ";
	}
	// change below line to pass all test cases
	cout << pre[0];
}

int main()
{
	int N;
    cin >> N;
    int pre[N];
    for(int a_i = 0;a_i < N; a_i++){
       cin >> pre[a_i];
    }
    prepost(pre, N);
    
    return 0;
}