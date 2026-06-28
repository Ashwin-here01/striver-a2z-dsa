/*
A 
B B 
C C C 
D D D D 
E E E E E 

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern16(int n) {
        for(char ch = 'A'; ch < ('A'+n); ch++) {
            for(int i = 0; i <= (ch-'A'); i++) {
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
    obj.pattern16(n);

    return 0;
}