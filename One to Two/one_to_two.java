public class Onetotwo {

    Scanner scanner = new Scanner(System.in);
    String S;
    int t;
    public int setTestCase(){
        t = scanner.nextInt();
        scanner.nextLine();
        return t;
    }
    public void setString(){
        S = scanner.nextLine();
    }
    public void one(){
        int len = S.length();
        // change below line to pass all test cases
        for (int i = 0;i < len+1; i++){
            // change below line to pass all test cases
            if(i%2 !=0)
                // change below line to pass all test cases
                System.out.print(S.charAt(i++));
        }

    }

    public void two(){
        int len = S.length();
        // change below line to pass all test cases
        for (int i = 0;i < len+1; i++){
            // change below line to pass all test cases
            if(i%2 ==0)
                // change below line to pass all test cases
                System.out.print(S.charAt(i++));
        }

    }


    public static void main(String[] args) {

        Onetotwo num = new Onetotwo();
        int T = num.setTestCase();

        for(int a0=0;a0<T;a0++){
            num.setString();
            num.one();
            System.out.print(" ");
            num.two();
            System.out.print("\n");
        }
    }
}