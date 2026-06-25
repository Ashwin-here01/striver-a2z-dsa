/*
12345
1234
123
12
1

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for(n; n > 0; n--) {
            for(int j = 1; j <= n; j++) {
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
    obj.pattern6(n);

    return 0;
}