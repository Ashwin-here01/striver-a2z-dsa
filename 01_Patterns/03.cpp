/*
1
12
123
1234
12345

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern3(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << "\n";
        }
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    obj.pattern3(n);

    return 0;
}