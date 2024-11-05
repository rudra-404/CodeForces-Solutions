#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> frequency;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            frequency[arr[i]]++;
        }
        int frequency_max = 0;
        for (auto &pair : frequency)
        {
            if (pair.second > frequency_max) frequency_max = pair.second;
        }
        int result = n - frequency_max;
        cout << result << "\n";
    }
    return 0;
}
