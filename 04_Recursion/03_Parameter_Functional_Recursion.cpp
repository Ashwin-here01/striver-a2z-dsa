#include <bits/stdc++.h>
using namespace std;

// Sum of n numbers using parameter
void sum_para(int n, int sum) {
    if(n < 1) {
        cout << "Sum is: " << sum << endl;
        return;
    }
    sum += n;
    sum_para(--n, sum);
}

// Sum of n numbers using function
int sum_func(int n) {
    if(n < 1) {
        return 0;
    }
    return n + sum_func(n-1);
}

// Factorial of n numbers
// Time Complexity: O(n)
// Space Complexity: O(n)     Stack space (functions waiting to be completed)
int factorial(int n) {
    if(n == 1) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;
    // sum_para(i, 0);
    // cout << "Sum: " << sum_func(i);
    cout << "Factorial: " << factorial(i);

    return 0;
}