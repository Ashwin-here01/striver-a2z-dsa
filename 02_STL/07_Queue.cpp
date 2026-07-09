#include <bits/stdc++.h>
using namespace std;

// FIFO : First In First Out (Like a queue)
// There's no indexing in queue... q[2] gives error
// All the operations are O(1) time complexity

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.emplace(30);

    cout << q.back() << endl; // 30
    cout << q.front() << endl; // 10

    q.pop();

    cout << q.front() << endl; // 20

    // Rest functions are same as stack

    return 0;
}