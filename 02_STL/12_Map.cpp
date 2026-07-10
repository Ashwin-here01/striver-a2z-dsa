#include <bits/stdc++.h>
using namespace std;

// Key - Value pair
// Key - Unique & Sorted (Ascending)

int main() {
    map<int, int> mp;
    map<pair<int, int>, int> mpp;

    mp[1] = 2;
    mp.emplace(10, 3);
    mp.insert({5, 4});

    mpp[{10, 20}] = 30;

    for(auto it : mp) {
        cout << it.first << " " << it.second << "\n";
    }

    cout << mp[1] << endl; // 2 // 1 is not index, its key
    cout << mp[2] << endl; // 0 // Doesn't exist

    auto it = mp.find(5);
    cout << (*it).second << endl;
    it = mp.find(2); // Points to mp.end()
    cout << (*it).second << endl;

    // lower_bound, upper_bound and rest all functions are same



    // Multimap - Key can be duplicate but in sorted order
    // Similar to multiset
    // Time complexity : O(log(n))



    // Unordered_map - Key is unique but in random order
    // Similar to unordered_set
    // Time complexity : O(1) (except some case when collision happen O(n))


    return 0;
}