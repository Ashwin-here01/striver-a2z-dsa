/*
    *   
   ***  
  ***** 
 *******
*********

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern7(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < (n-i-1); j++) {
                cout << " ";
            }
            for(int j = 0; j < (2*i+1); j++) {
                cout << '*';
            }
            for(int j = 1; j < (n-i-1); j++) {
                cout << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    obj.pattern7(n);

    return 0;
}