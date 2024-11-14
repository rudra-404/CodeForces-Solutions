#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t, n, s, m, previous, start, end;
    bool bath;
    cin >> t;
    while(t--)
    {
        cin >> n >> s >> m;
        previous = 0;
        bath = false;
        for(int i=0; i<n; i++)
        {
            cin >> start >> end;
            if(start-previous >= s) bath = true;
            previous = end;
        }
        if(m-end >= s) bath = true;
        cout << (bath ? "YES\n" : "NO\n");
    }
    return 0;
}
