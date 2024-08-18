#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, s1, s2;
    string num;
    cin >> test;
    while(test--)
    {
        s1 = s2 = 0;
        cin >> num;
        for(int i=0; i<num.size(); i++)
        {
            if(i<3) s1 += (48 + num[i]);
            else s2 += (48 + num[i]);
        }
        cout << ((s1==s2)?"YES":"NO") << endl;
    }
    return 0;
}