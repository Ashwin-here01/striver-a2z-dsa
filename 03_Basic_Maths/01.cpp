// You are given an integer n. You need to return the number of digits in the number.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        while(n > 0) {
            n = n / 10; // Time Complexity : O(log10(n))
            // log to the base dividing by the number is the time complexity
            // e.g. n = n / 5   has time complexity : O(log5(n))
            count++;
        }
        return count;
    }

    int countDigitThroughLog(int n) {
        return (int)(log10(n)+1);
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Number of digits in " << n << " is: " << obj.countDigit(n) << endl;

    return 0;
}