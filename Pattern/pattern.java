class Pattern {
     
static void printPattern(int r) {
 
    double dist;
 
    for (int i = 0; i <= 2 * r; i++) {
        // change below line to pass all test cases
        for (int j = 0; j <= r; j++) {
            // change below line to pass all test cases
            dist = Math.sqrt((i - r) * (i - r) + (j + r) * (j + r));
            if (dist > r - 0.5 && dist < r + 0.5)
            System.out.print("*");
            else
            System.out.print(" ");
        }
    
        System.out.print("\n");
    }
}
 
public static void main(String[] args)
    {   
        Scanner sc = new Scanner(System.in);
        int r;
        r = sc.nextInt();
        // change below line to pass all test cases
        printPattern();
    }
}