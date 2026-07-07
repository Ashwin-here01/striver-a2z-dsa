#include <bits/stdc++.h>
using namespace std;

// Exact Same as Vector but has front operations as well

int main() {
    // List
    list<int> ls = {10, 20, 30, 40, 50};
    ls.push_back(60);
    ls.emplace_back(70);

    ls.push_front(5);
    ls.emplace_front(1);
    ls.pop_front();
    // cout << ls[0] << endl; // List does not support random accessing (Error)
    
    // Front function is cheaper (in time complexity) than insert function
    
    // Rest all functions are same as vector
    
    // Deque
    deque<int> dq;
    dq.push_back(60);
    dq.emplace_back(70);
    
    dq.push_front(5);
    dq.emplace_front(1);
    dq.pop_front();

    // Front function is cheaper (in time complexity) than insert function
    
    // Rest all functions are same as vector
    
    return 0;
}