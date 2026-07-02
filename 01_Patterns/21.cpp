/*
*****
*   *
*   *
*   *
*****

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern21(int n) {
        for(int i = 1; i <= n; i++) {
            if(i == 1 || i == n) {
                for(int j = 0; j < n; j++) {
                    cout << "*";
                }
            } else {
                cout << "*";
                for(int j = 0; j < (n-2); j++) {
                    cout << " ";
                }
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
    obj.pattern21(n);

    return 0;
}