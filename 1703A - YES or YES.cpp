#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>str;
        if(str[0]=='y' || str[0]=='Y'){
            if(str[1]=='e' || str[1]=='E'){
                if(str[2]=='s' || str[2]=='S'){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}