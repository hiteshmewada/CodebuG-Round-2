#include <iostream>
using namespace std;

void one(string s){
        int len = s.length();
        // change below line to pass all test cases
        for (int i = 0;i < len+1; i++){
            // change below line to pass all test cases
            if(i%2 !=0)
                // change below line to pass all test cases
                cout<< s[i++];
        }

}

void two(string s){
       int len = s.length();
       // change below line to pass all test cases
       for (int i = 0;i < len+1; i++){
           // change below line to pass all test cases
           if(i%2 ==0)
                // change below line to pass all test cases
                cout << s[i++];
       }

    }

int main() {

    string s;
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++){
        cin >> s;
        one(s);
        cout << " ";
        two(s);
        cout << endl;
    }
    return 0;
}