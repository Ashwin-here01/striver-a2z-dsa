/*
1        1
12      21
123    321
1234  4321
1234554321

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern12(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << j;
            }
            for(int j = 0; j < n-i; j++) {
                cout << " ";
            }
            for(int j = 0; j < n-i; j++) {
                cout << " ";
            }
            for(int j = i; j > 0; j--) {
                cout << j;
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
    obj.pattern12(n);

    return 0;
}