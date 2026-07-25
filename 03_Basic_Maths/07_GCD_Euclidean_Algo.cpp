// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers. (Also called HCF (Highest Common Factor))

// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int GCD(int n1, int n2) {
        int result;
        for(int i = 1; i <= min(n1, n2); i++) {
            if(n1 % i == 0 && n2 % i == 0) {
                result = i;
            }
        }
        return result;
    }

    // Euclidean Algorithm :-
    // GCD(a, b) = GCD(a - b, b) if a > b
    // We can keep on doing this step until one of the numbers is 0 and the rest one is the GCD
    // For the above approach, there's better one:
    // GCD(a, b) = GCD(a % b, b) if a > b
    // Time Complexity of Euclidean Algorithm: O(log phi (min(n1, n2)))

    int GCDThroughEuclidean(int n1, int n2) {
        int temp[] = {n1, n2};
        n1 = max(temp[0], temp[1]);
        n2 = min(temp[0], temp[1]);
        while(n2 != 0) {
            int modulo = n1 % n2;
            n1 = n2;
            n2 = modulo;
        }
        return n1;
    }

    int GCDThroughEuclideanWithoutSwaping(int n1, int n2) {
        while(n1 != 0 && n2 != 0) {
            if(n1 > n2) n1 = n1 % n2;
            else n2 = n2 % n1;
        }
        if(n1 != 0) return n1;
        return n2;
    }
};

int main() {
    Solution obj;
    int n1, n2;
    cout << "Enter 2 integers: ";
    cin >> n1 >> n2;
    cout << "GCD of " << n1 << " and " << n2 << " is: " << obj.GCDThroughEuclideanWithoutSwaping(n1, n2) << endl;

    return 0;
}