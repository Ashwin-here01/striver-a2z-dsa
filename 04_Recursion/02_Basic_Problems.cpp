#include <bits/stdc++.h>
using namespace std;

void printName(int cnt) {
    if(cnt == 0) return;
    cout << "Harry\n";
    printName(--cnt);
}

void printNumbers1(int i, int cnt) {
    if(i > cnt) return;
    cout << i << endl;
    printNumbers1(++i, cnt);
}

void printNumbers2(int cnt) {
    if(cnt == 0) return;
    cout << cnt << endl;
    printNumbers2(--cnt);
}

void printNumbers3(int cnt) {
    if(cnt < 1) return;
    printNumbers3(cnt - 1);
    cout << cnt << endl; // BackTracking
}

void printNumbers4(int i, int cnt) {
    if(i > cnt) return;
    printNumbers4(i+1, cnt);
    cout << i << endl;
}

int main() {
    printName(5);
    cout << endl;
    
    printNumbers1(1, 5);
    cout << endl;
    
    printNumbers2(5);
    cout << endl;

    printNumbers3(5);
    cout << endl;

    printNumbers4(1, 5);

    return 0;
}