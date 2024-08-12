#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    long long a, b, move;
    cin >> test_case;
    for (int i = 1; i <= test_case; i++)
    {
        cin>>a>>b;
        if(a%b==0) move = 0;
        else move =  b - (a%b);
        cout << move << endl;
    }
    return 0;
}