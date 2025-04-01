#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cin>>number;
    int lucky_numbers[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int is_it = 0;
    for(int i=0; i<14; i++){
        if(number%lucky_numbers[i]==0){
            is_it++;
            break;
        }
    }
    if(is_it) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}