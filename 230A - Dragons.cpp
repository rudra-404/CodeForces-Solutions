#include<bits/stdc++.h>
using namespace std;
int main(){
    int strength, levels;
    bool kirito_win = true;
    cin>>strength>>levels;
    pair <int, int> rounds[1000];
    for(int i=0; i<levels; i++) cin>>rounds[i].first>>rounds[i].second;
    sort(rounds, rounds+levels);
    for(int i=0; i<levels; i++){
        if(strength<=rounds[i].first){
            kirito_win = false;
            break;
        }
        strength += rounds[i].second;
    }
    if(kirito_win)cout<<"YES";
    else cout<<"NO";
    return 0;
}