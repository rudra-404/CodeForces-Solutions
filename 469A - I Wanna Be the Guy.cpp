#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int>all;
    int n, a, b, temp;
    cin>>n>>a;
    for(int i=1; i<=a; i++){
        cin>>temp;
        all.insert(temp);
    }
    cin>>b;
    for(int i=1; i<=b; i++){
        cin>>temp;
        all.insert(temp);
    }
    if(all.size()==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}