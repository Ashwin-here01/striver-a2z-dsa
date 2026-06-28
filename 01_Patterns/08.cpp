/*
*********
 ******* 
  *****  
   ***   
    *    

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
        for(int i = n; i > 0; i--) {
            for(int j = 0; j < n-i; j++) {
                cout << " ";
            }
            for(int j = 0; j < (2*i-1); j++) {
                cout << "*";
            }
            for(int j = 0; j < n-i; j++) {
                cout << " ";
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
    obj.pattern8(n);

    return 0;
}