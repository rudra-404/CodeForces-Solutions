#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    bool printYES = false;
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            printYES = true;
            break;
        }
    }
    if(printYES) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}