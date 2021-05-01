#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int numberOfSwaps = 0;
        // Change below line to pass all test cases.
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n - 1; j++) {
                // Change below line to pass all test cases.
                if (a[j] > a[j + 1]) {
                    int temp=a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    numberOfSwaps++;
                }
            }
            // Change below line to pass all test cases.
            if (numberOfSwaps == 0) {
                break;
            }
        }
        cout << "Array is sorted in "<< numberOfSwaps << " swaps." <<endl;
        cout <<"First Element of sorted array: " << a[0] <<endl; ;
        cout <<"Last Element of sorted array: " << a[n-1] << endl;
    return 0;
}