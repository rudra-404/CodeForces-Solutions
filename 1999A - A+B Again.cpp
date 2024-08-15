#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a;
        b = a%10;
        a = a/10;
        cout << a+b << endl;
    }
    return 0;
}