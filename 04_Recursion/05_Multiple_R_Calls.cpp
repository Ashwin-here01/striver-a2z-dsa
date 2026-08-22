#include <bits/stdc++.h>
using namespace std;

// Finding nth Fibonacci number using recursion
// TC: O(2^n) Exponential
// SC: O(n)
int fib(int n) {
    if(n <= 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;
    cout << "The fibonacci number of " << i << "th element: " << fib(i);

    return 0;
}