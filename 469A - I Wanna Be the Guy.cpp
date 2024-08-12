#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, level[200], count = 0;
    cin>>n>>x;
    for(int i=0; i<x; i++) cin>>level[i];
    cin>>y;
    for(int i=x; i<x+y; i++) cin>>level[i];
    sort(level, level+(x+y));
    for(int i=x; i<x+y; i++) if(level[i]!=level[i-1]) count++;
    if(count==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}