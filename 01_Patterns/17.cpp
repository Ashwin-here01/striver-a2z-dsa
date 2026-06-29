/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern17(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < (n-i-1); j++) {
                cout << " ";
            }
            for(char ch = 'A'; ch <= ('A'+i); ch++) {
                cout << ch;
            }
            for(char ch = 'A'+i-1; ch >= 'A'; ch--) {
                cout << ch;
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
    obj.pattern17(n);

    return 0;
}