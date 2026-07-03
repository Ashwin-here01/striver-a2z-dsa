#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p = {1, 2};
    cout << p.second << " " << p.first << endl;

    pair<int, pair<int, int>> a = {1, {2, 3}};
    cout << a.first << " " << a.second.first << " " << a.second.second << endl;

    pair<char, int> b = {'A', 2};
    cout << b.first << " " << b.second << endl;

    pair<string, int> c = {"Harry", 1};
    c.second = 3;
    cout << c.first << " " << c.second << endl;

    pair<int , int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << " " << arr[2].first << endl;

    return 0;
}