#include <bits/stdc++.h>
using namespace std;

/*
Time Complexities:-
    push() - O(log(n))
    top() - O(1)
    pop() - O(log(n))
*/

int main() {
    // Max heap : Maximum element - Top
    priority_queue<int> pq;
    pq.push(2); // {2}
    pq.push(5); // {5, 2}
    pq.emplace(1); // {5, 2, 1}
    pq.emplace(10); // {10, 5, 2, 1}

    cout << pq.top() << endl; // 10

    pq.pop();

    cout << pq.top() << endl << endl; // 5

    priority_queue<string> a;
    a.push("Zop"); // {Zop}
    a.emplace("Zoq"); // {Zoq, Zop}
    a.emplace("Zoo"); // {Zoq, Zop, Zoo}

    cout << a.top() << endl << endl;


    // Min Heap : Minimum element - Top
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(10); // {10}
    minpq.push(2); // {2, 10}
    minpq.emplace(19); // {2, 10, 19}
    minpq.emplace(1); // {1, 2, 10, 19}

    cout << minpq.top() << endl; // 1

    minpq.pop();

    cout << minpq.top() << endl; // 2

    return 0;
}