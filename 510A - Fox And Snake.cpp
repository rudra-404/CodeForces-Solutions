#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin>>x>>y;
    for(int i=1; i<=x; i++)
    {
        if(i%2==0)
        {
            for(int j=1; j<=y; j++)
            {
                if(i%4==0 && j==1) cout<<"#";
                else if(i%4!=0 && j==y) cout<<"#";
                else cout<<".";
            }
        }
        else
        {
            for(int j=1; j<=y; j++)
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }
    return 0;
}