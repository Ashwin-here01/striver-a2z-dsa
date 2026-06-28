/*
A B C D E 
A B C D 
A B C 
A B 
A 

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern15(int n) {
        for(int i = n; i > 0; i--) {
            for(char ch = 'A'; ch < ('A'+i); ch++) {
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
    obj.pattern15(n);

    return 0;
}