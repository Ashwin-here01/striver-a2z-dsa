/*
*****
****
***
**
*

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern5(int n) {
        for(n; n > 0; n--) {
            for(int i = 0; i < n; i++) {
                cout << "*";
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
    obj.pattern5(n);

    return 0;
}