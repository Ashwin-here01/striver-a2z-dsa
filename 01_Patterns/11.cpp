/*
1
01
101
0101
10101

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
        int start = -1;
        for(int i = 1; i <= n; i++) {
            if(i%2 != 0) {
                start = 1;
            } else {
                start = 0;
            }
            for(int j = 0; j < i; j++) {
                cout << start;
                if(start == 1) {
                    start = 0;
                } else {
                    start = 1;
                }
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
    obj.pattern11(n);

    return 0;
}