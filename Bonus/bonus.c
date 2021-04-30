#include <stdio.h>

int main() {
    int da,ma,ya,de,me,ye;
    scanf("%d%d%d", &de,&me,&ye);
    scanf("%d%d%d", &da,&ma,&ya);

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
    printf("Bonus for given duration: %d", bonus*2);
    return 0;
}