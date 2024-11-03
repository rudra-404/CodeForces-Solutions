#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, total_seat, temp;
    set<int> seat;
    cin>>t;
    while(t--)
    {
        cin>>total_seat;
        cin>>temp;
        seat.insert(temp);
        for(int i=2; i<=total_seat; i++)
        {
            auto first_element = seat.begin();
            int last_element = *seat.rbegin();
            cin>>temp;
            if( (temp+1)==*first_element || (temp-1)==last_element )
            {
                seat.insert(temp);
            }
        }
        if(total_seat==seat.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        seat.clear();
    }
    return 0;
}