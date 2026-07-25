// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

// A palindrome number is a number which reads the same both left to right and right to left.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        int temp = n;
        int lastDigit;
        int reverseNum = 0;
        while(n > 0) {
            lastDigit = n % 10;
            n /= 10;
            reverseNum = reverseNum * 10 + lastDigit;
        }
        return reverseNum == temp;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if(obj.isPalindrome(n)) {
        cout << "The input number is a Palindrome" << endl;
    } else {
        cout << "The input number is NOT a Palindrome" << endl;
    }

    return 0;
}