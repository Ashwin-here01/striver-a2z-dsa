// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
// 1400 != 0041 instead it'll be 41

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int lastDigit;
        int reversedNumber = 0;
        while(n > 0) {
            lastDigit = n % 10;
            n = n / 10;
            reversedNumber = reversedNumber * 10 + lastDigit;
        }
        return reversedNumber;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Reversed number of " << n << " is: " << obj.reverseNumber(n) << endl;

    return 0;
}