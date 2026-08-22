#include <bits/stdc++.h>
using namespace std;

// Reverse an array using recursion
void reverse_array(int* arr, int l, int r) {
    if(l >= r) {
        return;
    }
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    reverse_array(arr, l+1, r-1);
}

// Reverse an array using single pointer recursion
void reverse_array_s_ptr(int i, int arr[], int n) {
    if(i >= n/2) {
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reverse_array_s_ptr(++i, arr, n);
}

// Check if a string is palindrome using recursion
// TC: O(n/2)
// SC: O(n/2)
bool is_palindrome(string str, int i) {
    if(i >= str.size()) {
        return true;
    }
    if(str[i] != str[str.size()-i-1]) {
        return false;
    }
    return is_palindrome(str, ++i);
}



int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // reverse_array(arr, 0, 9);
    reverse_array_s_ptr(0, arr, 10);
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    string str = "aba";
    if(is_palindrome(str, 0)) {
        cout << "The string is palindrome" << endl;
    } else {
        cout << "The string is NOT palindrome" << endl;
    }

    return 0;
}