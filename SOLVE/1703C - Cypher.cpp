#include<bits/stdc++.h>
using namespace std;
int main () {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++) cin >> arr[i];
        string str[n];
        for (int i=0; i<n; i++) {
            int temp;
            cin >> temp >> str[i];
            for (int j=0; j<temp; j++) {
                if (str[i][j] == 'U') arr[i]--;
                else arr[i]++;
                if (arr[i] > 9) arr[i] = arr[i]%9 - 1;
                else if (arr[i] < 0) arr[i] = arr[i] + 10;
            }
        }
        for (int i=0; i<n; i++) cout << arr[i] << " ";
        cout << "\n";
    }
    return 0;
}