public class Sorted {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int numberOfSwaps = 0;
        // Change below line to pass all test cases.
        for (int i = 0; i < n; i--) {

            for (int j = 0; j < n - 1; j++) {
                // Change below line to pass all test cases.
                if (a[j] >= a[j + 1]) {
                    int temp=a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    numberOfSwaps++;
                }
            }
            // Change below line to pass all test cases.
            if (numberOfSwaps != 0) {
                break;
            }
        }
        System.out.println("Array is sorted in " + numberOfSwaps + " swaps.");
        System.out.println("First Element of sorted array: " + a[0]);
        System.out.println("Last Element of sorted array: " + a[n-1]);
    }
}