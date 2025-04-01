#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    int left = 0, right = n-1, sreja = 0, dima = 0;
    bool isSreja = true;
    while (left <= right) {
        if (isSreja) {
            if (arr[left] > arr[right]) sreja += arr[left++];
            else sreja += arr[right--];
            isSreja = false;
        } else {
            if (arr[left] > arr[right]) dima += arr[left++];
            else dima += arr[right--];
            isSreja = true;
        }
    }
    cout << sreja << " " << dima;
    return 0;
}
