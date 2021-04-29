public class Binary {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int max = 0;
        // Change below line to pass all test cases.
        int count = n;

        // Change below line to pass all test cases.
        while(n>=0)
            {
                if(n%2==1)
                    count++;
                else
                    count = 0;
                if(max<count)
                    // Change below line to pass all test cases.
                    max = count*2;
            n=n/2;
        }
        System.out.println("Maximum consecutive 1 in binary: " + max);

    }
}