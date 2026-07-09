#include <bits/stdc++.h>
using namespace std;

// Sorted
// NOT Unique

int main() {
    multiset<int> ms;
    ms.insert(1);
    ms.emplace(1);
    ms.insert(2);
    ms.insert(1);
    ms.emplace(3);
    ms.emplace(3);
    ms.emplace(3);
    ms.insert(2);
    // {1, 1, 1, 2, 2, 3, 3, 3}

    int count = ms.count(1);
    cout << count << endl; // 3

    ms.erase(2); // Erase ALL the occurances of 2 // {1, 1, 1, 3, 3, 3}

    ms.erase(ms.find(3)); // Only single occurance erased

    ms.erase(ms.find(1), ms.find(3)); // Erase all the occurances of 1 // {3, 3, 3}
    
    return 0;
}