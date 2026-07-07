#include <bits/stdc++.h>
using namespace std;

int main() {
    // Erase Function
    vector<int> v1 = {10, 20, 30, 1, 40, 50};
    for(int i : v1) {
        cout << i << " ";
    }
    cout << endl;
    
    v1.erase(v1.begin()+3);
    
    for(int i : v1) {
        cout << i << " ";
    }
    cout << endl << endl;
    
    vector<int> v2 = {10, 20, 1, 2, 3, 30, 40, 50};
    for(int i : v2) {
        cout << i << " ";
    }
    cout << endl;
    
    v2.erase(v2.begin()+2, v2.begin()+5); //Starting address, One after the ending address

    for(int i : v2) {
        cout << i << " ";
    }
    cout << endl << endl;
    
    // Insert Function
    vector<int> v = {10, 20, 30, 40, 50};
    v.insert(v.begin(), 0);

    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;
    
    v.insert(v.begin() + 2, 2, 5); // 2 Occurances of 5

    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;
    
    v.insert(v.end(), v1.begin(), v1.end());

    for(int i : v) {
        cout << i << " ";
    }
    cout << endl << endl;

    // Size Function
    cout << v1.size() << endl << endl;

    // pop_back Function
    v1.pop_back();

    for(int i : v1) {
        cout << i << " ";
    }
    cout << endl << endl;

    // swap Function
    vector<int> first = {10, 20, 100};
    vector<int> second = {30, 40};
    
    first.swap(second);  // first = {30, 40}     second = {10, 20, 100}

    // clear Function
    v1.clear(); // Clears all the data in that vector

    // empty Function
    cout << v1.empty() << endl; // True
    cout << v2.empty() << endl; // False
    
    return 0;
}