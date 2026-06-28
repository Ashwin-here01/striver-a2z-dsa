/*
A 
A B 
A B C 
A B C D 
A B C D E 

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern14(int n) {
        for(int i = 0; i < n; i++) {
            int ascii = 'A';
            for(int j = 0; j <= i; j++, ascii++) {
                cout << (char)ascii << " ";
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
    obj.pattern14(n);

    return 0;
}