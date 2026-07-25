// You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        bool result = true;
        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) {
                result = false;
            }
        }
        return result;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if(obj.isPrime(n)) {
        cout << "The input number is a Prime number" << endl;
    } else {
        cout << "The input number is NOT a Prime number" << endl;
    }

    return 0;
}