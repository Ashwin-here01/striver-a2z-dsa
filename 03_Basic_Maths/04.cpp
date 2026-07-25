// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

// e.g. 153 is an armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include <bits/stdc++.h>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}

class Solution {
public:
    bool isArmstrong(int n) {
        int temp = n;
        int count = 0;
        int lastDigit;
        int sum = 0;
        while(n > 0) {
            n /= 10;
            count++;
        }
        n = temp;
        while(n > 0) {
            lastDigit = n % 10;
            n /= 10;
            sum += power(lastDigit, count);
        }
        return temp == sum;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if(obj.isArmstrong(n)) {
        cout << "The input number is an Armstrong number" << endl;
    } else {
        cout << "The input number is NOT an Armstrong number" << endl;
    }

    return 0;
}