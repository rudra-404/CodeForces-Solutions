#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int test, a, b, c, d, count;
    cin >> test;
    while(test--)
    {
        cin >> a >> b >> c >> d;
        count = 0;
        if(b>a) count++;
        if(c>a) count++;
        if(d>a) count++;
        cout << count << "\n";
    }
    return 0;
}