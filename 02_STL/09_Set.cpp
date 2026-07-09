#include <bits/stdc++.h>
using namespace std;

// Sorted (Ascending)
// Unique
// Everything happens in O(log(n)) time complexity

int main() {
    set<int> st = {6, 3}; // {3, 6}
    st.insert(1); // {1, 3, 6}
    st.emplace(2); // {1, 2, 3, 6}
    st.insert(3); // {1, 2, 3, 6}

    set<int>::iterator it = st.find(3); // Returns an iterator pointing to the location of 3
    cout << *it << endl;
    
    auto t = st.find(10); // Returns an iterator pointing to st.end()
    cout << *t << endl; // Garbage value
    
    st.erase(3); // {1, 2, 6}

    int count = st.count(6); // 1 // It'll either give 1 or 0 (1 if present, 0 if not present)
    cout << count << endl;

    auto it1 = st.find(1);
    st.erase(it1); // {2, 6}

    st.insert(1);    st.insert(2);    st.insert(3);    st.insert(4);    st.insert(4);   st.insert(5);

    auto it2 = st.find(3);
    auto it3 = st.find(5);
    st.erase(it2, it3); // {1, 2, 5, 6}


    auto lb = st.lower_bound(4);
    cout << *lb << endl;
    
    auto ub = st.upper_bound(2);
    cout << *ub << endl;

    return 0;
}