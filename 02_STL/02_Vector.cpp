#include <bits/stdc++.h>
using namespace std;

// Vector is like array but the size is dynamic (Can be changed)

/*
Working of vector: 
When we insert an element at the end, the size of vector get doubled first and the content of the previous one and the new element(s) get copied to the new vector
We can also check this with capacity() function which returns the size of the vector that is allocated in memory.
{1}
{1, 2}
{1, 2, 3, _}
{1, 2, 3, 4, _, _, _, _}
*/

int main() {
    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    cout << v[0] << endl;
    cout << v.capacity() << endl;
    cout << v.size() << endl;

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