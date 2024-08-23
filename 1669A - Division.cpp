#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, n;
    cin >> test;
    while(test--)
    {
        cin >> n;
        if(n<=1399) cout << "Division 4\n";
        else if(n<=1599 && n>1399) cout << "Division 3\n";
        else if(n<=1899 && n>1599) cout << "Division 2\n";
        else cout << "Division 1\n";
    }
    return 0;
}