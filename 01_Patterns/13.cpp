/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern13(int n) {
        int counter = 1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                cout << counter << " ";
                counter++;
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
    obj.pattern13(n);

    return 0;
}