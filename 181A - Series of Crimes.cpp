#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int n, m, star_row[3], star_col[3], idx = 0;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> ch;
            if(ch == '*')
            {
                star_row[idx] = i;
                star_col[idx] = j;
                idx++;
            }
        }
    }

    // here, 4th star row and col is = star_row[4] and star_col[4]

    if(star_row[0] == star_row[1]) star_row[4] = star_row[2];
    else if(star_row[0] == star_row[2]) star_row[4] = star_row[1];
    else star_row[4] = star_row[0];

    if(star_col[0] == star_col[1]) star_col[4] = star_col[2];
    else if(star_col[0] == star_col[2]) star_col[4] = star_col[1];
    else star_col[4] = star_col[0];

    cout << star_row[4] << " " << star_col[4];
    return 0;
}