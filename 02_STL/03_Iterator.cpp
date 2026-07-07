#include <bits/stdc++.h>
using namespace std;

// Iterator is a class object, not a pointer, even though it stores a memory address.

int main() {
    vector<int> v;
    for(int i = 1; i <= 5; i++) {
        v.push_back(i*10);
    }
    v.push_back(60);
    v.emplace_back(70);

    vector<int>::iterator itb = v.begin(); // It stores the memory address
    cout << *itb << endl;
    itb++;
    cout << *itb << endl;
    itb += 2;
    cout << *itb << endl;

    vector<int>::iterator ite = v.end(); // It points to the location right AFTER the last value
    cout << *ite << endl; // Garbage value
    ite--;
    cout << *ite << endl;

    cout << v.back() << endl;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;
    for(auto it = v.begin(); it != v.end(); it++) { // "auto" auto assigns the datatype according to the data
        cout << *it << " ";
    }

    cout << endl;
    for(auto n : v) { // auto = int, NOT iterator
        cout << n << " ";
    }

    return 0;
}