/*
*
**
***
****
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
    void pattern10(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        for(int i = n-1; i > 0; i--) {
            for(int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    obj.pattern10(n);

    return 0;
}