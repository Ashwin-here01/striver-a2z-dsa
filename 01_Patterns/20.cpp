/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern20(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < i; j++) {
                cout << "*";
            }
            for(int j = 0; j < 2*(n-i); j++) {
                cout << " ";
            }
            for(int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        for(int i = n-1; i > 0; i--) {
            for(int j = 0; j < i; j++) {
                cout << "*";
            }
            for(int j = 0; j < 2*(n-i); j++) {
                cout << " ";
            }
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
    obj.pattern20(n);

    return 0;
}