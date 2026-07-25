// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

// e.g. 4 = 1, 2, 4

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> result;
        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                result.push_back(i);
            }
        }
        // Time Complexity: O(n)

        // Better approach:-
        vector<int> resultSqrt;
        // Time Complexity: O(sqrt(n))
        for(int i = 1; i <= sqrt(n); i++) { // To cut time, we can replace sqrt(n) with i*i <= n
            resultSqrt.push_back(i);
            if(n/i != i) {
                resultSqrt.push_back(n / i);
            }
            sort(resultSqrt.begin(), resultSqrt.end());
            // Time Complexity: O(no.-of-factors log(no.-of-factors))
        }
        return resultSqrt;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "The divisors of " << n << " are:" << endl;
    for(int i : obj.divisors(n)) {
        cout << i << " ";
    }
    // Time Complexity: O(no.-of-factors)

    return 0;
}