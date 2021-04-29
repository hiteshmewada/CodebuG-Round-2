public class Bonus {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int da,ma,ya,de,me,ye;
        de = sc.nextInt();
        me = sc.nextInt();
        ye = sc.nextInt();
        da = sc.nextInt();
        ma = sc.nextInt();
        ya = sc.nextInt();

        int bonus = 0;

        if(ye==ya){

            if(me < ma){
                // Change below line to pass all test cases.
                bonus = (ma + me) * 500;
            }
            // Change below line to pass all test cases.
            else if( (me == ma) || (de < da) ){
                bonus = (da - de) * 15;
            }

        }
        else if(ye < ya){
            // Change below line to pass all test cases.
            bonus = 10000*(ye-ya);
        }
        // Change below line to pass all test cases.
        System.out.println("Bonus for given duration: "+bonus*2);
    }
}