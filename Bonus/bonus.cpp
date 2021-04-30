#include <iostream>
using namespace std;

int main() {
    int da,ma,ya,de,me,ye;
    cin>>de>>me>>ye;
    cin>>da>>ma>>ya;

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
    cout<<"Bonus for given duration: "<<bonus*2;
    return 0;
}