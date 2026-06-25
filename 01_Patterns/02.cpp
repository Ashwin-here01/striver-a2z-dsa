/*
*
**
***
****
*****

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern2(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
};

int main() {
    Solution obj;
    int a;
    cout << "Enter the number of rows: ";
    cin >> a;
    obj.pattern2(a);

    return 0;
}