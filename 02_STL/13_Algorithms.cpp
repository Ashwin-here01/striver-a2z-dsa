#include <bits/stdc++.h>
using namespace std;

// Return true if the order is correct (what's needed) otherwise false
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;
}

int main() {
    // sort
    vector<int> v1 = {5, 2, 5, 1, 8, 3, 10, 7};
    sort(v1.begin(), v1.end());
    for(int i : v1) {
        cout << i << " ";
    }
    cout << endl;

    int arr[] = {5, 2, 5, 1, 8, 3, 10, 7}; 
    sort(arr, arr + (sizeof(arr)/sizeof(arr[1])));

    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v2 = {5, 2, 5, 1, 8, 3, 10, 7};
    sort(v2.end() - 3, v2.end());
    for(int i : v2) {
        cout << i << " ";
    }
    cout << endl;
    
    vector<int> v3 = {5, 2, 5, 1, 8, 3, 10, 7};
    sort(v3.begin(), v3.end(), greater<int>()); // To sort in descending order
    for(int i : v3) {
        cout << i << " ";
    }
    cout << endl;

    // Custom sorting (Comparitor)

    pair<int, int> p[] = {{1, 2}, {3, 1}, {2, 1}, {4, 2}};

    // Sort in ascending order of second element
    // If second element is same, sort in descending order of first element

    sort(p, p + (sizeof(p)/sizeof(p[0])), comp);

    for(pair<int, int> i : p) {
        cout << i.first << " " << i.second << endl;
    }



    // reverse

    vector<int> vec = {1, 2, 3, 4, 5};
    reverse(vec.begin(), vec.end());
    for(int i : vec) {
        cout << i << " ";
    }
    cout << endl;



    // popcount
    // Returns the number of set bits (1s in its binary) 

    cout << __builtin_popcount(7) << endl; // 3 // Binary 111
    
    long long int a = 123456789012;
    cout << __builtin_popcountll(a) << endl;



    // next_permutation
    // Gives the NEXT permutation
    string s = "312";
    // Its necessary to start with sorted string, otherwise all the permutations will not be printed
    sort(s.begin(), s.end());
    do {
        cout << s << " ";
    } while(next_permutation(s.begin(), s.end()));



    // Max and min element
    // It returns the address of that element
    int newarr[] = {5, 2, 5, 1, 8, 3, 10, 7};
    cout << endl << *max_element(newarr, newarr + (sizeof(newarr)/sizeof(newarr[0]))) << endl;
    cout << *min_element(newarr, newarr + (sizeof(newarr)/sizeof(newarr[0]))) << endl;

    return 0;
}