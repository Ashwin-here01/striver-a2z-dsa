// Stack overflow: When the stack memory (where the yet-to-be-completed functions are stored) fills out (infinite recursion)

#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void f() {
    if(cnt == 4) return; // Base case
    cout << cnt++ << endl;
    f();
}

int main() {
    f();
    
    return 0;
}