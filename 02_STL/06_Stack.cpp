#include <bits/stdc++.h>
using namespace std;

// LIFO : Last In First Out
// There's no indexing in stack... st[2] gives error
// All the operations are O(1) time complexity

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.emplace(30);
    st.emplace(40);
    st.emplace(50);

    cout << st.top() << endl; // 50
    
    st.pop();
    
    cout << st.top() << endl; // 40
    cout << st.size() << endl; // 4
    cout << st.empty() << endl; // 0

    stack<int> st1;
    st.swap(st1);
    cout << st1.top(); // 40

    return 0;
}