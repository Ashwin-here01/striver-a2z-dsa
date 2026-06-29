/*
E 
D E 
C D E 
B C D E 
A B C D E 

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern17(int n) {
        for(int i = 0; i < n; i++) {
            for(char ch = ('A'+n-1-i); ch <= ('A'+n-1); ch++) {
                cout << ch << " ";
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