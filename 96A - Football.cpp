#include<bits/stdc++.h>
using namespace std;
int main(){
    string current_situation;
    cin>>current_situation;
    int dangerous = 0;
    for(int i=1; i<current_situation.size(); i++){
        if(current_situation[i-1]==current_situation[i]){
            dangerous++;
            if(dangerous==6){
                cout<<"YES"<<endl;
                break;
            }
            continue;
        }
        dangerous = 0;
    }
    if(dangerous<6) cout<<"NO"<<endl;
    return 0;
}