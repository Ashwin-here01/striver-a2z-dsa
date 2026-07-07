#include <bits/stdc++.h>
using namespace std;

// Vector is like array but the size is dynamic (Can be changed)

int main() {
    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);
    cout << v[0] << endl;

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(10,20); // Syntactical difference b/w push_back and emplace_back
    cout << vp[1].second << endl;

    vector<int> v1(5);
    v1.push_back(3);
    v1[2] = 444;
    cout << v1[0] << " " << v1[2] << " " <<  v1[5] << endl;

    vector<int> v2(5, 100);
    v2.emplace_back(500);
    cout << v2[2] << " " << v2[5] << endl;

    vector<int> v3(v2);
    cout << v3[5];

    return 0;
}