#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m[n];
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < 4; j++)
            {
                if (s[j] == '#')
                {
                    m[n - i - 1] = j + 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << m[i];
            if (i < n - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
