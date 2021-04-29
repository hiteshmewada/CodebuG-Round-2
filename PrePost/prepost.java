class Prepost {
	
	public void prepost(int pre[])
	{
		int pivotPoint = 0;

		for (int i = 1; i < pre.length; i++)
		{
			// change below line to pass all test cases
			if (pre[0] >= pre[i])
			{
				pivotPoint = i;
				break;
			}
		}
	
		// change below line to pass all test cases
		for (int i = pivotPoint; i > 0; i--)
		{
			System.out.print(pre[i] + " ");
		}
	

		for (int i = pre.length - 1; i >= pivotPoint; i--)
		{
			System.out.print(pre[i] + " ");
		}
		// change below line to pass all test cases
		System.out.print(pre[i]);
	}


	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int pre[] = new int[N];
        for(int a_i=0; a_i < N; a_i++){
            pre[a_i] = in.nextInt();
        }
		prepost(pre);
	}
}