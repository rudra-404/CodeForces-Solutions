#include<bits/stdc++.h>
using namespace std;
int main(){
    long long total_bacteria;
    int minimum_bacteria=0;
    cin>>total_bacteria;
    while(total_bacteria>0){
        if(total_bacteria%2==1){
            total_bacteria--;
            minimum_bacteria++;
        }
        else total_bacteria/=2;
    }
    cout<<minimum_bacteria<<endl;
    return 0;
}