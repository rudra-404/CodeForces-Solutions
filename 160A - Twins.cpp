#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total_coin;
    cin>>total_coin;
    int coin[total_coin], sum_of_coins1=0, sum_of_coins2=0, count=0;
    for(int i=0; i<total_coin; i++)
    {
        cin>>coin[i];
        sum_of_coins1+=coin[i];
    }
    sum_of_coins1/=2;
    sort(coin, coin+total_coin);
    for(int i=total_coin-1; i>=0; i--)
    {
        sum_of_coins2+=coin[i];
        count++;
        if(sum_of_coins2>sum_of_coins1) break;
    }
    cout<<count<<endl;
    return 0;
}